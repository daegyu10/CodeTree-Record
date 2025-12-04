#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    //getline(cin, str) / str += to_string(count);

    string str;
    cin >> str;

    int length = str.length();
    if(length % 2 == 0) {
        for(int i = length-1; i >= 0; i -= 2) {
            cout << str[i];
        }
    } else {
        for(int i = length-2; i >= 0; i -= 2) {
            cout << str[i];
        }
    }
    return 0;
}