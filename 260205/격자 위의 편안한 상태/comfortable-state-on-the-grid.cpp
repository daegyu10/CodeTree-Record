#include <iostream>
using namespace std;

int n;
bool InRange(int a, int b) {
    return (1 <= a && a <= n && 1 <= b && b <= n);
}

int main() {
    // Please write your code here.
    int m;
    cin >> n >> m;

    int arr[n+1][n+1] = {};
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir_num;

    for(int i = 0; i < m; i++) {
        int c, d;
        int count = 0;
        cin >> c >> d;
        arr[c][d] = 1;
        for(int j = 0; j < 4; j++) {
            int nx = c + dx[j];
            int ny = d + dy[j];
            if(InRange(nx, ny) && arr[nx][ny] == 1) {
                count++;
            }
        }

        if(count == 3) {
            cout << 1 << endl;
        } else {
            //cout << count;
            cout << 0 << endl;
        }
    }
    return 0;
}