#include <iostream>

using namespace std;

int Cal(int n, int m, char c) {
    if(c == '+') {
        return n+m;
    } else if(c == '-') {
        return n-m;
    } else if(c == '/') {
        return n/m;
    } else if(c == '*') {
        return n*m;
    } else {
        return -1;
    }
}

int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    int result = Cal(a, c, o);
    if(result == -1) {
        cout << "False";
    } else {
        cout << a << " " << o << " " << c << " " << "=" << " " << result;
    }
    return 0;
}