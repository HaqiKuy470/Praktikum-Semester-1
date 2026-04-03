#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* str) {
    char* end = str + strlen(str) - 1;
    while (str < end) {
        char temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100];
    cout << " Masukkan kata : ";

    cin.getline(str, sizeof(str));
    cout << "+++-----------------+++-----------------+++" << endl;
    reverse(str);
    cout << " Pembalikan Kata : " << str << endl;
    cout << "+++-----------------+++-----------------+++" << endl;
    return 0;
}
