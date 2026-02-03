#include <iostream>
using namespace std;

bool InRange(int a, int b, int c) {
    return (1 <= a && a <= c && 1 <= b && b <= c);
}

int main() {
    // Please write your code here.
    int n, t;
    cin >> n >> t;
    int arr[n+1][n+1] = {};

    int a, b;
    cin >> a >> b;

    char dir;
    cin >> dir;
    int dir_num; //n * n 크기임을 명심하자. 좌우로 가면 01, 02, 03 이렇게 y가 바뀌고 위아래로 가면 10,20,30 이렇게 x가 바뀐다. 반대임을 명심.
    if(dir == 'R') {
        dir_num = 0;
    } else if(dir == 'D') {
        dir_num = 1;
    } else if(dir == 'U') {
        dir_num = 2;
    } else if(dir == 'L') {
        dir_num = 3;
    }

    int x = a, y = b;
    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};

    for(int i = 0; i < t; i++) {
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if(!InRange(nx,ny,n)) {
            dir_num = 3 - dir_num;
        } else {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
    }

    cout << x << " " << y;
    return 0;
}