#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int a[10] = {};
    int b[10] = {};
    int start, end;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int count = 0;
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {

                int arr_2[101] = {};

                for(int l = 0; l < n; l++) {
                    if(l == i || l == j || l == k) {
                        continue;
                    }
                        start = a[l];
                        end = b[l];
                        for(int m = start; m <= end; m++) {
                            arr_2[m]++;
                        }
                    }

                for(int m = 0; m < 101; m++) {
                    if(arr_2[m] > 1) {
                        break;
                    } else if(m == 100) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
    return 0;
}