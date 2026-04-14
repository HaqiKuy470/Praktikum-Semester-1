#include <iostream>
#include <queue>
#include <string>
using namespace std;

class SistemAntrianKTM {
private:
    queue<string> antrian;
    int nomorUrut;

public:
    SistemAntrianKTM() : nomorUrut(1) {}

    void ambilNomor() {
        string nomor = "A" + to_string(nomorUrut);
        antrian.push(nomor);
        cout << "\n==================================" << endl;
        cout << "Nomor antrian: " << nomor << endl;
        cout << "==================================" << endl;
        nomorUrut++;
    }

    void panggilAntrian() {
        if (antrian.empty()) {
            cout << "\n[!] Antrian kosong!" << endl;
            return;
        }
        
        string dipanggil = antrian.front();
        antrian.pop();
        cout << "\n==================================" << endl;
        cout << "Dipanggil: " << dipanggil << endl;
        cout << "==================================" << endl;
        
        // Tampilkan sisa antrian
        if (!antrian.empty()) {
            cout << "Sisa antrian: ";
            queue<string> temp = antrian;
            while (!temp.empty()) {
                cout << temp.front();
                temp.pop();
                if (!temp.empty()) cout << ", ";
            }
            cout << endl;
        } else {
            cout << "Sisa antrian: (kosong)" << endl;
        }
    }

    void tampilkanSisa() {
        if (antrian.empty()) {
            cout << "\n[i] Tidak ada antrian saat ini." << endl;
            return;
        }

        cout << "\n====== SISA ANTRIAN ======" << endl;
        queue<string> temp = antrian;
        while (!temp.empty()) {
            cout << temp.front();
            temp.pop();
            if (!temp.empty()) cout << ", ";
        }
        cout << "\n==========================" << endl;
    }

    void resetAntrian() {
        while (!antrian.empty()) {
            antrian.pop();
        }
        nomorUrut = 1;
        cout << "\n[✓] Antrian telah direset!" << endl;
    }

    void tampilkanMenu() {
        cout << "\n╔════════════════════════════════════════╗" << endl;
        cout << "║   SISTEM ANTRIAN FOTO KTM - GACAK     ║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
        cout << "1. Ambil Nomor Antrian Otomatis" << endl;
        cout << "2. Panggil Nomor Antrian" << endl;
        cout << "3. Tampilkan Sisa Antrian" << endl;
        cout << "4. Reset Antrian" << endl;
        cout << "5. Menu Interaktif" << endl;
        cout << "0. Keluar" << endl;
        cout << "──────────────────────────────────────────" << endl;
        cout << "Pilih menu: ";
    }
};

int main() {
    SistemAntrianKTM sistem;
    int pilihan;

    do {
        sistem.tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                sistem.ambilNomor();
                break;
            case 2:
                sistem.panggilAntrian();
                break;
            case 3:
                sistem.tampilkanSisa();
                break;
            case 4:
                sistem.resetAntrian();
                break;
            case 5:
                cout << "\n[i] Menu interaktif aktif (semua fitur tersedia)" << endl;
                break;
            case 0:
                cout << "\n[✓] Terima kasih telah menggunakan sistem antrian KTM!" << endl;
                break;
            default:
                cout << "\n[!] Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}