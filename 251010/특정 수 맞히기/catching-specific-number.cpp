#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;

    while(a != 25) {
        cin >> a;

        if(a < 25) {
            cout << "Higher" << "\n";
        } else if(a > 25) {
            cout << "Lower" << "\n";
        }
    }

    cout << "Good";
    return 0;
}