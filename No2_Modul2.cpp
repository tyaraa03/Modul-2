#include <iostream>
using namespace std;

int main() {
    char Kode;
    int Uang;
	int Harga;

    cout << "SELAMAT DATANG DI VENDING MECHINE" << endl;
    cout << "A. Minuman A harganya Rp5000" << endl;
    cout << "B. Minuman B harganya Rp7000" << endl;
    cout << "C. Minuman C harganya Rp10000" << endl;

    cout << "Masukkan kode minuman (A/B/C): ";
    cin >> Kode;

    switch (Kode) {
        case 'A':
        case 'a':
            Harga = 5000;
            break;

        case 'B':
        case 'b':
            Harga = 7000;
            break;

        case 'C':
        case 'c':
            Harga = 10000;
            break;

        default:
            cout << "Kode minuman tidak tersedia";
            return 0;
    }

    cout << "Masukkan uang: Rp ";
    cin >> Uang;

    if (Uang < Harga) {
        cout << "Uang tidak cukup";
    }
    else {
        cout << "Minuman berhasil dibeli" << endl;
        cout << "Kembalian: Rp " << Uang - Harga;
    }

    return 0;
}
