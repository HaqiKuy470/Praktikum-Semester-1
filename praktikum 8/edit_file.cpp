#include <iostream>
#include <fstream> 
#include <cstring> 

using namespace std;

struct DataMhs {
    long NIM;
    char Nama[25];
    float IPK;
};

int main() {
    DataMhs RekMhs;

    ofstream MHS("kuliah.dat", ios::out | ios::binary);

    if (!MHS.is_open()) {
        cerr << "Gagal membuka file!" << endl;
        return 1;
    }

    cout << "NIM = ";
    cin >> RekMhs.NIM;

    cout << "Nama = ";
    cin >> RekMhs.Nama; // Input satu kata (tanpa spasi)

    cout << "IPK = ";
    cin >> RekMhs.IPK;

    MHS.write(reinterpret_cast<char*>(&RekMhs), sizeof(DataMhs));

    MHS.close();

    cout << "Data berhasil disimpan ke kuliah.dat" << endl;

    return 0;
}
