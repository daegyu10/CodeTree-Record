#include <iostream>
using namespace std;

int n, m;

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < m);
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    char arr[n][m] = {};

    int dx[4] = {0, 1, 0, -1}; //동 남 서 북
    int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;
    int dir_num = 0;
    int alpha_plus = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[x][y] = 'A' + alpha_plus;
            alpha_plus++;
            if(alpha_plus > 25) {
                alpha_plus = 0;
            }
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            if(InRange(nx,ny) && arr[nx][ny] == 0) {
                x = nx;
                y = ny;
            } else {
                dir_num = (dir_num + 1) % 4;
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
}