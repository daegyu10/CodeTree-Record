#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int k, n;
    cin >> k >> n;

    int arr[k+1][n+1] = {};
    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            
            if(i == j) {
                continue;
            }

            bool exist = true;

            for(int l = 1; l <= k; l++) {
                int i_idx, j_idx;

                for(int m = 1; m <= n; m++) {

                    if(arr[l][m] == i) {
                        i_idx = m;
                    } else if(arr[l][m] == j) {
                        j_idx = m;
                    }

                }

                if(i_idx < j_idx) {
                    exist = false;
                    break;
                }
            }

            if(exist == true) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}