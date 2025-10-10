#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << a << " ";

    while(true) {
        if(a % 2 == 0) {
            a += 3;

            if(a > b) {
                break;
            }

            cout << a << " ";
        } else {
            a = a*2;

            if(a > b) {
                break;
            }

            cout << a << " ";
        }

    }
    return 0;
}