#include <iostream>

using namespace std;

int main()
{
    //LOOPING ANGKA 1-15
    cout << "LOOPING ANGKA 1-15" << endl << endl;
    for(int x=1; x<16;x++){
        cout << x << endl;
    }
    cout << endl;
    //LOOPING MENAMBAHKAN ANGKA 1-15
    cout << "LOOPING MENAMBAHKAN ANGKA 1-15" << endl;
    int sum;
    sum = 0;
        for(int x=1; x<16; x++){
            sum = sum + x ;
        }
        cout << "hasil perjumlahan = " << sum << endl;
        cout << endl;

        //LOOPING MENGALIKAN ANGKA 1-15
    cout << "LOOPING MENGALIKAN ANGKA 1-15" << endl;
    int kali;

        for(int x=1; x<16; x++){
            kali = kali * x ;
        }
        cout << "hasil perkalian = " << kali << endl;
        cout << endl;

            cout << "LOOPING MEMBAGI ANGKA 9 SAMPAI 3" << endl;
    float bagi = 9;

        for(int x=8; x>2; x--){
            bagi = bagi/x;
        }
        cout << "hasil membagi angka 9 sampai 3 = " << bagi << endl;
        cout << endl;

         cout << "LOOPING MEMBAGI ANGKA 9/6/3" << endl;
    float y= 0;

        for(float y=9; y>2; y=y-3){
            bagi = y/6;
        }
        cout << "hasil membagi angka 9/6/3 = " << bagi << endl;
        cout << endl;

        //LOOPING MENAMBAHKAN ANGKA (-3) sampai (-9)
    cout << "LOOPING MENAMBAHKAN ANGKA (-3) sampai (-9)" << endl;
    int sum2;
        for(int x=-3; x>-10; x=x-1){
            sum2 = sum2 + x ;
        }
        cout << "hasil perjumlahan (-3) sampai (-9) = " << sum2 << endl;
        cout << endl;
    return 0;
}
