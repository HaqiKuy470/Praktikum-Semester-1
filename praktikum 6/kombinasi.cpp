#include <iostream>
using namespace std;

long faktorial(int n) {
    long hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

long kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

// Program utama
int main() {
    int n, r;

    cout << "--------------------------------------------" << endl;
    cout << "               MODUL FUNCTION               " << endl;
	cout << "--------------------------------------------" << endl;
    cout << "             PROGRAM COMBINASI              " << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Masukkan Nilai n : ";
    cin >> n;
    cout << "Masukkan Nilai r : ";
    cin >> r;

    if (r > n) {
        cout << "Error: Nilai r tidak boleh lebih besar dari n." << endl;
    } else {
        cout << "Hasil Kombinasi " << n << "C" << r << " adalah " << kombinasi(n, r) << endl;
    }

    return 0;
}
