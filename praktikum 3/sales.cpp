#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 
using namespace std;

int main() {
    string namaKasir, namaSalesman;
    double pendapatan, uangJasa, komisi, totalPendapatan;
    int persenKomisi;
    
    cout << "================================================" << endl;
    cout << "       PT. MAKMUR SUKSES JAYA" << endl;
    cout << "   Sistem Perhitungan Komisi Salesman" << endl;
    cout << "   Jl. Sudirman No. 456, Jakarta Pusat" << endl;
    cout << "================================================" << endl;
    cout << endl;

    cout << "Nama Kasir     : ";
    getline(cin, namaKasir);
    
    cout << "Nama Salesman  : ";
    getline(cin, namaSalesman);
    
    cout << endl;
    cout << "Pendapatan Penjualan Hari Ini: Rp ";
    cin >> pendapatan;

    if (cin.fail()) {
        cerr << "Error: Input tidak valid. Harap masukkan angka untuk pendapatan." << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return 1;
    }
    
    cout << endl;
    cout << "================================================" << endl;

    if (pendapatan < 0) {
        cout << "Error: Pendapatan tidak boleh negatif!" << endl;
        return 1;
    }

    if (pendapatan <= 60000) {
        uangJasa = 15000;
        persenKomisi = 15;
        komisi = pendapatan * 0.15;
    } 
    else if (pendapatan > 60000 && pendapatan <= 100000) {
        uangJasa = 30000;
        persenKomisi = 20;
        komisi = pendapatan * 0.20;
    } 
    else { // pendapatan > 100000
        uangJasa = 50000;
        persenKomisi = 30;
        komisi = pendapatan * 0.30;
    }
    totalPendapatan = uangJasa + komisi;
    
    cout << "         SLIP KOMISI SALESMAN" << endl;
    cout << "================================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Kasir                 : " << namaKasir << endl;
    cout << "Salesman              : " << namaSalesman << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Pendapatan Penjualan  : Rp " << setw(15) << pendapatan << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Uang Jasa             : Rp " << setw(15) << uangJasa << endl;
    cout << "Komisi (" << persenKomisi << "%)           : Rp " << setw(15) << komisi << endl;
    cout << "------------------------------------------------" << endl;
    cout << "TOTAL PENDAPATAN      : Rp " << setw(15) << totalPendapatan << endl;
    cout << "================================================" << endl;
    cout << "      Terima kasih atas kerja keras Anda!" << endl;
    cout << "         Terus tingkatkan penjualan!" << endl;
    cout << "================================================" << endl;
    
    return 0;
}	