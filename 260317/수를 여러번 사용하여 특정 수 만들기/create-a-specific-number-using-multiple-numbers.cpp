#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    int target = c;
    while(true) {
        if(target % a < target % b) {
            target -= a;
            count += a;
            if(count > c) {
                count -= a;
                break;
            }
        } else {
            target -= b;
            count += b;
            if(count > c) {
                count -= b;
                break;
            }
        }
    }

    cout << count;
    return 0;
}