#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[7] = {};
    int a;

    for(int i = 0; i < 10; i++) {
        cin >> a;
        count[a]++;
    }

    for(int i = 1; i < 7; i++) {
        cout << i << " - " << count[i] << endl;
    }
    return 0;
}