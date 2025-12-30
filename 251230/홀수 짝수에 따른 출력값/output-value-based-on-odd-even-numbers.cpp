#include <iostream>

using namespace std;

int Addnum(int n) {
    if(n == 1) {
        return 1;
    } else if(n == 2) {
        return 2;
    }

    if(n % 2 == 1) {
        return Addnum(n-2) + n;
    } else {
        return Addnum(n-2) + n;
    }
}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << Addnum(N);
    return 0;
}