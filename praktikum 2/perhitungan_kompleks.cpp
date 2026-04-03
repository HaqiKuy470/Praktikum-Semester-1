#include <iostream>

int main() {
  
    int a, b, c;
    std::cout << "Masukan nilai a : ";
    std::cin >> a;
    std::cout << "Masukan nilai b : ";
    std::cin >> b;
    std::cout << "Masukan nilai c : ";
    std::cin >> c;


    int d = (a * b) - c / (b + a);
    std::cout << "\nNilai dari d = <a>*<b>-c/<b+a> = " << d << std::endl;

    int hasil_kiri = d << 2;
    std::cout << "Hasil dari Geser 2 Bit Kekiri = " << hasil_kiri << std::endl;


    int j, k, l;
    std::cout << "\nMasukan nilai j : ";
    std::cin >> j;
    std::cout << "Masukan nilai k : ";
    std::cin >> k;
    std::cout << "Masukan nilai l : ";
    std::cin >> l;
    
    int m = j * (k + l);
    std::cout << "\nNilai dari m = j*<k+l> = " << m << std::endl;

  
    int hasil_kanan = m >> 3;
    std::cout << "Hasil dari Geser 3 Bit Kekanan = " << hasil_kanan << std::endl;

    std::cout << std::endl;

    if (hasil_kiri != hasil_kanan) {
        std::cout << hasil_kiri << " Tidak Sama Dengan " << hasil_kanan << std::endl;
    }

    if (hasil_kiri > hasil_kanan) {
        std::cout << hasil_kiri << " Lebih Besar Dari " << hasil_kanan << std::endl;
    }

    return 0;
}			
