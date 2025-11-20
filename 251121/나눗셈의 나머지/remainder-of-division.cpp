#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b;

    int count_a;
    int count[10] = {};
    cin >> a >> b;
    while(a > 1) {
        count_a = a % b;
        count[count_a]++;

        a = a/b;
    }

    count_a = 0;
    for(int i = 0; i < b; i++) {
        count_a += ((count[i]*count[i]));
    }
    cout << count_a;
    return 0;
}