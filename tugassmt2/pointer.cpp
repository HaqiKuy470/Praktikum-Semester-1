#include <iostream>

using namespace std;

int main() {
    cout << "=== TUGAS 3: POINTER & DYNAMIC MEMORY ===\n\n";

    int ukuran;
    cout << "Masukkan jumlah elemen array dinamis yang diinginkan: ";
    cin >> ukuran;

    int* ptrArray = new int[ukuran];

    cout << "\nMasukkan " << ukuran << " nilai:\n";
    for (int i = 0; i < ukuran; i++) {
        cout << "Nilai indeks ke-" << i << ": ";
        cin >> ptrArray[i]; 
    }

    cout << "\nData berhasil disimpan di memori dinamis.\n";

    delete[] ptrArray; 
    cout << "Memori array dinamis berhasil dibebaskan (delete[]).\n";
    
    return 0;
}