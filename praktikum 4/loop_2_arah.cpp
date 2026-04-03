#include <iostream>
using namespace std;

int main(){
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    int jarak = tinggi;
    
    for (int i = tinggi; i >= 1; i--) {
        for (int s = 0; s < jarak; s++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 2; i <= tinggi; i++) {
        for (int s = 0; s < jarak - i + 1; s++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}	