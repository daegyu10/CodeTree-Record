#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    for(int i = a; i < 101; i++) {
        if(i < 60) {
            cout << 'F' << " ";
        } else if (i < 70) {
            cout << 'D' << " ";
        } else if (i < 80) {
            cout << 'C' << " ";
        } else if (i < 90) {
            cout << 'B' << " ";
        } else if (i > 89) {
            cout << 'A' << " ";
        }
    }
    return 0;
}