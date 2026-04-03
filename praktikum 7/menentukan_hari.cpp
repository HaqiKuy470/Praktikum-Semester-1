#include <iostream>
using namespace std;

int main() 
{
    string days[] = {"Senin", "Selasa", "Rabu", "Kamis", 
                     "Jumat", "Sabtu", "Minggu"};
    int day_num;

    cout << "Masukan nomor hari (1-7) : ";
    cin >> day_num;
    if (day_num < 1 || day_num > 7) {
        cout << "Kode hari salah !!" << endl;
        return 0;
    }

    string *day_ptr = &days[day_num - 1];
    
    cout << "Hari ke-" << day_num << " adalah hari " 
         << *day_ptr << endl;

    return 0;
}
