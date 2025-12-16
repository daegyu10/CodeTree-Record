#include <iostream>

using namespace std;

bool Threemuldetect(int n) {
    return (n%10)%3 == 0 || (n/10)%3 == 0;
}

bool Isthreemul(int n) {
    return n % 3 == 0 || Threemuldetect(n);
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int min;
    int max;
    if(a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    int count = 0;
    for(int i = min; i <= max; i++) {
        if(Isthreemul(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}