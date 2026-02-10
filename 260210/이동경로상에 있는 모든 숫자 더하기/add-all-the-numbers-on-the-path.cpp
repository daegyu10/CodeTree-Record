#include <iostream>
using namespace std;

int n;

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}
int main() {
    // Please write your code here.
    cin >> n;
    int arr[n][n] = {};
    int visited[n][n] = {};

    string command;
    int a;
    cin >> a >> command;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int x, y;
    x = n / 2;
    y = n / 2;
    visited[x][y] = 1;

    int dx[4] = {0, 1, 0, -1}; //동 남 서 북
    int dy[4] = {1, 0, -1, 0};
    int dir_num = 3;

    for(int i = 0; i < a; i++) {
        if(command[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        } else if(command[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        } else if(command[i] == 'F') {
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            if(InRange(nx, ny)) {
                x = nx;
                y = ny;
                visited[x][y] = 1;
            } else {
                x = x;
                y = y;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(visited[i][j] == 1) {
                sum += arr[i][j];
                visited[i][j] = 0;
            }
        }
    }

    //cout << sum;
    cout << command.size() << " vs " << a << endl;
    return 0;
}