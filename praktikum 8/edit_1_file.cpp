#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct DataMhs {
    long NIM;
    char Nama[25];
    float IPK;
};

int main() {
    DataMhs RekMhs;

    cout << "Tulis ke file kuliah.dat" << endl;

    ofstream MHS("kuliah.dat", ios::out | ios::binary);

    if (!MHS.is_open()) {
        cerr << "Gagal membuat file!" << endl;
        return 1;
    }

    cout << "NIM  = "; 
    cin >> RekMhs.NIM;

    cout << "Nama = "; 
    cin >> RekMhs.Nama; 

    cout << "IPK  = "; 
    cin >> RekMhs.IPK;

    MHS.write(reinterpret_cast<char*>(&RekMhs), sizeof(DataMhs));
    MHS.close(); 
    cout << "\nBuka File kuliah.dat" << endl;

    DataMhs DataBaca; 

    ifstream BukaMhs("kuliah.dat", ios::in | ios::binary);

    if (!BukaMhs.is_open()) {
        cerr << "Gagal membuka file untuk dibaca!" << endl;
        return 1;
    }

    BukaMhs.read(reinterpret_cast<char*>(&DataBaca), sizeof(DataMhs));

    cout << "NIM  = " << DataBaca.NIM << endl;
    cout << "Nama = " << DataBaca.Nama << endl;

    cout << fixed << setprecision(2); 
    cout << "IPK  = " << DataBaca.IPK << endl;

    BukaMhs.close(); // Tutup file baca

    return 0;
}
