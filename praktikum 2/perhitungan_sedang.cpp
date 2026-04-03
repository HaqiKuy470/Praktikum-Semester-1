#include <iostream>

int main() {

    float a, b, c, d, e, f;

    std::cout << "Masukkan Nilai A: ";
    std::cin >> a; // Menggunakan 'a' kecil

    std::cout << "Masukkan Nilai B: ";
    std::cin >> b; // Menggunakan 'b' kecil

    std::cout << "Masukkan Nilai C: ";
    std::cin >> c; // Menggunakan 'c' kecil

    std::cout << "Masukkan Nilai D: ";
    std::cin >> d; // Menggunakan 'd' kecil

    e = a + b * c / d - b;
    f = (a + b) * c / d * (a - b);

    std::cout << "\nNilai dari e = a+b*c/d-b adalah: " << e << std::endl;

    std::cout << "Nilai dari f = (a+b)*c/d*(a-b) adalah: " << f << std::endl;

    return 0;
}
