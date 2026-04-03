#include <iostream>
#include <iomanip> 

using namespace std; 

int main() {
    cout << "==========================================================" << endl;
    cout << "         TABEL KEBENARAN (LOGIC TRUTH TABLE)" << endl;
    cout << "==========================================================" << endl;
    

    cout << setw(5) << "P" << " | " 
         << setw(5) << "Q" << " | "
         << setw(7) << "P OR Q" << " | "
         << setw(8) << "P AND Q" << " | "
         << setw(7) << "NOT P" << " | "
         << setw(7) << "P XOR Q" << endl;
    cout << "----------------------------------------------------------" << endl;

    for (int P = 1; P >= 0; P--) {

        for (int Q = 1; Q >= 0; Q--) {

            int p_or_q = (P || Q);
            
            int p_and_q = (P && Q);
            
            int not_p = (!P);
            
            int p_xor_q = (P ^ Q);

            cout << setw(5) << P << " | " 
                 << setw(5) << Q << " | "
                 << setw(7) << p_or_q << " | "
                 << setw(8) << p_and_q << " | "
                 << setw(7) << not_p << " | "
                 << setw(7) << p_xor_q << endl;
        }
    }

    cout << "==========================================================" << endl;
    return 0;
}
