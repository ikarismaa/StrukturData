#include <iostream>

using namespace std;
struct Node{
    int harga;
    string nama;
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

void tambahDpn (int hargaBaru,string namaBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->harga = hargaBaru;
    nodeBaru->nama = namaBaru;
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
}
void tampil(){
    Node *current;

    if(isEmpty()){
        cout << "Belum ada data di DLL" << endl;
    }else{
        int total = 0;
    for(current = head; current != NULL; current = current->next){
            total = total + current->harga;
        cout << "Nama barang: " << current->nama << endl;
        cout << "Harga: " << current->harga << endl;
        cout << endl;
    }
    cout << "Total belanjaan: " << total << endl;
    cout << endl;
    }

}

void tmbhBlkg(int hargaBaru,string namaBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->harga = hargaBaru;
    nodeBaru->nama = namaBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        tail->next = nodeBaru;
        nodeBaru->prev = tail;
        tail = nodeBaru;

    }
}
void hapusBlkg(){
    Node *dihapus;

    if(isEmpty()){
        cout << "Kosong yaaaaa, Tidak ada yang diHapus" << endl;
    }else{
        if(head->next != NULL){
            dihapus = tail;
            tail = tail->prev;
            tail->next = NULL;
        }else{
            head = NULL;
            tail = NULL;
        }
    }
}

void hapusDpn(){
     Node *dihapus;

    if(isEmpty()){
        cout << "Kosong yaaaaa, Tidak ada yang diHapus" << endl;
    }else{
        if(head->next != NULL){
           head = head->next;
           head->prev = NULL;

        }else{
            head = NULL;
            tail = NULL;
        }
    }
}
void tampilHead(){
    if(isEmpty()){
        cout << "Tiada Node " << endl;
    }else{
        cout << head->nama;
    }
}
void tampilTail(){
    if(isEmpty()){
       cout << "Tiada Node " << endl;
    }else{
        cout << tail->nama;
    }
}
int main()
{
    awal();
    cout << "total belanja setelah tambah depan" << endl;
    tambahDpn(1000,"shampoo");
    tambahDpn(2000,"milo");
    tambahDpn(1000,"milkita");
    tampil();
    cout << "total belanja setelah tambah belakang" << endl;
    tmbhBlkg(2500,"soklin");
    tampil();

    cout <<endl;
    cout << "total belanja setelah hapus belakang" << endl;

    hapusBlkg();
    tampil();

    cout <<endl;
    cout << "total belanja setelah hapus depan" << endl;

    hapusDpn();
    tampil();
    return 0;
}
