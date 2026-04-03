#include<iostream>
#include<string.h>
using namespace std;
char kalimat[50];
void jumlah(){
    int hasil;
    int *x;

    hasil=1;
    x=&hasil;
    for(int a=1;a<=strlen(kalimat)-1;a++)
    {
        if(kalimat[a-1]==' ') {
            hasil++;
        }
    }
    cout<<"Jumlah Kata sebanyak "<<*x<<endl;
}
int main() {
    cout<<"---------------------------------------"<<endl;
    cout<<"| PROGRAM MENGHTING JUMLAH KATA |"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Masukkan Kalimat : ";
    cin.getline(kalimat,50);
    jumlah();
    return 0;
}
