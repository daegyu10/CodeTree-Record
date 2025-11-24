#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[10] = {};
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int max = 0;
    int min_500 = 0;

    for(int i = 0; i < 10; i++) {
        if(arr[i] > max && arr[i] < 500) {
            max = arr[i];
        }

        if(arr[i] > 500 && min_500 == 0) {
            min_500 = arr[i];
        } else if(arr[i] > 500 && min_500 > arr[i]) {
            min_500 = arr[i];
        }
    }

    cout << max << " " << min_500;
    return 0;
}