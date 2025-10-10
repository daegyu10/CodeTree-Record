#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 1;
    
    while(a != 0) {
        cin >> a;
        if(a == 0) {
            break;
        }
        cout << a << "\n";
    }
    return 0;
}