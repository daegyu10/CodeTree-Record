#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int arr[n][m] = {};

    int total_num = n+m-1; //최종반복횟수
    
    int num = 1;
    for(int a = 0; a < total_num; a++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i+j == a) {
                    arr[i][j] = num;
                    num++; //배열의 추가는 위에서 아래로. 왼쪽에서 오른쪽으로. 즉, 대각선 방향으로 이루어진다. 
                    //예시를 들자면, 먼저 j가 증가하면서 [0][1]에 2. 그리고 i가 증가한 이후 [1][0]에 3이 찍힌다.
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
    }
    
    return 0;
}
