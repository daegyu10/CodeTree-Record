#include <iostream>

using namespace std;

void SwapArr(int *x, int n) {
    for(int i = 0; i < n; i++) {
        if(x[i] % 2 == 0) {
            x[i] /= 2;
        }
        cout << x[i] << " ";
    }
}

int n;
int arr[50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    SwapArr(arr, n);
    return 0;
}