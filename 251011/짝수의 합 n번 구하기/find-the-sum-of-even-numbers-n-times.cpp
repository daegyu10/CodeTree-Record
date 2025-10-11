#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int b, c;

    for(int i = 0; i < a; i++) {
        int sum = 0;
        cin >> b >> c;
        for(int j = b; j <= c; j++) {
            if(j % 2 == 0) {
                sum += j;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}