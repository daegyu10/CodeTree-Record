#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;

    if(c == 'a') {
        cout << 'z';
    } else {
        cout << (char)(c-1);
    }
    return 0;
}