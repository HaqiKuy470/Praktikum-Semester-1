#include <iostream>
#include <cmath>
using namespace std;

float hitungRataRata(float data[], int n) {
    float jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += data[i];
    }
    return jumlah / n;
}

float hitungSimpanganBaku(float data[], int n) {
    float rata = hitungRataRata(data, n);
    float jumlahSelisih = 0;
    for (int i = 0; i < n; i++) {
        jumlahSelisih += pow(data[i] - rata, 2);
    }
    return sqrt(jumlahSelisih / (n - 1)); 
}

int main() {
    float data[100];
    int n = 0;
    char lagi;

    cout << "----------------------------------------------------\n";
    cout << "                    MODUL FUNCTION\n";
    cout << "----------------------------------------------------\n";
    cout << "           PROGRAM STANDAR DEVIASI\n";
	cout << "----------------------------------------------------\n";

    do {
        cout << "Masukkan data : ";
        cin >> data[n];
        n++;

        cout << "Masukkan Data Lagi? (y/n) : ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    float rata = hitungRataRata(data, n);
    float simpangan = hitungSimpanganBaku(data, n);

    cout << "\nNilai Rata-rata : " << rata << endl;
    cout << "Simpangan Baku  : " << simpangan << endl;

    return 0;
}
