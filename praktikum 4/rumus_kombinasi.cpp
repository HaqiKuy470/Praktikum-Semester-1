#include <iostream>
#include <limits> 
using namespace std;

long long kombinasi(int n, int r) {
       if (r > n - r) {
        r = n - r;
    }
    long long hasil = 1;
    for (int i = 1; i <= r; ++i) {
        hasil *= (n - i + 1);
        hasil /= i;
    }
    return hasil;
}

int main() {
    int n, r;
    cout << "===== RUMUS KOMBINASI =====" << endl;
    cout << endl;
    cout << "         n!" << endl;
    cout << "-------------------------" << endl;
    cout << "      r! * (n - r)!" << endl;
    cout << endl;
    cout << "Masukkan nilai n : ";
    cin >> n;

    if (cin.fail() || n < 0) {
        cerr << "Error: Input tidak valid. 'n' harus berupa bilangan bulat non-negatif." << endl;
        return 1;
    }

    cout << "Masukkan nilai r : ";
    cin >> r;
    if (cin.fail() || r < 0 || r > n) {
        cerr << "Error: Input tidak valid. 'r' harus berupa bilangan bulat non-negatif dan tidak lebih besar dari 'n'." << endl;
        return 1;
    }
    cout << "\nHasil " << n << " Kombinasi " << r << " adalah : " << kombinasi(n, r) << endl;

    return 0;
}
