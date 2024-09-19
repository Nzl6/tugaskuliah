#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout << "Masukan nilai (0-100) : ";
    cin >> nilai;

    if (nilai >= 90 && nilai <= 100){
        cout << "Selamat!! Anda mendapatkan A.";

    }else if (nilai >=80 && nilai < 90){
        cout << "Anda mendapatkan B.";

    }else if (nilai >=70 && nilai < 80){
        cout << "Anda mendapatkan C.";

    }else if (nilai >=60 && nilai < 70){
        cout << "Anda mendapatkan D.";

    }else if (nilai < 60){
        cout << "Anda mendapatkan E.";

    } else {
        cout<< "Nilai yang dimasukan tidak valid!!"<< endl;

    }

return 0;

}
