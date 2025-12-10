#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            cout << (char)toupper(str[i]);
        } else {
            cout << (char)tolower(str[i]);
        }
    }
    return 0;
}