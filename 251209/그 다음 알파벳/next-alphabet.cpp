#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;

    int a;
    if(c == 'z') {
        a = 97;
    } else {
        a = ((int)c)+1;
    }
    cout << (char)a;
    return 0;
}