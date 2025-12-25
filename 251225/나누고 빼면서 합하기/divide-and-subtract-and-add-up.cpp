#include <iostream>

using namespace std;

int n, m;
int A[100];

int DivideandAdd(int *arr, int m) {
    int count = 0;

    while(m != 1) {
        count += arr[m-1];
        if(m % 2 == 0) {
            m /= 2;
        } else {
            m -= 1;
        }
    }
    count += arr[0];
    return count;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    cout << DivideandAdd(A, m);
    return 0;
}