#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Kuliner {
    string nama;
    vector<string> komposisi;
};

int main() {

    vector<Kuliner> daftarMenu = {
        {"Kopi Susu", {"Kopi", "Susu", "Gula"}},         
        {"Nasi Goreng", {"Nasi", "Bawang", "Kecap"}},    
        {"Teh Tarik", {"Teh", "Susu Kental", "Air"}},    
        {"Sate Ayam", {"Ayam", "Bumbu Kacang", "Kecap"}}  
    };

    cout << "--- Detail Menu Indeks Ke-2 ---" << endl;
    cout << "Nama Menu : " << daftarMenu[2].nama << endl;
    cout << "Komposisi : ";
    
    for (int i = 0; i < daftarMenu[2].komposisi.size(); i++) {
        cout << daftarMenu[2].komposisi[i];
        if (i < daftarMenu[2].komposisi.size() - 1) cout << ", ";
    }
    
    cout << endl << "-------------------------------" << endl;

    return 0;
}