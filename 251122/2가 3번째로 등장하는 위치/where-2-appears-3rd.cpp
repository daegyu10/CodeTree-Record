#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count = 0;
    int input;
    int num;

    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> input;
        if(input == 2) {
            count++;
        }
        if(count == 3) {
            cout << i+1;
            break;
        }
    }
    return 0;
}