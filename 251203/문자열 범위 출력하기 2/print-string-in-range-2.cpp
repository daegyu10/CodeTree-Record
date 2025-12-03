#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int a;

    cin >> str;
    cin >> a;

    if(a >= str.length()) {
        for(int i = str.length() -1; i >= 0; i--) {
            cout << str[i];
        }
    } else {
        int length = str.length() - 1;
        for(int i = 0; i < a; i++) {
            cout << str[length];
            length--;
        }
    }
    return 0;
}