#include <iostream>
using namespace std;
int n, m;

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < m);
}
int main() {
    // Please write your code here.
    
    cin >> n >> m;
    int arr[n][m] = {};
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir_num = 1; //동 남 서 북으로 설정함. 처음은 남. 남>동>북>서>남
    int x = 0, y = 0;

    for(int i = 0; i < n*m; i++) {
        arr[x][y] = i+1;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if(InRange(nx, ny) && arr[nx][ny] == 0) {
            x = nx;
            y = ny;
        } else {
            if(dir_num == 0) {
                dir_num = 3;
                nx = x + dx[dir_num];
                ny = y + dy[dir_num];
                x = nx;
                y = ny;
            } else if(dir_num == 1) {
                dir_num = 0;
                nx = x + dx[dir_num];
                ny = y + dy[dir_num];
                x = nx;
                y = ny;
            } else if(dir_num == 2) {
                dir_num = 1;
                nx = x + dx[dir_num];
                ny = y + dy[dir_num];
                x = nx;
                y = ny;
            } else if(dir_num == 3) {
                dir_num = 2;
                nx = x + dx[dir_num];
                ny = y + dy[dir_num];
                x = nx;
                y = ny;
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