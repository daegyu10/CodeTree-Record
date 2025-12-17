#include <iostream>

using namespace std;

bool Isyear(int n) {
    if(n % 4 == 0) {
        if(n % 100 == 0 && n % 400 != 0) {
            return false;
        } else {
            return true;
        }
    }
    return false;
}

int y;

int main() {
    cin >> y;

    // Please write your code here.
    if(Isyear(y)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}