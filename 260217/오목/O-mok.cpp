#include <iostream>
using namespace std;

bool InRange(int a, int b) {
    return (0 <= a && a < 19 && 0 <= b && b < 19);
}

int main() {
    // Please write your code here.
    int arr[19][19] = {};
    
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    //누가 승리했는지, 어디서 마지막으로 되었는지.
    //오목은 가로, 세로, 대각선 방향을 뜻한다면 그냥 그렇게 다 해보면 된다.
    //dx, dy 쓰는 방안은? 가로, 세로, 오른쪽 아래 대각선, 오른쪽 위 대각선. 4개 방향.
    int dx[4] = {0, 1, 1, -1};
    int dy[4] = {1, 0, 1, 1};

    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) {
            if(arr[i][j] == 1) {
                for(int dir = 0; dir < 4; dir++) {
                    for(int k = 1; k <= 4; k++) {
                        int nx = i + dx[dir]*k;
                        int ny = j + dy[dir]*k;

                        if(!InRange(nx, ny) || arr[nx][ny] != 1) {
                            break;
                        } else if(k == 4) {
                            cout << 1 << endl << i + dx[dir]*2 + 1 << " " << j + dy[dir]*2 + 1;
                            return 0;
                        }
                    }
                }
            } else if(arr[i][j] == 2) {
                for(int dir = 0; dir < 4; dir++) {
                    for(int k = 1; k <= 4; k++) {
                        int nx = i + dx[dir]*k;
                        int ny = j + dy[dir]*k;

                        if(!InRange(nx, ny) || arr[nx][ny] != 2) {
                            break;
                        } else if(k == 4) {
                            cout << 2 << endl << i + dx[dir]*2 + 1 << " " << j + dy[dir]*2 + 1;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    cout << 0;
    return 0;
}