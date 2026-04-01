#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    int arr1[n-1] = {};
    
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int a, b; //처음 숫자 특정하기 위함임.

    for(int i = 1; i <= n-1; i++) {
        a = i;
        b = arr1[0] - a;
        bool index[n+1] = {};
        int c;
        index[a] = true;
        index[b] = true; //i는 a값을 정하기 위함임. for문 반복용. 그 용도로만 씀.

        int minus = b;
        bool exist = false;
        for(int j = 1; j < n-1; j++) {
            c = arr1[j] - minus;
            if(index[c] == true) {
                break;
            } else if(c < 1) {
                break;
            } else {
                index[c] = true;
                minus = c;
                if(j == n-2) {
                    exist = true;
                }
            }
        }

        if(exist) {
            arr[0] = a;
            arr[1] = b;
            for(int k = 1; k < n-1; k++) {
                arr[k+1] = arr1[k] - arr[k];
            }

            for(int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            return 0;
        }
    }
    return 0;
}