#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <limits> 
using namespace std;

int main() {
    int pilihan;
    double hasil;
    const double PI = 3.14159265359;
    
    // Header Program
    cout << "========================================================" << endl;
    cout << "     KALKULATOR LUAS PERMUKAAN BANGUN RUANG" << endl;
    cout << "            DAN CEK TAHUN KABISAT" << endl;
    cout << "========================================================" << endl;
    cout << endl;
    
    // Menu Pilihan
    cout << "MENU PILIHAN:" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "1. Luas Permukaan Bola" << endl;
    cout << "2. Luas Permukaan Kubus" << endl;
    cout << "3. Luas Permukaan Balok" << endl;
    cout << "4. Luas Permukaan Tabung" << endl;
    cout << "5. Luas Permukaan Kerucut" << endl;
    cout << "6. Luas Permukaan Limas Segiempat" << endl;
    cout << "7. Cek Tahun Kabisat" << endl;
    cout << "0. Keluar Program" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << endl;
    cout << "Masukkan pilihan Anda (0-7): ";
    cin >> pilihan;

    if (cin.fail() || pilihan < 0 || pilihan > 7) {
        cout << "Error: Pilihan tidak valid!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }
    
    cout << endl;
    cout << "========================================================" << endl;
    
    switch (pilihan) {
        case 1: {
            // Luas Permukaan Bola = 4 × π × r²
            double jariJari;
            cout << "        LUAS PERMUKAAN BOLA" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = 4 × π × r²" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan jari-jari bola (r): ";
            cin >> jariJari;
            
            if (cin.fail()) {
                cout << "Error: Input tidak valid. Harap masukkan angka." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return 1;
            }
            if (jariJari <= 0) {
                cout << "Error: Jari-jari harus lebih dari 0!" << endl;
                return 1;
            }
            
            hasil = 4 * PI * pow(jariJari, 2);
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Jari-jari (r)           : " << jariJari << " cm" << endl;
            cout << "Luas Permukaan Bola     : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
        
        case 2: {
            double sisi;
            cout << "        LUAS PERMUKAAN KUBUS" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = 6 × s²" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan panjang sisi kubus (s): ";
            cin >> sisi;
            
            if (cin.fail()) {
                cout << "Error: Input tidak valid. Harap masukkan angka." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return 1;
            }
            if (sisi <= 0) {
                cout << "Error: Sisi harus lebih dari 0!" << endl;
                return 1;
            }
            
            hasil = 6 * pow(sisi, 2);
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Panjang Sisi (s)        : " << sisi << " cm" << endl;
            cout << "Luas Permukaan Kubus    : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
        
        case 3: {
            double panjang, lebar, tinggi;
            cout << "        LUAS PERMUKAAN BALOK" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = 2 × (p×l + p×t + l×t)" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan panjang balok (p): ";
            cin >> panjang;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk panjang." << endl; return 1; }
            
            cout << "Masukkan lebar balok (l): ";
            cin >> lebar;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk lebar." << endl; return 1; }
            
            cout << "Masukkan tinggi balok (t): ";
            cin >> tinggi;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk tinggi." << endl; return 1; }
            
            if (!cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                return 1;
            }
            
            if (panjang <= 0 || lebar <= 0 || tinggi <= 0) {
                cout << "Error: Semua dimensi harus lebih dari 0!" << endl;
                return 1;
            }
            
            hasil = 2 * (panjang*lebar + panjang*tinggi + lebar*tinggi);
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Panjang (p)             : " << panjang << " cm" << endl;
            cout << "Lebar (l)               : " << lebar << " cm" << endl;
            cout << "Tinggi (t)              : " << tinggi << " cm" << endl;
            cout << "Luas Permukaan Balok    : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
        
        case 4: {
            double jariJari, tinggi;
            cout << "        LUAS PERMUKAAN TABUNG" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = 2 × π × r × (r + t)" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan jari-jari tabung (r): ";
            cin >> jariJari;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk jari-jari." << endl; return 1; }
            
            cout << "Masukkan tinggi tabung (t): ";
            cin >> tinggi;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk tinggi." << endl; return 1; }
            
            if (!cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                return 1;
            }


            if (jariJari <= 0 || tinggi <= 0) {
                cout << "Error: Jari-jari dan tinggi harus lebih dari 0!" << endl;
                return 1;
            }
            hasil = 2 * PI * jariJari * (jariJari + tinggi);
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Jari-jari (r)           : " << jariJari << " cm" << endl;
            cout << "Tinggi (t)              : " << tinggi << " cm" << endl;
            cout << "Luas Permukaan Tabung   : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
        
        case 5: {
            double jariJari, tinggi, garisPelukis;
            cout << "        LUAS PERMUKAAN KERUCUT" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = π × r × (r + s)" << endl;
            cout << "dimana s = √(r² + t²)" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan jari-jari kerucut (r): ";
            cin >> jariJari;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk jari-jari." << endl; return 1; }
            cout << "Masukkan tinggi kerucut (t): ";
            cin >> tinggi;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk tinggi." << endl; return 1; }

            if (!cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                return 1;
            }


            if (jariJari <= 0 || tinggi <= 0) {
                cout << "Error: Jari-jari dan tinggi harus lebih dari 0!" << endl;
                return 1;
            }
            
            garisPelukis = sqrt(pow(jariJari, 2) + pow(tinggi, 2));
            hasil = PI * jariJari * (jariJari + garisPelukis);
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Jari-jari (r)           : " << jariJari << " cm" << endl;
            cout << "Tinggi (t)              : " << tinggi << " cm" << endl;
            cout << "Garis Pelukis (s)       : " << garisPelukis << " cm" << endl;
            cout << "Luas Permukaan Kerucut  : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
        
        case 6: {
            double sisiAlas, tinggi, tinggiSegitiga;
            cout << "     LUAS PERMUKAAN LIMAS SEGIEMPAT" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Rumus: L = s² + 2 × s × √((s/2)² + t²)" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan panjang sisi alas (s): ";
            cin >> sisiAlas;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk sisi alas." << endl; return 1; }
            
            cout << "Masukkan tinggi limas (t): ";
            cin >> tinggi;
            if (cin.fail()) { cout << "Error: Input tidak valid untuk tinggi." << endl; return 1; }

            if (!cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                return 1;
            }


            if (sisiAlas <= 0 || tinggi <= 0) {
                cout << "Error: Sisi alas dan tinggi harus lebih dari 0!" << endl;
                return 1;
            }

            tinggiSegitiga = sqrt(pow(sisiAlas/2, 2) + pow(tinggi, 2));

            double luasAlas = pow(sisiAlas, 2);
            double luas4Segitiga = 4 * (0.5 * sisiAlas * tinggiSegitiga);
            hasil = luasAlas + luas4Segitiga;
            
            cout << "--------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Sisi Alas (s)           : " << sisiAlas << " cm" << endl;
            cout << "Tinggi Limas (t)        : " << tinggi << " cm" << endl;
            cout << "Tinggi Segitiga         : " << tinggiSegitiga << " cm" << endl;
            cout << "Luas Alas               : " << luasAlas << " cm²" << endl;
            cout << "Luas 4 Segitiga         : " << luas4Segitiga << " cm²" << endl;
            cout << "Luas Permukaan Limas    : " << hasil << " cm²" << endl;
            cout << "========================================================" << endl;
            break;
        }
       
        case 7: {
            int tahun;
            bool kabisat;
            cout << "           CEK TAHUN KABISAT" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Ketentuan Tahun Kabisat:" << endl;
            cout << "1. Habis dibagi 4" << endl;
            cout << "2. Tidak habis dibagi 100, KECUALI habis dibagi 400" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Masukkan tahun: ";
            cin >> tahun;

            if (cin.fail()) {
                cout << "Error: Input tidak valid. Harap masukkan angka." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return 1;
            }
            if (tahun <= 0) {
                cout << "Error: Tahun harus lebih dari 0!" << endl;
                return 1;
            }

            if (tahun % 400 == 0) {
                kabisat = true;
            } else if (tahun % 100 == 0) {
                kabisat = false;
            } else if (tahun % 4 == 0) {
                kabisat = true;
            } else {
                kabisat = false;
            }           
            cout << "--------------------------------------------------------" << endl;
            cout << "Tahun                   : " << tahun << endl;
            cout << "Status                  : ";
            if (kabisat) {
                cout << "TAHUN KABISAT ✓" << endl;
                cout << "Jumlah Hari             : 366 hari" << endl;
            } else {
                cout << "BUKAN TAHUN KABISAT ✗" << endl;
                cout << "Jumlah Hari             : 365 hari" << endl;
            }
            cout << "========================================================" << endl;
            break;
        }      
        case 0: {
            cout << "        TERIMA KASIH!" << endl;
            cout << "      Program telah selesai." << endl;
            cout << "========================================================" << endl;
            break;
        }      
        default: {
            cout << "Error: Pilihan tidak valid!" << endl;
            cout << "========================================================" << endl;
            break;
        }
    }
    return 0;
}	