#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool arr[101] = {};
    int a, b;
    for(int i = 0; i <= 1; i++) {
        cin >> a >> b;
        for(int j = a+1; j <= b; j++) {
            arr[j] = true;
        }
    }

    int count = 0;
    for(int i = 1; i < 101; i++) {
        if(arr[i] == true) {
            count++;
        }
    }
    cout << count;
    return 0;
}