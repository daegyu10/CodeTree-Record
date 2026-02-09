#include <iostream>
using namespace std;

int n;
bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}

int main() {
    // Please write your code here.
    //규칙을 찾아보자. 짝수, 홀수 뭐든지.
    //항상 홀수를 가정하자. 3이면 11, 5면 22. 7이면 33. 주어진 N을 2로 나눈 몫이다. 9는? 44.
    //위치 바꾸는건? 2번 바꿀때마다 1씩 칸이 늘어난다. 1칸씩 2번가고. 2칸씩 2번가고. 3칸씩 2번가고.
    cin >> n;
    int arr[n][n] = {};
    int dir_num = 0;
    int dx[4] = {0, -1, 0, 1}; //동 북 서 남
    int dy[4] = {1, 0, -1, 0}; //동 북 서 남

    int x = n / 2;
    int y = n / 2;
    
    int go_count = 1; //일단 가는 칸 수. 이걸 2번해야 1씩 늘어난다.
    int empty_count = 0; //이게 2가 되면 go_count를 1씩 늘리고 0으로 초기화.
    int now = go_count;
    for(int i = 0; i < n*n; i++) {
        arr[x][y] = i+1;
        x = x + dx[dir_num];
        y = y + dy[dir_num];
        now--;

        if(now == 0) {
            dir_num = (dir_num + 1) % 4;
            empty_count++;
            if(empty_count >= 2) {
                go_count++;
                empty_count = 0;
            }
            now = go_count;
        }
        
        //동쪽으로 한칸. 방향 바꾸고. 북쪽으로 한칸. 방향 바꾸고. 서쪽으로 2칸. 방향 바꾸고. 남쪽으로 2칸.
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}