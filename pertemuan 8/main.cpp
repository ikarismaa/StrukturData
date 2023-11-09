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
        bantu = head ;
        int tumpukan [6], x=0,y;
        do{
         tumpukan[x] = bantu ->data;
         bantu = bantu ->next;
         x++;
        }while(bantu!=NULL);
        for(y=x-1; y>=0; y--)
        cout << tumpukan[y] << endl;
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

    hapusBlkg();
    tampil();

    tambahBlkg(9);
    tampil();

    return 0;
}
