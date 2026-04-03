#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100], str2[100], temp[1];
    char *s;
    string str3;
    FILE *pf;
    pf = fopen("tugasrumah.txt","w");
    cout << "<>Program Mengurutkan Huruf<>: " << endl;
    cin.getline(str, 100);
    
    // Bagian ini menulis string asli ke file
    for (int a=0; a<strlen(str); a++)
    {
        s=str;
        putc(*(s+a), pf);
    }

    strcpy(str2, str);
    
    // Ini adalah algoritma sorting (Bubble Sort)
    for(int i=1;i<strlen(str2);i++)
    {
        for(int j=0;j<strlen(str2);j++)
        {
            if(str2[i]<str2[j])
            {
                temp[0]=str2[j];
                str2[j]=str2[i];
                str2[i]=temp[0];
            }
        }
    }

    for (int a=0; a<strlen(str2); a++)
    {
        s=str2; 
        putc(*(s+a), pf);
    }

    int i=0;

    while(str2[i]!=0)
    {
        if(!isupper(str2[i]))         {
            str3 += str2[i];
        } 
        i++;
    }
    
    i=0;
    // Mengumpulkan karakter kapital
    while(str2[i]!=0)
    {
        if(isupper(str2[i]))         {
            str3 += str2[i];
        }
        i++;
    }
    
    cout << "Hasil proses karakter-karakter adalah : " << endl;
    cout << str3 << endl << endl;
    
    fclose(pf);
    
    cout << "Membuka file yang telah dibuat : " <<endl; 
    FILE *ff;
    ff = fopen("tugasrumah.txt","r"); 
    
    // ! INI BUG: Hanya mencetak variabel 'str' asli, tidak membaca file
    cout << str << endl<<endl; 
    
    cout << str3 << endl;
    return 0;
}
