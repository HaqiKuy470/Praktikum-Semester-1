#include <iostream>
using namespace std;
int main()
{
    int Aziz=75, Defa, Dewi;
    cout<<" Aziz = "<<Aziz<<endl;
    Defa = Aziz;
    Dewi = Defa;

    cout<<" Dewi = Aziz = "<<Dewi<<endl;
    
    Defa = Defa + 10;
    cout<<" A. Berapakah nilai Defa ?? "<<endl;
    cout<<" Nilai Defa = "<<Defa<<endl;
    Dewi=Dewi;
    cout<<" B. Berapakah nilai Dewi ?? "<<endl;
    cout<<" Nilai Dewi="<<Dewi<<endl;
    Aziz = 75;
    cout<<" Defa = Aziz "<<endl;
    cout<<" Dewi = Aziz = "<<Dewi<<endl;
    
    Dewi=Aziz+Defa;
    cout<<" A. Berapakah nilai Defa ?? "<<endl;
    cout<<" Nilai Defa = "<<Defa<<endl;
    Dewi=Aziz;
    cout<<" B. Berapakah nilai Dewi ?? "<<endl;
    cout<<" Nilai Dewi = "<<Dewi;
}
