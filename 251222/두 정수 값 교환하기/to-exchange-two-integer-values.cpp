#include <iostream>

using namespace std;

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    Swap(n,m);
    return 0;
}