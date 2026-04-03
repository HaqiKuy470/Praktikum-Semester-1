#include <iostream>

int main() {
    float celcius, fahrenheit, reamur, kelvin;

    std::cout << "KONVERSI SUHU DARI CELCIUS KE FAHRENHEIT, KELVIN & REAMUR" << std::endl;
    std::cout << 

"==========================================================" << 

std::endl;
    std::cout << "Masukkan Suhu dalam Celcius : ";
    std::cin >> celcius;

    // Rumus Konversi suhu dari Celcius
    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur = (celcius * 4.0 / 5.0);
    kelvin = celcius + 273.15;

    std::cout << "\n============= HASIL KONVERSI =============" << std::endl;

    std::cout << "Fahrenheit : " << fahrenheit << " derajat Fahrenheit" << std::endl;

    std::cout << "Reamur     : " << reamur << " derajat Reamur" << std::endl;

    std::cout << "Kelvin     : " << kelvin << " Kelvin" << std::endl;
    std::cout << "==========================================" << std::endl;

    return 0;
}