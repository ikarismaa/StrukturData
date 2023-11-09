#include <iostream>
#define MAX 9
using namespace std;
//buat tumpukan
struct game{
    int top, data[MAX];
};
//buat objek
game permainan;

//function cek tumpukan kosong
bool isEmpty(){
    return permainan.top == -1; //kosong or not
}

//function cek tumpukan full
bool isFull(){
    return permainan.top == MAX-1; //full or not
}

//masukan ke game
void tampilkan(){
    if(isEmpty()){ //kondisi full
        cout << "KOSONG! Game tidak ada" << endl;
    }else{
        for(int x=permainan.top; x>=1; x--)
            cout << "Game: " << x << " adalah: " << permainan.data[x] << endl;
    }
}
//print semua isi game
void push(int tumpukan){
    if(isFull()){ //game kosong
        cout << "Kosong! Game tidak ada" << endl;
    }else{ //kondisi belum full
        //isi ke game
        permainan.top = permainan.top + 1; //nambah posisi top
        permainan.data[permainan.top] = tumpukan;

        cout << "Game: " << permainan.top  << endl;
        cout << "ke urutan: " << permainan.data[permainan.top] << endl << endl;
    }
}
//ambil dari game
void pop(){
    if(isEmpty()){ //game kosong
        cout << "Kosong! Game tidak ada" << endl;
    }else{
        permainan.top = permainan.top -1 ;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    tampilkan();
    cout << endl;
    push(5);
    push(6);
    push(7);
    push(8);
    pop();
    tampilkan();
    return 0;
}
