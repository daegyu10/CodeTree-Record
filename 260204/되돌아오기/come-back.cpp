#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x = 0, y = 0;
    int dir_num;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int count = 0;

    int n;
    cin >> n;

    bool reached = false;
    for(int i = 0; i < n; i++) {
        char dir;
        int time;
        cin >> dir >> time;
        if(dir == 'E') {
            dir_num = 0;
        } else if(dir == 'S'){
            dir_num = 1;
        } else if(dir == 'W') {
            dir_num = 2;
        } else {
            dir_num = 3;
        }

        while(time--) {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            count++;

            if(x == 0 && y == 0) {
                reached = true;
                cout << count;
                return 0;
            }
        }
    }

    if(reached == false) {
        cout << -1;
    }
    return 0;
}