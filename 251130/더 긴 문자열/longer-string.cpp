#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    string str2;

    int c1 = 0;
    int c2 = 0;

    cin >> str1;
    c1 = str1.length();
    cin >> str2;
    c2 = str2.length();

    if(c1 > c2) {
        cout << str1 << " " << c1;
    } else if(c1 < c2) {
        cout << str2 << " " << c2;
    } else {
        cout << "same";
    }
    return 0;
}