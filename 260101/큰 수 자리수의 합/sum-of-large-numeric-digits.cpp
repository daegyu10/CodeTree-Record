#include <iostream>

using namespace std;

int a, b, c;
int sum = 0;

int Numsum(int n) {
    if(n < 10) {
        sum += n;
        return sum;
    }

    sum += n % 10;
    return Numsum(n/10);
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << Numsum(a*b*c);
    return 0;
}