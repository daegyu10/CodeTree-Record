#include <iostream>

using namespace std;

void PrintNum(int n) {
    if(n == 0) {
        return;
    }

    cout << n << " ";
    PrintNum(n-1);
    cout << n << " ";
}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    PrintNum(N);
    return 0;
}