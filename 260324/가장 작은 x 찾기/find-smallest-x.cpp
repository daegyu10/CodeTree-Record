#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr1[n] = {};
    int arr2[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
    }
    for(int i = 1; i < 10000; i++) { //첫 시작 수.
        int work = i;
        for(int j = 0; j < n; j++) {
            work *= 2;
            if(!(arr1[j] <= work && work <= arr2[j])) {
                break;
            } else if(j == n-1) {
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}