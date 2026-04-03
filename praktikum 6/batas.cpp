#include <iostream>
using namespace std;

int cariTerbesar(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int cariTerkecil(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int data, terbesar, terkecil;
    char lagi;

    cout << "----------------------------------------------\n";
    cout << "                 MODUL FUNCTION\n";
    cout << "----------------------------------------------\n";
    cout << "                MENENTUKAN BATAS\n\n";
	cout << "----------------------------------------------\n";

    cout << "Masukkan data : ";
    cin >> data;

    terbesar = data;
    terkecil = data;

    do {
        cout << "Masukkan Data Lagi?(y/n) : ";
        cin >> lagi;

        if (lagi == 'y' || lagi == 'Y') {
            cout << "Masukkan data : ";
            cin >> data;

            terbesar = cariTerbesar(terbesar, data);
            terkecil = cariTerkecil(terkecil, data);
        }

    } while (lagi == 'y' || lagi == 'Y');

    cout << "\n  Data terbesar : " << terbesar << endl;
    cout << "  Data terkecil : " << terkecil << endl;

    return 0;
}
