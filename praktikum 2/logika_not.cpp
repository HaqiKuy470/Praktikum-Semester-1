#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Program Ekspresi Logika NOT" << endl;
    cout << "===========================" << endl;
    cout << "Masukkan sebuah nilai bulat untuk A = ";
    cin >> a;

    b = (a + 12 < 8);
    c = !(b);

    cout << "\n--- Hasil Eksekusi ---" << endl;
    cout << "Nilai A yang Anda masukkan = " << a << endl;
    cout << "Nilai b dihitung dari ekspresi (a + 12 < 8) = " << b << endl;
    cout << "Nilai c dihitung dari ekspresi !(b) = " << c << endl;

    return 0;
}
