#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;
    int count = 0;
    cin >> str;
    count += str.length();

    cin >> str;
    count += str.length();

    cout << count;
    return 0;
}