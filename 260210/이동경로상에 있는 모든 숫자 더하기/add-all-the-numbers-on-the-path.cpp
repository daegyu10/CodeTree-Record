#include <iostream>
using namespace std;

int n;

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}
int main() {
    // Please write your code here.
    int a;
    cin >> n >> a;
    int arr[n][n] = {};

    string command;
    
    cin >> command;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int x, y;
    x = n / 2;
    y = n / 2;
    int sum = 0;
    sum += arr[x][y];

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
                sum += arr[x][y];
            } else {
                x = x;
                y = y;
            }
        }
    }
    
    cout << sum;
    
    return 0;
}