#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    for(int i = 1; i <= a; i++) {
        for(int j = 0; j < (2*i)-1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}