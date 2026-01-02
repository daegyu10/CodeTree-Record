#include <iostream>

using namespace std;

int N;

int NumArr(int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }

    return NumArr(n/3) + NumArr(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << NumArr(N);
    return 0;
}