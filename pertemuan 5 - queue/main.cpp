#include <iostream>
#define MAX 6
using namespace std;
struct antrian{
    string pilihan;
    string macam[MAX];
};
antrian macam;
bool isEmpty(){
    return macam.pilihan == -1; //kosong or not
}

//function cek tumpukan full
bool isFull(){
    return macam.pilihan == MAX-1; //full or not
}
void push(string jenis){
    if(isFull()){ //kondisi full
        cout << "Program Penuh" << endl;
    }else{
        macam.pilihan = macam.pilihan + 1; //nambah posisi top
        macam.nama[macam.pilihan] = jenis;
    }
}
void tampil(){
    if(isEmpty()){
        cout << "wah tidak ada antrian" << endl;
    }else{
        for(int x=1; x<=macam.pilihan; x=x+1){
         cout << macam.nama[x] << endl;
        }
        //cout << "alat perta" << endl;
    }
}
void pop(){
    if(isEmpty()){ //spbu kosong
        cout << "tidak ada macam" << endl;
    }else{
        //konsepnya di replace, posisi ke-2 ke posisi ke-1 dst.
        for(int x=1; x<=macam.pilihan; x=x+1){
            macam.nama[x] = macam.nama[x+1];
        }
        macam.pilihan = macam.pilihan-1;
    }
}
int main()
{
     int pilihan;

        cout << "1. Tambah Macam Crypto" << endl;
        cout << "2. Hapus Macam Crypto" << endl;
        cout << "3. tampilkan Macam Crypto" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;


    push("Bitcoin (BTC)");
    push("Ethereum (ETH)");
    push("Koin Binance(BNB)");
    push("Tether (USDT)");

    if ( pilihan == 1) {

            push(macam)
        }
        else if (pilihan == 2) {
            pop();
        }
        else if (pilihan == 3) {
            tampil();
        }
        else {
            cout << "Menu tidak tersedia" << endl;
        }

    return 0;
}
