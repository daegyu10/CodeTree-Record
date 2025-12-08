#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int len = str.length();
    str = str.substr(1, len-1) + str.substr(0, 1);
    cout << str;
    return 0;
}