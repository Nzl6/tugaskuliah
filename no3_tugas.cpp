#include <iostream>
using namespace std;

int main(){
    int pilihan;
    float sisi, lebar, panjang, alas, tinggi, luas;

    while (true){
    cout << "Pilihlah bangun datar yang kamu mau hitung luasnya!" << endl;
    cout << " 1.Persegi \n 2.Persegi Panjang \n 3.Segitiga \n" << "\n";
    cin >> pilihan ;

    switch (pilihan){
        case 1:
            cout << "Masukan panjang sisi persegi : " << endl;
            cin >> sisi ;
            luas = sisi * sisi;
            cout << "Luas persegi :" << luas << endl;
            break;

        case 2:
            cout << "Masukan panjang : " << endl;
            cin >> panjang ;
            cout << "Masukan lebar : " << endl;
            cin >> lebar ;
            luas = panjang * lebar;
            cout << "Luas persegi panjang :" << luas << endl;
            break;

        case 3:
            cout << "Masukan panjang alas :" << endl;
            cin >> alas ;
            cout << "Masukan tinggi : " << endl;
            cin >> tinggi ;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga :" << luas << endl;
            break;

        default:
            cout << "PILIHAN TIDAK VALID!!" << endl;
            break;

        }
    }


    return 0;

}
