#include <iostream>

using namespace std;

int Pibo(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }

    return Pibo(n-1) + Pibo(n-2);
}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << Pibo(N);
    return 0;
}