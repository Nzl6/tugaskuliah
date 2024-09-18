#include <iostream>
using namespace std;
int main(){

    int angka1, angka2, angka3;
    cout<<"Halo!! Mari saya bantu memilih angka terbesar :3" << endl;
    cout << "Masukan angka pertamanya yaa" << endl ;
    cin >> angka1;
    cout << "Sekarang angka keduanya" << endl ;
    cin >> angka2 ;
    cout << "Yang terakhir" << endl ;
    cin >> angka3 ;

    if (angka1 > angka2&&angka3){
        cout << angka1;

    }else if (angka2 > angka3&&angka1){
        cout << angka2;

    }else if (angka3 > angka1&&angka2){
        cout << angka3;

    }else {
        cout << "Maaf aku ga ngerti;/";

    }

    return 0;


}
