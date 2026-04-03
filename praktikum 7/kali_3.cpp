#include <iostream>
using namespace std;
void hasil(int *w, int *x, int *y, int *z)
{
    int a,b,c,d;

    a=*w*3;
    b=*x*3;
    c=*y*3;
    d=*z*3;
    cout<<endl;
    cout<<" Nilai Keluaran : "<<endl;
    cout<<endl;
    cout<<" Nilai w = "<<a<<endl;
    cout<<" Nilai x = "<<b<<endl;
    cout<<" Nilai y = "<<c<<endl;
    cout<<" Nilai z = "<<d<<endl;
}
int main()
{
    int w,x,y,z;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"| PROGRAM PENGUBAH NILAI MENJADI 3 KALI LIPAT |"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<" Masukkan Nilai w : ";
    cin>>w;
    cout<<" Masukkan Nilai x : ";
    cin>>x;
    cout<<" Masukkan Nilai y : ";
    cin>>y;
    cout<<" Masukkan Nilai z : ";
    cin>>z;
    hasil(&w,&x,&y,&z);
}
