#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    string str_t;

    cin >> str >> str_t;

    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str.substr(i, str_t.length()) == str_t) {
            count++;
        }
    }
    cout << count;
    return 0;
}