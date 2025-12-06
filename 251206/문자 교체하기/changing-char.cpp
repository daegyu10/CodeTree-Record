#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    string str2;

    cin >> str1 >> str2;

    string copy;
    copy += str1[0];
    copy += str1[1];

    for(int i = 0; i < 2; i++) {
        str2[i] = copy[i];
    }

    cout << str2;
    return 0;
}