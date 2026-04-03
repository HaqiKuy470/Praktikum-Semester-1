#include <iostream>

int main() {
    
    int m = 15, n = 7;
    
    if (m > n) {
        std::cout << m << " Lebih Besar Dari " << n << std::endl;
    } else if (m < n) {
        std::cout << m << " Lebih Kecil Dari " << n << std::endl;
    } else {
        std::cout << m << " Sama Dengan " << n << std::endl;
    }

    if (m != n) {
        std::cout << m << " Tidak Sama Dengan " << n << std::endl;
    }
       return 0;
}	