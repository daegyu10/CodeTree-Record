#include <iostream>

using namespace std;

void Num(int *x, int n) {
    for(int i = 0; i < n; i++) {
        if(x[i] >= 0) {
            continue;
        } else {
            x[i] = -(x[i]);
        }
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
    Num(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}