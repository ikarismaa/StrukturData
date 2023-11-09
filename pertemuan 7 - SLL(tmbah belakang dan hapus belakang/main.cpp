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
        for(bantu=head; bantu!=NULL; bantu= bantu->next){
            cout << bantu->data << "->";
        }
        /*
        do{
            cout << bantu->data << "->";
            bantu = bantu->next;
        }while(bantu!=NULL);*/
        cout << endl;
    }
}
void hapusBlkg(){
    //kita buat node bantu untuk
    //tampung sementara
    node *hapus, *bantu;
    int temp;
    if(!isEmpty()){
        if(head->next!=NULL){
            bantu = head;
            while(bantu->next->next!=NULL){
                bantu = bantu->next;
            }
            hapus = bantu->next;
            temp = hapus->data;
            bantu->next=NULL;
            delete hapus;
        }else{
            temp = head->data;
            head = NULL;
        }
        //cout << temp << " sudah terhapus" << endl;
        cout << endl;
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

}

int main()
{
    tambahBlkg(10);
    tambahBlkg(2);
    tambahBlkg(8);
    tambahBlkg(9);
    tampil();
    hapusBlkg();
    tampil();

    return 0;
}
