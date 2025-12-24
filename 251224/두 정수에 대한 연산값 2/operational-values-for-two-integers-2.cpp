#include <iostream>

using namespace std;

void ChangeNum(int &a, int &b) {
    if(a > b) {
        a *= 2;
        b += 10;
    } else {
        a += 10;
        b *= 2;
    }
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    ChangeNum(a,b);
    cout << a << " " << b;
    return 0;
}