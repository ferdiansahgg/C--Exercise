 #include <iostream>
using namespace std;
int main() {
    int user_input, x;
    cout << "Program Pengecekan Angka Prima\n";
    cout << "Masukan Angka terakhir: ";
    cin >> user_input;
    //loop ini untuk mencari nilai prima berdasarkan angka yang dimasukan oleh pengguna
    for (int i = 2; i < user_input; i++){// saya mulai dari 2 karena angka 1 dan 2 adalah angka dasar dari bilangan prima
        x = 0;//variabel untuk memeriksa apakah suatu bilangan prima. Jika diatur ke 1 angkanya tidak prima.
        for (int j = 2; j < i; j++){//loop ini membagi angka dengan 2 hingga dengan sendirinya dan jika sisanya adalah 0 set x = 1.
            if (i%j == 0){
                x = 1;
                break;
            }
        }
        if (x == 0){//jika bendera x = 1 tidak pernah diset maka angkanya prima.
            cout << i << " is a prime number\n";
        }
    }
    return 0;
}
