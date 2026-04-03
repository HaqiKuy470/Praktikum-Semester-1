#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int totalHarga = 0;


    cout << "========================================" << endl;
    cout << "  TABEL HARGA FOTOKOPI 1-100 LEMBAR" << endl;
    cout << "========================================" << endl;
    cout << "Ket: Rp 80/lembar, Rp 60/lembar untuk" << endl; 
    cout << "     setiap kelipatan 20 lembar." << endl;
    cout << "----------------------------------------" << endl;
    cout << setw(15) << "Jumlah Lembar" << " | " << setw(20) << "Total Harga (Rp)" << endl;
    cout << "----------------------------------------" << endl;


    for (int i = 1; i <= 100; i++) {
        
       
        if (i % 20 == 0) {
         
            totalHarga += 60;
        } else {
            
            totalHarga += 80;
        }

        cout << setw(15) << i << " | " << setw(20) << totalHarga << endl;
    }

    cout << "========================================" << endl;
    return 0;
}
