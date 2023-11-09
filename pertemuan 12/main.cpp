#include <iostream>
//Gita Pratiwi - A11.2021.13351
using namespace std;
//Double Linked List - Minggu 12
struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void awal(){
    head=NULL;
    tail=NULL;
}

bool isEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void tambahDpn (int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << " berhasil ditambahkan" << endl;
}
void tambahBlkg (int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        tail->next = nodeBaru; //tail mengarah ke node baru
        nodeBaru->prev = tail; //node baru prevnya mengarah ke tail
        tail = nodeBaru; // tail diganti dengan node yang baru
    }
    cout << dataBaru << " berhasil ditambahkan" << endl;
}
void tambahTngh(int nodeSetelah, int dataBaru){
    Node *nodeBaru, *current, * current2;

    nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    current = head;
    while(current->data != nodeSetelah){
        current = current->next;
    }

    current2 = current->next;

    nodeBaru->next = current2;
    nodeBaru->prev = current;

    current2->prev = nodeBaru;
    current->next = nodeBaru;
    cout << "Data " << dataBaru << " ditambahkan diantara " << current->data << " dan " << current2->data << endl;
}
void hapusBlkg(){
    Node *dihapus;

    if(isEmpty()){
        cout << "Kosong, tidak ada yang dihapus" << endl;
    }else{
        if(head->next != NULL){
            //disini kalo node lebih dari satu
            tail = tail->prev; //buntutnya ganti node sebelum tail
            tail->next = NULL; //nextnya buat NULL
        }else{
            //disini kalo node cuma 1
            //langsung ke buat DLL nya NULL
            dihapus = head;
            head = NULL;
            tail = NULL;
        }
    }
    cout << "Node paling belakang sudah terhapus" << endl;
}
void hapusDpn(){
    if(isEmpty()){
        cout << "Kosong, tidak ada yang dihapus" << endl;
    }else{
        if(head->next != NULL){
            //disini kalo node lebih dari 1
            head = head->next; //head diganti jadi next nya head
            head->prev = NULL;
        }else{
            //disini kalo node cuma 1
            //langsung ke buat DLL nya NULL
            head = NULL;
            tail = NULL;
        }
    }
    cout << "Node paling depan sudah terhapus" << endl;
}
void hapusTngh(int nodeSetelah){
    Node *hapus, *current, *current2;

    current = head;
    while(current->data !=nodeSetelah){
        current = current->next;
    }
    hapus = current;
    current2 = current->next;

    current = hapus->prev;

    current->next = current2;
    current2->prev = current;

    cout << "sudah terhapus" << endl;
    delete hapus;
}
void tampil(){
    Node *current;
    current = head;
    if(!isEmpty()){
        while(current != NULL){
            cout << "<- " << current->data << " ->";
            current = current->next;
        }
        cout << endl;
    }else{
        cout << "Belum ada data di DLL " << endl;
    }
}
int main()
{
    tambahDpn(10);
    tampil();

    tambahDpn(2);
    tampil();

    tambahBlkg(3);
    tampil();

    hapusBlkg();
    tampil();

    hapusDpn();
    tampil();

    tambahDpn(2);
    tampil();

    tambahBlkg(3);
    tampil();

    tambahTngh(2, 29);
    tampil();

    hapusTngh(29);
    tampil();

    tambahTngh(30,21);
    tampil();

    return 0;
}
