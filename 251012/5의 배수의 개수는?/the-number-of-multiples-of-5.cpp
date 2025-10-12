#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count = 0;
    int a;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a;
            if(a % 5 == 0) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}