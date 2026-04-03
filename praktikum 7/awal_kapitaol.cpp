#include <iostream>
#include <cstring> 
#include <cctype>  

using namespace std;

int main() 
{
    char kalimat[1000];
    
    cout << "Masukan Kata : ";
    cin.getline(kalimat, 1000);

    if (strlen(kalimat) > 0) {
        kalimat[0] = toupper(kalimat[0]);
    }

    for (int a = 1; a < strlen(kalimat); a++) 
    {
        if (kalimat[a-1] == ' ') 
        {
            kalimat[a] = toupper(kalimat[a]);
        }
    }

    cout << "Hasil : " << kalimat << endl;

    return 0;
}
