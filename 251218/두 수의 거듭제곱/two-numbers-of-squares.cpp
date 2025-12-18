#include <iostream>

using namespace std;

int Multiple(int n, int m) {
    int sum = n;
    for(int i = 1; i < m; i++) {
        sum *= n;
    }
    return sum;
}


int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << Multiple(a,b);
    return 0;
}