#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    
    int max1;
    int max2;

    if(A[0] > A[1]) {
        max1 = A[0];
        max2 = A[1];
    } else {
        max1 = A[1];
        max2 = A[0];
    }

    for(int i = 2; i < N; i++) {
        if(A[i] >= max1) {
            max2 = max1;
            max1 = A[i];
        } else if(A[i] > max2) {
            max2 = A[i];
        }
    }

    cout << max1 << " " << max2;
    
    return 0;
}
