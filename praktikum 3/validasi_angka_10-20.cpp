#include <iostream>

int main() {
    int x;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> x;

    if (x < 10) {
       std::cout << "Nilai " << x << " kurang dari 10" << std::endl;
    } else if (x >= 10 && x <= 20) {
        std::cout << "Nilai " << x << " ada di antara 10 dan 20" << std::endl;
    } else { // This covers x > 20
        std::cout << "Nilai " << x << " lebih dari 20" << std::endl;
    }

    return 0;
}	