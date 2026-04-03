#include <iostream>
#include <iomanip> 

using namespace std;

unsigned long long hitungFibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    unsigned long long f_n1 = 1;
    unsigned long long f_n2 = 1;
    unsigned long long hasil = 0;

    for (int i = 3; i <= n; i++) {
        hasil = f_n1 + f_n2; 
        

        f_n2 = f_n1;
        f_n1 = hasil;
    }
    return hasil;
}

bool cekPrima(unsigned long long num) {

    if (num <= 1) {
        return false;
    }
 
    if (num == 2) {
        return true;
    }


    for (unsigned long long i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true;
}


int main() {
    int n;
    
    cout << "========================================" << endl;
    cout << "   PROGRAM FIBONACCI & CEK BILANGAN PRIMA" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Masukkan deret Fibonacci ke-n : ";
    cin >> n;

    unsigned long long hasilFib = hitungFibonacci(n);
    bool isPrima = cekPrima(hasilFib);


    cout << endl;
    cout << "========================================" << endl;
    cout << "             HASIL PEMROSESAN" << endl;
    cout << "========================================" << endl;

    cout << "Bilangan Fibonacci ke-" << n << " : " << hasilFib << endl;
    cout << endl;

    if (isPrima) {
        cout << "HASIL: " << hasilFib << " adalah Bilangan Prima" << endl;
    } else {
        cout << "HASIL: " << hasilFib << " adalah Bukan Bilangan Prima" << endl;
    }

    cout << "========================================" << endl;
    
    return 0; 
}
