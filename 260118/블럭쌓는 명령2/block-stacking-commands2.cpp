#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, count;
    cin >> n >> count;

    int arr[n] = {};
    for(int i = 0; i < count; i++) {
        int a, b;
        cin >> a >> b;

        for(int j = a-1; j < b; j++) {
            arr[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max;
    return 0;
}