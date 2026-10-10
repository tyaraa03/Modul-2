#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float saldo = 1000000;
    float tarik;

    cout << "SELAMAT DATANG DI ATM SEDERHANA" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukkan pilihan anda (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Saldo anda adalah Rp. " << saldo << endl;
            break;

        case 2:
            cout << "Masukkan jumlah yang ingin ditarik: Rp. ";
            cin >> tarik;

            if (tarik <= 0) {
                cout << "Jumlah penarikan tidak valid." << endl;
            } else if (tarik > saldo) {
                cout << "Saldo anda tidak cukup untuk melakukan penarikan." << endl;
            } else {
                saldo = saldo - tarik;
                cout << "Anda telah menarik Rp. " << tarik << endl;
                cout << "Sisa saldo anda adalah Rp. " << saldo << endl;
            }
            break;

        case 3:
            cout << "Terima kasih telah menggunakan ATM kami." << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
            break;
    }

    return 0;
}


