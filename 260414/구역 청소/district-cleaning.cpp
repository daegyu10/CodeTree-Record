#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, x2, a1, a2;
    cin >> x1 >> x2 >> a1 >> a2;
    int count = 0;
    if(x2 < a1 || a2 < x1) {
        count = (x2 - x1) + (a2 - a1);
    } else {
        count = max(x2, a2) - min(x1, a1);
    }
    cout << count;
}