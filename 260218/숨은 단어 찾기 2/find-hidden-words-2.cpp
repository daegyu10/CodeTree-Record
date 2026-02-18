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
    char word[3] = {'L', 'E', 'E'};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    //가로, 세로, 대각선 각자 검사한다. 따라서 8방향.
    int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
    int dy[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    //가로 2(오른쪽, 왼쪽), 세로 2(위, 아래), 대각선 4(오른쪽 위, 아래 / 왼쪽 위, 아래)
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 'L') {
                for(int dir = 0; dir < 8; dir++) {
                    for(int k = 1; k <= 2; k++) {
                        int nx = i + dx[dir]*k;
                        int ny = j + dy[dir]*k;

                        if(!InRange(nx, ny) || arr[nx][ny] != word[k]) {
                            break;
                        } else if(k == 2) {
                            count++;
                        }
                    }
                    
                }
            }
        }
    }

    cout << count;
    return 0;
}