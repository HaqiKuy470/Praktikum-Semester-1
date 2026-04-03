#include <iostream>
using namespace std;

int cariModus(int data[], int n) {
    int modus = data[0];
    int frekuensiTertinggi = 0;

    for (int i = 0; i < n; i++) {
        int frekuensi = 0;

        for (int j = 0; j < n; j++) {
            if (data[j] == data[i]) {
                frekuensi++;
            }
        }

        if (frekuensi > frekuensiTertinggi) {
            frekuensiTertinggi = frekuensi;
            modus = data[i];
        }
    }

    return modus;
}

int main() {
    int data[100];
    int n = 0;
    char lagi;

    cout << "------------------------------------------------------------\n";
    cout << "                    MODUL FUNCTION\n";
    cout << "------------------------------------------------------------\n";
    cout << "          MENENTUKAN DATA YANG SERING DIINPUTKAN\n";
    cout << "------------------------------------------------------------\n";

    do {
        cout << "Masukkan data : ";
        cin >> data[n];
        n++;

        cout << "Masukkan Data Lagi?(y/n) : ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    int modus = cariModus(data, n);

    cout << "------------------------------------------------------------\n";
    cout << "Data yang sering diinputkan adalah " << modus << endl;
    cout << "------------------------------------------------------------\n";

    return 0;
}
