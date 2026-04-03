#include <iostream>
#include <iomanip>
#include <limits> 
#include <cstdlib>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause() {
    cout << "\nTekan Enter untuk melanjutkan...";
    cin.clear();     cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cin.get(); 
}

void tampilkanMenu(int saldo) {
    clearScreen();
    cout << "BANK INDONESIA JAYA\n\n";
    cout << "                    Saldo : Rp. " << saldo << "\n\n";
    cout << "Menu Transaksi :\n";
    cout << "       1. Setor Tabungan\n";
    cout << "       2. Ambil Tabungan\n";
    cout << "       3. Keluar\n\n";
}

void setor(int& saldo) {
    int jumlah;
    cout << "\nMasukkan jumlah setoran : Rp. ";
    cin >> jumlah;

    if (cin.fail() || jumlah <= 0) {
        cout << "Jumlah setoran tidak valid!\n";
    } else {
        saldo += jumlah;
        cout << "Setoran berhasil!\n";
        cout << "Saldo anda sekarang : Rp. " << saldo << "\n";
    }
    pause();
}

void ambil(int& saldo, const int SALDO_MINIMUM) {
    int jumlah;
    cout << "\nMasukkan jumlah penarikan : Rp. ";
    cin >> jumlah;

    if (cin.fail() || jumlah <= 0) {
        cout << "Jumlah penarikan tidak valid!\n";
    } else if (saldo - jumlah < SALDO_MINIMUM) {
        cout << "Penarikan gagal!\n";
        cout << "Saldo tidak mencukupi. Saldo minimum harus tersisa Rp. " << SALDO_MINIMUM << "\n";
        cout << "Saldo anda saat ini : Rp. " << saldo << "\n";
    } else {
        saldo -= jumlah;
        cout << "Penarikan berhasil!\n";
        cout << "Saldo anda sekarang : Rp. " << saldo << "\n";
    }
    pause();
}

int main() {
    int saldo = 100000;
    int pilihan = 0;
    const int SALDO_MINIMUM = 50000;

    do {
        tampilkanMenu(saldo);
        cout << "Pilihan Menu Transaksi (1/2/3) : ";
        cin >> pilihan;

        if (cin.fail()) {
            cout << "\nInput tidak valid! Harap masukkan angka (1-3).\n";
            pilihan = 0; 
            pause();
            continue; 
        }

        switch (pilihan) {
            case 1:
                setor(saldo);
                break;
            case 2:
                ambil(saldo, SALDO_MINIMUM);
                break;
            case 3:
                cout << "\nTerima kasih telah menggunakan layanan kami!\n";
                break;

            default:
                cout << "\nPilihan tidak valid! Silakan pilih 1, 2, atau 3.\n";
                pause();
        }
    } while (pilihan != 3);
    return 0;
}
