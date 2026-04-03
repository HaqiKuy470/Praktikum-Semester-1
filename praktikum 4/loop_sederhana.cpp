#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;
    cout << "Masukkan Kata = ";
    getline(cin, kata); 

    int n = kata.length();
    for (int i = 0; i < n; i++) {
        cout << kata.substr(i) << endl;
    }

    return 0;
}
