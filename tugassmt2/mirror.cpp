#include <iostream>
#include <stack>
using namespace std;
    int main() {
        string kata;
        stack<char> s;
        cout << "Masukkan kata: ";
        cin >> kata;
        for (int i = 0; i < kata.length(); i++) {
        s.push(kata[i]);
}
cout << "Mirror: "; 
while (!s.empty()) 
{
     cout << s.top();
     s.pop();
}
return 0;
}