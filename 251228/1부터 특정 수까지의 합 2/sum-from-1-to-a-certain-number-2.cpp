#include <iostream>

using namespace std;

int N;

int Addnum(int n) {
    if(n == 1) {
        return 1;
    }
    return Addnum(n-1) + n;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << Addnum(N);
    return 0;
}