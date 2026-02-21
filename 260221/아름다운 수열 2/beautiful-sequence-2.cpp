#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int arr1[n] = {};
    int arr2[m] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    sort(arr2, arr2+m);
    int count = 0;
    //아름다운 수열은 구현이 까다롭다. 그래서 특정 구간을 정하고 그걸 sort하고 그걸로 비교하기.
    for(int i = 0; i <= n-m; i++) {
        int arr3[m] = {}; //비교용
        int index = 0;
        for(int j = i; j < i+m; j++) {
            arr3[index] = arr1[j];
            index++;
        }
        sort(arr3, arr3+m);
        for(int j = 0; j < m; j++) {
            if(arr2[j] != arr3[j]) {
                break;
            } else if(j == m-1) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}