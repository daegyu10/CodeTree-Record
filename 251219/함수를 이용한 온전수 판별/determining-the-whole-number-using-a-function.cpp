#include <iostream>

using namespace std;

/*
int CompleNum(int n, int m) {
    int count = 0;
    for(int i = n; i <= m; i++) {
        if((i % 2 != 0) && (i % 10 != 5) && (i % 3 != 0 || i % 9 == 0)) {
            count++;
        }
    }
    return count;
}
*/
bool CompleteNum(int n) {
    if(n % 2 == 0) {
        return false;
    } else if(n % 10 == 5) {
        return false;
    } else if(n % 3 == 0 && n % 9 != 0) {
        return false;
    } else {
        return true;
    }
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int count = 0;
    for(int i = a; i <= b; i++) {
        if(CompleteNum(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}