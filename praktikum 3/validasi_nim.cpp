#include <iostream>
int main() {
    int bil;
    std::cout << "Masukkan 2 digit angka terakhir NIM Anda: "; 
    std::cin >> bil; 
    if (bil % 2 == 0) {
        std::cout << "\nDigit NIM Anda adalah bilangan GENAP" << std::endl;
 } else {
        std::cout << "\nDigit NIM Anda adalah bilangan GANJIL" << std::endl;
    }
    return 0;
}
