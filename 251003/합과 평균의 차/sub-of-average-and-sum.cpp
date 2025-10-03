#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int total = a+b+c;
    int avg = (a+b+c)/3;

    cout << total << "\n" << avg << "\n" << total-avg;
    return 0;
}