#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    char b;

    cin >> a >> b;
    int c = (int)a;
    int d = (int)b;

    int e;
    if(c <= d) {
        e = d - c;
    } else {
        e = c - d;
    }

    cout << c+d << " " << e;


    return 0;
}