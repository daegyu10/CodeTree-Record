#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    char c1 = str[0];
    char c2 = str[1];

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c2) {
            str[i] = c1;
        }
    }
    cout << str;
    return 0;
}