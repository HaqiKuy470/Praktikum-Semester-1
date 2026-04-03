#include <iostream>

int main()
{
    int x, y;
    std::cout << "Masukkan sebuah bilangan bulat : ";
    if (!(std::cin >> x)) {
        std::cerr << "Input tidak valid untuk bilangan pertama. Harap masukkan bilangan bulat." << std::endl;
        return 1; 
    }

    std::cout << "Masukkan sebuah bilangan bulat lain : ";
    if (!(std::cin >> y)) {
        std::cerr << "Input tidak valid untuk bilangan kedua. Harap masukkan bilangan bulat." << std::endl;
        return 1; 
    }

    if (x > 0 && y > 0) {
        std::cout << "Kedua bilangan tersebut adalah bilangan POSITIF" << std::endl;
    }
    else if (x > 0 || y > 0) {
        std::cout << "Salah satu bilangan tersebut adalah bilangan POSITIF" << std::endl;
    }
    else {
        std::cout << "Tidak ada bilangan yang positif (keduanya nol atau negatif)" << std::endl;
    }

    return 0;
}	