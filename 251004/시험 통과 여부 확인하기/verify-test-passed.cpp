#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if(a >= 80) {
        cout << "pass";
    } else {
        cout << 80-a << " more score";
    }
    return 0;
}