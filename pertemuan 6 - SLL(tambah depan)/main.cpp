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

//tambah data di depan
void tambahDpn(int dataBaru){
    //buat objek sementara
    //node sementara akan dimasukkan ke SLL
        node *nodeBaru;    //buat objek sementara
        nodeBaru = new node;
        nodeBaru->data = dataBaru;  // set ke objek
        nodeBaru->next = NULL;  //set pointer ke objek

    if(isEmpty()){ //jika node masih ada
        head = nodeBaru;      //masukkan ke SLL
        head->next = NULL;
    }else{
        nodeBaru->next = head;
        head = nodeBaru;
    }

}

void tampil(){
    if(isEmpty()){
        cout << "TAK ADA DATA" << endl;
    }else{
        node *bantu;
        bantu = head;
        do{
            cout << bantu->data << " -> ";
            bantu = bantu->next;
        }while(bantu!=NULL);
        cout << endl;
    }
}

int main()

{
    tambahDpn(30);
    tambahDpn(21);
    tampil();
    return 0;
}
