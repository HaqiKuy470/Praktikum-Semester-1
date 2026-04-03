#include <iostream>

int main() {
    const double PI = 3.14159;

    double jari_jari, luas;

    std::cout << "=========================================" << std::endl;
    std::cout << "   PROGRAM MENGHITUNG LUAS LINGKARAN   " << std::endl;
    std::cout << "=========================================" << std::endl;

    std::cout << "Masukkan panjang jari-jari lingkaran: ";
    std::cin >> jari_jari;

    luas = PI * jari_jari * jari_jari;

    std::cout << "Luas lingkaran adalah: " << luas << std::endl;

    return 0;
}