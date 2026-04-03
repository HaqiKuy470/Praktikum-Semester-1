#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

int main() {
    cout << "=== TUGAS 2: STRUCT MAHASISWA ===\n\n";

    Mahasiswa mhs[5];
    int indexIpkTertinggi = 0;

    cout << "Masukkan data 5 mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Data Mahasiswa ke-" << (i + 1) << "\n";
        cout << "NIM   : "; 
        cin >> mhs[i].nim;
        cin.ignore(); 
        
        cout << "Nama  : "; 
        getline(cin, mhs[i].nama);
        
        cout << "IPK   : "; 
        cin >> mhs[i].ipk;

        if (mhs[i].ipk > mhs[indexIpkTertinggi].ipk) {
            indexIpkTertinggi = i;
        }
        cout << "-----------------------\n";
    }

    cout << "\n--- Mahasiswa dengan IPK Tertinggi ---\n";
    cout << "NIM  : " << mhs[indexIpkTertinggi].nim << "\n";
    cout << "Nama : " << mhs[indexIpkTertinggi].nama << "\n";
    cout << "IPK  : " << mhs[indexIpkTertinggi].ipk << "\n";

    return 0;
}