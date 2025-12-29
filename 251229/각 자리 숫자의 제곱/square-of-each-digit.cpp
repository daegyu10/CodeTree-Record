#include <iostream>

using namespace std;

int NumSquare(int n) {
    if(n < 10) {
        return n*n;
    }
    return NumSquare(n/10) + (n%10)*(n%10);
}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << NumSquare(N);
    return 0;
}