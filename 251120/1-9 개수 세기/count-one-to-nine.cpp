#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
        cin >> a;
        int count[10] = {};

        int b;

        for(int i = 0; i < a; i++) {
            cin >> b;
            count[b]++;
        }
        for(int i = 1; i < 10; i++) {
            cout << count[i] << endl;
        }
    return 0;
}