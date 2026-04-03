#include <iostream>

int main() { 
    int x, y;

    std::cout << "Masukkan Nilai X=";
    std::cin >> x; 

    std::cout << "Masukkan Nilai Y=";
    std::cin >> y; 
    x = x << 3; 
    y = y >> 2; 

    std::cout << "Hasil dari Geser 3 Bit Ke Kiri=" << x << std::endl; 
       std::cout << "Hasil dari Geser 2 Bit Ke Kanan=" << y << std::endl; 

    return 0;
}			
 