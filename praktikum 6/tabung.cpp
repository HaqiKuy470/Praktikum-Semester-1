#include <iostream>
#include <iomanip>
using namespace std;

const float phi = 3.14;

float luasSelimut(float r, float t) {
    return 2 * phi * r * t;
}

float luasPermukaan(float r, float t) {
    return 2 * phi * r * (r + t);
}

float volumeTabung(float r, float t) {
    return phi * r * r * t;
}

// Program utama
int main() {
    float r, t;

    cout << "--------------------------------------------" << endl;
    cout << "               MODUL FUNCTION               " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "             PROGRAM COMBINASI              " << endl;
    cout << "              PROGRAM TABUNG                " << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Masukkan Nilai Jari-Jari Tabung : ";
    cin >> r;
    cout << "Masukkan Nilai Tinggi Tabung    : ";
    cin >> t;

    cout << "--------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "\nNilai Luas Tabung     = " << luasPermukaan(r, t) << endl;
    cout << "Nilai Selimut Tabung  = " << luasSelimut(r, t) << endl;
    cout << "Nilai Volume Tabung   = " << volumeTabung(r, t) << endl;

    cout << "--------------------------------------------" << endl;

    return 0;
}
