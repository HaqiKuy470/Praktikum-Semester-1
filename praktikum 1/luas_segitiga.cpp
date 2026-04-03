#include <iostream>

int main() {
  
    float Alas, Tinggi, Luas_Segitiga;

    std::cout << "Masukkan Nilai Alas Segitiga: ";
    std::cin >> Alas;

    std::cout << "Masukkan Nilai Tinggi Segitiga: ";
    std::cin >> Tinggi;

    Luas_Segitiga = 0.5 * Alas * Tinggi;

    std::cout << "Nilai Luas Segitiga adalah : " << Luas_Segitiga << std::endl;
    return 0;
}