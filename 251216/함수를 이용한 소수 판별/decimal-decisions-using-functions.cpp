#include <iostream>

using namespace std;

bool Numfinder(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int count = 0;
    int min;
    int max;

    if(a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    for(int i = min; i <= max; i++) {
        if(Numfinder(i)) {
            count += i;
        }
    }

    cout << count;

    return 0;
}