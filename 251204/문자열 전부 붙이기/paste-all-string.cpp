#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    string str_a;
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        cin >> str;
        str_a += str;
    }
    cout << str_a;
    return 0;
}