#include <iostream>

using namespace std;

//SLL
struct node{
    int data;
    node *next;  //menuju pointer dimana node di memory berada
};

node *head; // deklarasi head

//saat ksosong SLL head dan tail mengarah kemana2
void awal(){
    head=NULL;
}

//cek apakah SLL kosong atau tidak
bool isEmpty(){
    if(head==NULL){
        return true;
    }else{
        return false;
    }
}


void tampil(){
    if(isEmpty()){
        cout << "TAK ADA DATA" << endl;
    }else{
        node *bantu;
        for(bantu=head; bantu!=NULL; bantu= bantu->next){
            cout << bantu->data << " -> ";
        }
        cout << endl;
    }
}

void hapusDepan(){
    //kita buat node bantu untuk
    //tampung sementara
    node *hapus, *bantu;
    int temp;
    if(!isEmpty()){
        if(head->next!=NULL){

            hapus = head;
            temp = hapus->data;
            head = head->next;


            delete hapus;
        }else{
            temp = head->data;
            head = NULL;
        }
        cout << temp << " sudah terhapus" << endl;
    }else{
        cout << "data masih kosong" ;
    }
}

void tambahBlkg(int dataBaru){
    node *nodeBaru, *bantu;
    nodeBaru = new node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;

    if(isEmpty()){
        head = nodeBaru;
        head->next = NULL;
    }else{
        bantu = head;
        while(bantu->next != NULL){
            bantu = bantu -> next;
        }
        bantu->next = nodeBaru;
    }
   cout << dataBaru << " Berhasil ditambahkan di belakang " << endl;
}

int main()
{
    tambahBlkg(10);
    tampil();

    tambahBlkg(2);
    tampil();

    tambahBlkg(8);
    tampil();

    hapusDepan();
    tampil();

    tambahBlkg(9);
    tampil();

    return 0;
}
