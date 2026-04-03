#include<iostream>
using namespace std;
int main()
{
    int x;

    string namabulan[] = {"Januari","Februari","Maret","April","Mei","Juni","Juli"
,"Agustus","September","Oktober","November","Desember"};
    string *nbulan;
    nbulan=namabulan;
    cout<<" ---------------------------------------"<<endl;
    cout<<"| PROGRAM MENAMPILKAN NAMA BULAN |"<<endl;
    cout<<" ---------------------------------------"<<endl;
    for(x=0;x<12;x++){
        cout<<"Bulan ke-"<<x+1<<" adalah "<<*(nbulan+x)<<endl;
    }
}
