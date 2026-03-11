#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_count = 0;
    for(int i = 1; i <= 100; i++) {
        int count = 0;
        for(int j = 0; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                int a1 = arr[j];
                int a2 = arr[k];
                if((a1 < i && i < a2) || (a1 > i && i > a2)) {
                    if(abs(a1-i) == abs(a2-i)) {
                        count++;
                    }
                }
            }
        }
        max_count = max(count, max_count);
    }

    cout << max_count;
    return 0;
}