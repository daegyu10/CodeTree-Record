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
    int x = 0, y = 0;
    int dir_num = 0;

    arr[x][y] = 1;
    
    for(int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if(!InRange(nx,ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4;
        }

        x = x + dx[dir_num];
        y = y + dy[dir_num];
        arr[x][y] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}