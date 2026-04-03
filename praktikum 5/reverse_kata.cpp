#include <iostream>
#include <cstring>

using namespace std;

void reversirKata(char kata[], char kataTerbalik[]) {
    int panjang = strlen(kata);
    
    for (int i = 0; i < panjang; i++) {
        kataTerbalik[i] = kata[panjang - 1 - i];
    }
    
    kataTerbalik[panjang] = '\0';
}

bool cekPalindrome(char kata[], char kataTerbalik[]) {

    if (strcmp(kata, kataTerbalik) == 0) {
        return true;  
    } else {
        return false; 
}
}
int main() {
    char kataAsli[100];
    char kataTerbalik[100];
    
    cout << "========================================" << endl;
    cout << "  PROGRAM PEMBALIK KATA DAN CEK PALINDROME" << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    cout << "Masukkan sebuah kata (maksimal 100 karakter): ";
    cin >> kataAsli;
    
    reversirKata(kataAsli, kataTerbalik);
    
    bool isPalindrome = cekPalindrome(kataAsli, kataTerbalik);
    
    cout << endl;
    cout << "========================================" << endl;
    cout << "             HASIL PEMROSESAN           " << endl;
    cout << "========================================" << endl;
    
    if (isPalindrome) {
        cout << "Kata asli      : " << kataAsli << endl;
        cout << endl;
        cout << "HASIL: Kata tidak memiliki balikan yang berbeda (palindrome)" << endl;

    } else {
        cout << "Kata asli      : " << kataAsli << endl;
        cout << "Kata terbalik  : " << kataTerbalik << endl;
        cout << endl;
        cout << "HASIL: Kata memiliki balikan yang berbeda (bukan palindrome)" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}
