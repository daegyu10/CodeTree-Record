#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[10] = {};
    int a;

    while(true) {
        cin >> a;
        if(a == 0) {
            break;
        }
        count[a/10]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << i << " - " << count[i] << endl;
    }
    return 0;
}