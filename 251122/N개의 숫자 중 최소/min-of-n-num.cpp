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
    int min = A[0];
    int count = 0;

    for(int i = 0; i < N; i++) {
        if(min > A[i]) {
            min = A[i];
        }
    }

    for(int i = 0; i < N; i++) {
        if(min == A[i]) {
            count++;
        }
    }

    cout << min << " " << count;
    return 0;
}
