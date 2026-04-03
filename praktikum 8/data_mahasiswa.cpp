#include <iostream>
#include <fstream>
#include <string>
#include <limits> 

using namespace std;

int main()
{
    int pil;
    string nama, nim, prodi;

    do
    {
        system("clear"); 

        cout << "Data nilai mahasiswa" << endl;
        cout << "1. Biodata" << endl;
        cout << "2. Riwayat" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        
        while (!(cin >> pil)) {
            cout << "Input salah. Masukkan angka (1-3): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        if (pil == 1)
        {
            system("clear");

            ofstream datamhs("datamahasiswa.txt", ios::app);
            
            if (!datamhs.is_open()) {
                cout << "Error: Tidak bisa membuka file!" << endl;
                continue; 
            }

            cout << "Nama : ";
            getline(cin, nama);
            cout << "NIM : ";
            getline(cin, nim);
            cout << "Prodi : ";
            getline(cin, prodi);

            datamhs << "Nama: " << nama << endl;
            datamhs << "NIM: " << nim << endl;
            datamhs << "Prodi: " << prodi << endl;
            datamhs << "--------------------" << endl; // Pemisah

            datamhs.close(); 
            cout << "Data berhasil disimpan." << endl;
            
            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.get(); 
        }
        else if (pil == 2)
        {
            system("clear");
            
           
            ifstream datamhs_input("datamahasiswa.txt", ios::in);
            
            if (!datamhs_input.is_open()) {
                cout << "Error: Riwayat masih kosong atau file tidak bisa dibuka!" << endl;
                cout << "\nTekan Enter untuk kembali ke menu...";
                cin.get(); 
                continue; 
            }

            cout << "--- Riwayat Data Mahasiswa ---" << endl;
            string line; 
            while (getline(datamhs_input, line))
            {
                cout << line << endl;
            }
            datamhs_input.close(); 

            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.get(); 
        }
        else if (pil == 3)
        {
            system("clear");
            cout << "Terima kasih telah menggunakan program ini." << endl;
        }
        else
        {
            cout << "Pilihan tidak valid. Silakan pilih kembali." << endl;
            cout << "\nTekan Enter untuk mencoba lagi...";
            cin.get(); 
        }

    } while (pil != 3); 
    
    return 0;
}
