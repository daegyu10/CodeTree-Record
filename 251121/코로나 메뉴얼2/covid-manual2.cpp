#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[4] = {};
    char a;
    int b;

    for(int i = 0; i < 3; i++) {
        cin >> a >> b;
        if(a == 'Y') {
            if(b >= 37) {
                count[0]++;
            } else {
                count[2]++;
            }
        } else {
            if(b >= 37) {
                count[1]++;
            } else {
                count[3]++;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        cout << count[i] << " ";
    }

    if(count[0] >= 2) {
        cout << 'E';
    }
    return 0;
}