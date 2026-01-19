#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[101] = {};

    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 101; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}