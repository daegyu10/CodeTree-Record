#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    int arr[n][n] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-2; j++) { //1번째 격자 구하기. i는 가로행. j는 세로 행. 즉 01, 02, 03 이렇게 잡기 위함.
            for(int k = 0; k < n; k++) {
                for(int l = 0; l < n-2; l++) { //2번째 격자 구하기. 이것도 완전 탐색
                    //두 격자가 겹치지 않는 조건. 서로 다른 행이거나, 같은 행이라도 서로 멀리 떨어져있으면 된다.
                    //따라서, 조건은. 서로다른행(i != k)이거나 같은 행이라도 시작점이 다른(abs(j-l)>=3)상태여야함.
                    //그때만 계산하면 된다.
                    if(i != k || abs(j-l)>=3) {
                        int count1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                        int count2 = arr[k][l] + arr[k][l+1] + arr[k][l+2];
                        max_count = max(max_count, count1+count2);
                    }
                }
            }
        }
    }
    cout << max_count;
    return 0;
}