#include <iostream>

using namespace std;

struct node{
    int data;    // isi data di node
    node *next;  //pointer next
    node *prev;   // pointer previous
};

node *head;  // deklarasi head
node *tail;  // deklarasi buntut

void awal(){
    head=NULL;
    tail=NULL;
}

//cek apakah SLL kosong atau tidak
bool isEmpty(){
    if(head==NULL){
        return true;
    }else{
        return false;
    }
}

void tambahDpn(int dataBaru){
    node *nodeBaru;
    nodeBaru = new node;

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
}

void tampil (){
    node *current;
    if(isEmpty()){
            cout << "Belum ada data di DLL" << endl;

    }else{
         for(current = head; current !=NULL; current = current->next){
        cout << "<- " << current->data << " ->" ;
        }
     cout << endl;
    }
}

int main()
{
   awal();
   tambahDpn(7);
   tambahDpn(8);
   tambahDpn(9);
   tampil();

    return 0;
}
