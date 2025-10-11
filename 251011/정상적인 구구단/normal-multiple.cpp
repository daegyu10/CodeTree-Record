#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= a; j++) {
            if(j == a) {
                cout << i << " * " << j << " = " << i*j;
                break;
            }
            cout << i << " * " << j << " = " << i*j << ", ";
        }
        cout << "\n";
    }
    return 0;
}