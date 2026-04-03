#include <iostream>

using namespace std;

int main() {
    cout << "=== TUGAS 1: IMPLEMENTASI ARRAY ===\n\n";

    int nilai[7];
    int sum = 0;
    int maxNilai, minNilai;

    cout << "Masukkan 7 nilai mahasiswa:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
        
        sum += nilai[i];

        if (i == 0) {
            maxNilai = nilai[i];
            minNilai = nilai[i];
        } else {
            if (nilai[i] > maxNilai) maxNilai = nilai[i];
            if (nilai[i] < minNilai) minNilai = nilai[i];
        }
    }

    float rataRata = (float)sum / 7;

    cout << "\n--- Hasil Analisis Nilai ---\n";
    cout << "Nilai Tertinggi : " << maxNilai << "\n";
    cout << "Nilai Terendah  : " << minNilai << "\n";
    cout << "Rata-rata       : " << rataRata << "\n";
    
    return 0;
}