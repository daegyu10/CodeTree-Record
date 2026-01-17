#include <iostream>
using namespace std;
#include <string>

int main() {
    // Please write your code here.

    string input;
    cin >> input;
    int num = 0;

    for(int i = 0; i < input.length(); i++) {
        num = num * 2 + (input[i] - '0');
    }

    num = num * 17;

    int arr[20];
    int count = 0;
    while(true) {
        if(num < 2) {
            arr[count++] = num;
            break;
        }

        arr[count++] = num % 2;
        num /= 2;
    }

    for(int i = count -1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}