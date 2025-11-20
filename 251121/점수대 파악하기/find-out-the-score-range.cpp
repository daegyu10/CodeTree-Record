#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[11] = {};
    int a;

    while(true) {
        cin >> a;
        if(a == 0) {
            break;
        }
        count[a/10]++;
    }

    for(int i = 10; i > 0; i--) {
        cout << i*10 << " - " << count[i] << endl;
    }
    return 0;
}