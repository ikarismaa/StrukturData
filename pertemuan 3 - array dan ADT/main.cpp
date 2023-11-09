#include <iostream>

using namespace std;

int main()
{
/*
  cout << "1. Array umur untuk menampung data dan tampilkan dengan looping" << endl << endl;
    int umur [5] = {3,8,9,19,6};

    for(int x=0;x<5;x++){
    cout << umur[x] << endl;
    }
*/
/*
 cout << "2.Program menginputkan data ke array umur dan tampilkan" << endl;
    int umur[5];

    for(int x=0; x<5; x++){
        cout << "Masukkan umur : ";
        cin >> umur[x];
    }
    cout << endl;
    for(int x=0; x<5; x++){
        cout << umur[x] << ", ";
    }
*/
/*
  cout << "3.Menjumlahkan semua umur pada Soal NO.2" << endl;
    int hasil;
    hasil=0;
    int umur[5];

    for(int x=0; x<5; x++){
        cout << "Masukkan umur : ";
        cin >> umur[x];
    }
    cout << endl;
    for(int x=0; x<5; x++){
        cout << umur[x] << " " ;
        hasil = hasil + umur[x] ;
    }
    cout << endl;
    cout << "Hasil perjumlahan umur = " << hasil <<endl;

*/
/*
    cout << "4.Program menginput sisi ke array sisi dan jumlahkan luas persegi " << endl;
    int hasil =0;
    int LUAS = 0;
    int sisi[3];

    for(int x=0; x<3; x++){
        cout << "Masukkan Sisi = ";
        cin >> sisi[x];
    }
    cout << endl;
    for(int x=0;x<3;x++){
        LUAS = sisi[x] * sisi[x];
        hasil = hasil + LUAS;
    }
    cout << "hasil perjumlahan Luas = " << hasil ;
*/

    cout << "5. buatlah adt " << endl;
    struct teman{
        string nama , game, nim;
        int umur;
    };
     teman ika;
     teman gita;
     teman tiara;
     teman rara;
     teman billa;

     ika.nama = "Ika Risma";
     ika.umur = 19;
     ika.nim = "a11202113284";
     ika.game = "Minicraft";

     gita.nama = "Gitap Pratiwi";
     gita.umur = 19;
     gita.nim = "a11202113351";
     gita.game = "ShopeeGame";

     tiara.nama = "Tiara Malsa A";
     tiara.umur = 19;
     tiara.nim = "a11202113352";
     tiara.game = "Candy Crush";

     rara.nama = "Mutiara Syabilla";
     rara.umur = 19;
     rara.nim = "a11202113251";
     rara.game = "Pou";

     billa.nama = "Nabilla N.F";
     billa.umur = 19;
     billa.nim = "a11202113256";
     billa.game = "Shopee tebak kata";

     cout << " nama : " << ika.nama << endl;
     cout << " umur : " << ika.umur << endl;
     cout << " nim : " << ika.nim << endl;
     cout << " game : " << ika.game << endl << endl;

     cout << " nama : " << gita.nama << endl;
     cout << " umur : " << gita.umur << endl;
     cout << " nim : " << gita.nim << endl;
     cout << " game : " << gita.game << endl << endl;

     cout << " nama : " << tiara.nama << endl;
     cout << " umur : " << tiara.umur << endl;
     cout << " nim : " << tiara.nim << endl;
     cout << " game : " << tiara.game << endl << endl;

     cout << " nama : " << rara.nama << endl;
     cout << " umur : " << rara.umur << endl;
     cout << " nim : " << rara.nim << endl;
     cout << " game : " << rara.game << endl << endl;

     cout << " nama : " << billa.nama << endl;
     cout << " umur : " << billa.umur << endl;
     cout << " nim : " << billa.nim << endl;
     cout << " game : " << billa.game << endl << endl;



    return 0;
}
