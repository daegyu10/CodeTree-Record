#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(isdigit(str[i]) || isalpha(str[i])) {
            if(('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')) {
                cout << (char)tolower(str[i]);
            } else {
                cout << str[i];
            }
        }
    }
    return 0;
}