#include <iostream>
#include <cstring>  
#include <cctype>   

using namespace std;

int main() {
    char kalimat[100];
    char salinan[100];
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;
    int jumlahLainnya = 0;
    int jumlahKataNG = 0;

    cout << "========================================" << endl;
    cout << "   PROGRAM ANALISIS KALIMAT SEDERHANA" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Masukkan sebuah kalimat (maks 100 karakter): ";
cin.getline(kalimat, 100); 

    strcpy(salinan, kalimat);

  int panjang = strlen(kalimat);
for (int i = 0; i < panjang; i++) {
        char ch = kalimat[i];

        if (isalpha(ch)) { 
            ch = tolower(ch); 
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                jumlahVokal++;
            } else {
                jumlahKonsonan++;
            }
        } else {
            jumlahLainnya++; 
        }
    }

    char* kata = strtok(salinan, " .?!,"); 

    while (kata != NULL) {

        if (strstr(kata, "ng") != NULL) {
            jumlahKataNG++;
        }

        kata = strtok(NULL, " .?!,");
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << "             HASIL ANALISIS" << endl;
    cout << "========================================" << endl;
    
    cout << "Jumlah Karakter Vokal    : " << jumlahVokal << endl;
    cout << "Jumlah Karakter Konsonan : " << jumlahKonsonan << endl;
    cout << "Jumlah Karakter Lainnya  : " << jumlahLainnya << endl;
    cout << endl;

    cout << "Jumlah Kata mengandung 'ng': " << jumlahKataNG << endl;
    
    cout << "========================================" << endl;

return 0;
}
