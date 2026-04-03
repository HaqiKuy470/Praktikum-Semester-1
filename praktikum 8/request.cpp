#include <iostream>
#include <fstream>  
#include <string>  
#include <iomanip>  

using namespace std;

int main() {
  
    int request;
    int account;
    float balance;
    string name;

    ifstream inClientFile("kuliah.dat");

    if (!inClientFile.is_open()) {
        cerr << "File could not be opened" << endl;
        return 1; // Keluar jika error
    }

    cout << "Enter request" << endl
         << "1 - List accounts with zero balances" << endl
         << "2 - List accounts with credit balances" << endl
         << "3 - List accounts with debit balances" << endl
         << "4 - End of run?" << endl << "? ";

    cin >> request;

    while (request != 4) {
        switch (request) {
            case 1:
                cout << "\nAccounts with zero balances:" << endl;

while (inClientFile >> account >> name >> balance) {
                    if (balance == 0) {
                        // Format: %-10d %-13s %7.2f
                        cout << left << setw(10) << account 
                             << setw(13) << name 
                             << right << setw(7) << fixed << setprecision(2) << balance << endl;
                    }
                }
                break;

            case 2:
                cout << "\nAccounts with credit balances:" << endl;
                while (inClientFile >> account >> name >> balance) {
                    if (balance < 0) {
                        cout << left << setw(10) << account 
                             << setw(13) << name 
                             << right << setw(7) << fixed << setprecision(2) << balance << endl;
                    }
                }
                break;

            case 3:
                cout << "\nAccounts with debit balances:" << endl;
                while (inClientFile >> account >> name >> balance) {
                    if (balance > 0) {
                        cout << left << setw(10) << account 
                             << setw(13) << name 
                             << right << setw(7) << fixed << setprecision(2) << balance << endl;
                    }
                }
                break;
        }

        inClientFile.clear();             
        inClientFile.seekg(0, ios::beg); 

        cout << "\n? ";
        cin >> request;
    }

    inClientFile.close();
    cout << "End of run." << endl;

    return 0;
}
