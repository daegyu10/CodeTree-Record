#include <iostream>

using namespace std;

int N;

int Num(int n) {
    if(n == 1) {
        return 2;
    }
    if(n == 2) {
        return 4;
    }

    return (Num(n-1)*Num(n-2))%100;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << Num(N);
    return 0;
}