#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int length = str.length();
    str = str.substr(0,1) + str.substr(2);
    length = str.length();
    str = str.substr(0, length-2) + str.substr(length-1);
    cout << str;
    return 0;
}