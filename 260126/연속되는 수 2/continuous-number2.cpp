#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0 || arr[i] != arr[i-1]) {
            count++;
        }
    }

    cout << count;
    return 0;
}