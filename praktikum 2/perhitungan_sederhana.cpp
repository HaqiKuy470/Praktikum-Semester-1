#include <iostream>

int main() {

    int a, b;
    int c = 0, d = 0, e = 0, f = 0; 

    std::cout << "Masukkan Nilai A : ";
    std::cin >> a;

    std::cout << "Masukkan Nilai B : ";
    std::cin >> b;
    c = a * b;
    if (b != 0) {
        d = a / b;
    } else {
        d = 0; 
    }
    e = a + b;
    f = a - b;
    std::cout << "\nHasil dari A * B (C) = " << c << std::endl;
    std::cout << "Hasil dari A / B (D) = " << d << std::endl;
    std::cout << "Hasil dari A + B (E) = " << e << std::endl;
    std::cout << "Hasil dari A - B (F) = " << f << std::endl;

    return 0;
}	