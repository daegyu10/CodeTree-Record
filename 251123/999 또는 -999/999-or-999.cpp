#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100] = {};
    int min;
    int max = 0;

    cin >> arr[0];
    min = arr[0];
    max = arr[0];

    for(int i = 1; i < 100; i++) {
        cin >> arr[i];
        

        if(arr[i] == 999 || arr[i] == -999) {
            break;
        }

        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max << " " << min;
    return 0;
}