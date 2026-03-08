#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int count = 0;
    for(int i = a; i <= b; i++) {
        int d1 = (i/10000)%10;
        int d2 = (i/1000)%10;
        int d3 = (i/100)%10;
        int d4 = (i/10)%10;
        int d5 = i%10;

        int result = d1+d2+d3+d4+d5;
        count = max(result, count);
    }

    cout << count;
    return 0;
}