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
    int max_1 = A[0];
    int max_2 = A[0];

    for(int i = 0; i < N; i++) {
        if(A[i] > max_1) {
            max_1 = A[i];
        }

        if(A[i] < max_1 && A[i] > max_2) {
            max_2 = A[i];
        }
    }

    cout << max_1 << " " << max_2;
    return 0;
}
