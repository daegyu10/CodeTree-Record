#include <iostream>
using namespace std;



bool InRange(int x, int y, int n) {
        return (0 <= x && x < n && 0 <= y && y < n);
}

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

    int nx = 0, ny = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int total_count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int count = 0;
            for(int dir_num = 0; dir_num < 4; dir_num++) {
                int nx = j + dx[dir_num];
                int ny = i + dy[dir_num];
                if(InRange(nx,ny,n) && arr[nx][ny] == 1) {
                    count++;
                } 
            }
            if(count >= 3) {
                total_count++;
            }
        }
    }

    cout << total_count;
    return 0;
}