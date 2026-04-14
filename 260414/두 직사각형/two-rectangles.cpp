#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, x2, y1, y2;
    int a1, a2, b1, b2;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    if((x2 >= a1 && y2 >= b1) || (a2 >= x1 && b2 >= y1) || (a1 <= x1 && x2 <= a2 && b1 <= y1 && y2 <= b2)) {
        cout << "overlapping";
    } else {
        cout << "nonoverlapping";
    }

    return 0;
}