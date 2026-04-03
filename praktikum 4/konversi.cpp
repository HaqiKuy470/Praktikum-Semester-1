#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << " C\tF\tR\tK" << endl;
    cout << "---------------------------------" << endl;
    for (int C = 10; C <= 100; C += 10)
    {
        double F = (9.0 / 5.0) * C + 32;
        double R = (4.0 / 5.0) * C;
        double K = C + 273.15; 

              cout << C << "\t"
             << fixed << setprecision(1) << F << "\t"
             << R << "\t" << K << endl;
    }
    return 0;
}
