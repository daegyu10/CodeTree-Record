#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;

    cin >> a;
    cin >> b;
    double total = a+b;
    double c = (double)total / 2;

    cout << fixed;
    cout.precision(1);
    cout << a+b << " " << c;
    return 0;
}