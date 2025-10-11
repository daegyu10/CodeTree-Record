#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    int prt = 1;

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= i; j++) {
            cout << prt << " ";
            prt++;
        }
        cout << "\n";
    }
    return 0;
}