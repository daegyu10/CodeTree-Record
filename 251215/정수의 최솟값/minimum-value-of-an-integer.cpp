#include <iostream>
#include <algorithm>

using namespace std;

int Findmin(int a, int b, int c) {
    if(a < b) {
        if(a > c) {
            return c;
        } else {
            return a;
        }
    } else {
        if(b > c) {
            return c;
        } else {
            return b;
        }
    }
}

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << Findmin(a,b,c);
    return 0;
}