#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, n2;
    cin >> n >> n2;

    int arr[20];
    int count = 0;
    
    while(true) {
        if(n < n2) {
            arr[count++] = n;
            break;
        }

        arr[count++] = n % n2;
        n /= n2;
    }

    for(int i = count - 1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}