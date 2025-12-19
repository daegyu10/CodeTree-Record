#include <iostream>

using namespace std;

int CompleNum(int n, int m) {
    int count = 0;
    for(int i = n; i <= m; i++) {
        if((i % 2 != 0) && (i % 10 != 5) && (i % 3 != 0 || i % 9 == 0)) {
            count++;
        }
    }
    return count;
}


int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << CompleNum(a,b);
    return 0;
}