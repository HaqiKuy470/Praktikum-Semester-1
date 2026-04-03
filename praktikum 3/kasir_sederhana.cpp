#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 
using namespace std;

int main() {
    string namaKasir, namaPembeli;
    double totalPembelian, potongan, totalBayar;
    int persenDiskon;

    cout << "============================================" << endl;
    cout << "        TOKO BERKAH SEJAHTERA" << endl;
    cout << "    Jl. Merdeka No. 123, Indonesia" << endl;
    cout << "         Telp: (021) 1234-5678" << endl;
    cout << "============================================" << endl;
    cout << endl;
    
    cout << "Nama Kasir   : ";
    getline(cin, namaKasir);
    
    cout << "Nama Pembeli : ";
    getline(cin, namaPembeli);
    
    cout << endl;
    cout << "Total Pembelian: Rp ";
    cin >> totalPembelian;

    if (cin.fail()) {
        cerr << "Error: Input tidak valid. Harap masukkan angka untuk total pembelian." << endl;
        cin.clear(); // Bersihkan flag error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        return 1; // Keluar dengan kode error
    }

    cout << endl;
    cout << "============================================" << endl;

    if (totalPembelian < 0) {
        cout << "Error: Total pembelian tidak boleh negatif!" << endl;
        return 1;
    }

    if (totalPembelian < 75000) {
        persenDiskon = 10;
        potongan = totalPembelian * 0.10;
    } 
    else if (totalPembelian >= 75000 && totalPembelian <= 100000) {
        persenDiskon = 20;
        potongan = totalPembelian * 0.20;
    } 
    else {
        persenDiskon = 30;
        potongan = totalPembelian * 0.30;
    }

    totalBayar = totalPembelian - potongan;
 
    cout << "              STRUK PEMBAYARAN" << endl;
    cout << "============================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Kasir                : " << namaKasir << endl;
    cout << "Pembeli              : " << namaPembeli << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Pembelian      : Rp " << setw(12) << totalPembelian << endl;
    cout << "Diskon (" << persenDiskon << "%)         : Rp " << setw(12) << potongan << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Bayar          : Rp " << setw(12) << totalBayar << endl;
    cout << "============================================" << endl;
    cout << "    Terima kasih atas kunjungan Anda!" << endl;
    cout << "       Selamat berbelanja kembali!" << endl;
    cout << "============================================" << endl;
    
    return 0;
}	