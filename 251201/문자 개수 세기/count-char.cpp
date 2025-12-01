#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    getline(cin, str);
    cin >> c;

    int length = str.length();
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(c == str[i]) {
            count++;
        }
    }
    cout << count;
    return 0;
}