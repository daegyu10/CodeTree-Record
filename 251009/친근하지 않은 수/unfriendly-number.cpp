#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int count = 0;
    for(int i = 0; i <= a; i++) {
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}