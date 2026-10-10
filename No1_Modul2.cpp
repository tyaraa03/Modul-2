#include <iostream>
using namespace std;

int main() {
    float TotalBelanja ;
	float Diskon ;
	float TotalBayar ;

    cout << "Masukkan total belanja: Rp ";
    cin >> TotalBelanja;

    if (TotalBelanja > 500000) {
        Diskon = TotalBelanja * 0.20;
    }
    else if (TotalBelanja > 100000) {
        Diskon = TotalBelanja * 0.10;
    }
    else {
        Diskon = 0;
    }
    TotalBayar = TotalBelanja - Diskon;

    cout << "Diskon: Rp " << Diskon << endl;
    cout << "Total yang harus dibayar: Rp " << TotalBayar << endl;
    return 0;
}
