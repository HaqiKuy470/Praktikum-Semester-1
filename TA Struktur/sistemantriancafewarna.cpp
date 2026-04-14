#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Pesanan {
    string nama;
    string menu;
    int nomorAntrian;
};

class SistemAntrianKafe {
private:
    queue<Pesanan> antrianPesanan;
    int nomorUrut;

public:
    SistemAntrianKafe() : nomorUrut(1) {}

    void tambahPesanan() {
        Pesanan pesanan;
        
        cout << "\n=== TAMBAH PESANAN ===" << endl;
        cout << "Masukkan nama pelanggan: ";
        cin.ignore();
        getline(cin, pesanan.nama);
        
        cout << "Masukkan menu pesanan: ";
        getline(cin, pesanan.menu);
        
        pesanan.nomorAntrian = nomorUrut;
        antrianPesanan.push(pesanan);
        
        cout << "\n==================================" << endl;
        cout << "Pesanan masuk: " << pesanan.nama << " - " << pesanan.menu << endl;
        cout << "Nomor antrian: " << pesanan.nomorAntrian << endl;
        cout << "==================================" << endl;
        
        nomorUrut++;
    }

    void prosesPesanan() {
        if (antrianPesanan.empty()) {
            cout << "\n[!] Tidak ada pesanan untuk diproses!" << endl;
            return;
        }
        
        Pesanan pesanan = antrianPesanan.front();
        antrianPesanan.pop();
        
        cout << "\n==================================" << endl;
        cout << "Diproses: " << pesanan.nama << " - " << pesanan.menu << endl;
        cout << "==================================" << endl;
    }

    void tampilkanAntrian() {
        if (antrianPesanan.empty()) {
            cout << "\n[i] Tidak ada pesanan dalam antrian." << endl;
            return;
        }

        cout << "\n====== ANTRIAN PESANAN ======" << endl;
        queue<Pesanan> temp = antrianPesanan;
        int posisi = 1;
        
        while (!temp.empty()) {
            Pesanan p = temp.front();
            cout << posisi << ". " << p.nama << " - " << p.menu 
                 << " (Antrian: " << p.nomorAntrian << ")" << endl;
            temp.pop();
            posisi++;
        }
        cout << "=============================" << endl;
    }

    void lihatPesananTerdepan() {
        if (antrianPesanan.empty()) {
            cout << "\n[i] Tidak ada pesanan dalam antrian." << endl;
            return;
        }

        Pesanan pesanan = antrianPesanan.front();
        cout << "\n====== PESANAN TERDEPAN ======" << endl;
        cout << "Nama: " << pesanan.nama << endl;
        cout << "Menu: " << pesanan.menu << endl;
        cout << "Nomor Antrian: " << pesanan.nomorAntrian << endl;
        cout << "==============================" << endl;
    }

    void tampilkanMenu() {
        cout << "\n╔════════════════════════════════════════╗" << endl;
        cout << "║   SISTEM ANTRIAN KAFE WARNA           ║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
        cout << "1. Tambah Pesanan (nama + menu)" << endl;
        cout << "2. Proses Pesanan" << endl;
        cout << "3. Tampilkan Antrian Pesanan" << endl;
        cout << "4. Lihat Pesanan Terdepan" << endl;
        cout << "0. Keluar" << endl;
        cout << "──────────────────────────────────────────" << endl;
        cout << "Pilih menu: ";
    }
};

int main() {
    SistemAntrianKafe kafe;
    int pilihan;

    do {
        kafe.tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                kafe.tambahPesanan();
                break;
            case 2:
                kafe.prosesPesanan();
                break;
            case 3:
                kafe.tampilkanAntrian();
                break;
            case 4:
                kafe.lihatPesananTerdepan();
                break;
            case 0:
                cout << "\n[✓] Terima kasih! Selamat datang kembali di Kafe Warna!" << endl;
                break;
            default:
                cout << "\n[!] Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}