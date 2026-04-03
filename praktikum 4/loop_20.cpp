#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int c = 20;

    cout << setw(5) << "A" << setw(5) << "B" << setw(5) << "C" << endl;
    cout << "-------------------" << endl;

    for (int a = 0; a <= c; a++) {
        int b = c - a; // Hitung nilai b
        cout << setw(5) << a << setw(5) << b << setw(5) << c << endl;
    }

    return 0;
}	