#include <iostream>

int main() {

    int x, y;
    int a, b, c; 

    std::cout << "Masukkan Nilai X: ";
    
    std::cin >> x; 

    std::cout << "Masukkan Nilai Y:";
    std::cin >> y;

    a = x & y; 
    b = x | y; 
    c = x ^ y; 
    std::cout << "\n"; 

    std::cout << "Hasil dari " << x << " & " << y << " = " << a << std::endl; 
    std::cout << "Hasil dari " << x << " | " << y << " = " << b << std::endl; 
    std::cout << "Hasil dari " << x << " ^ " << y << " = " << c << std::endl; 

    return 0;
}	