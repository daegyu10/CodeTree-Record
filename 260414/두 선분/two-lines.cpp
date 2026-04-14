#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    if(x2 >= x3 || x4 >= x1 || (x1 <= x3 && x4 <= x2) || (x3 <= x1 && x2 <= x4)) {
        cout << "intersecting";
    } else {
        cout << "nonintersecting";
    }
    return 0;
}