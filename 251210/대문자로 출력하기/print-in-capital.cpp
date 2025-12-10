#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(isalpha(str[i])) {
            if('A' <= str[i] && str[i] <= 'Z') {
                cout << str[i];
            } else {
                cout << (char)(str[i] - 'a' + 'A');
            }
        }
    }
    return 0;
}