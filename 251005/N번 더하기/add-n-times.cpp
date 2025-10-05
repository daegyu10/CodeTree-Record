#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b;
    c = a+b;
    for(int i; i < b; i++) {
        cout << c << endl;
        c += b;
    }
    return 0;
}