#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ofstream pf("prak.TXT"); 
    if (!pf.is_open()) { 
        cout << "File tak dapat diciptakan!" << endl;
        return 1; 
    }
    cout << "Ketik apa saja. Tekan CTRL+D (di baris baru) untuk menyimpan." << endl;
    string baris;
    while (getline(cin, baris)) {
        pf << baris << endl; 
    }
    pf.close();
    cout << "File berhasil disimpan." << endl;
    return 0;
}
