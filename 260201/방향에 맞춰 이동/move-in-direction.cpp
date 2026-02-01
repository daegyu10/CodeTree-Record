#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int dir_num;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int x = 0, y = 0;

    for(int i = 0; i < n; i++) {
        char c;
        int d;
        cin >> c >> d;

        if(c == 'E') {
            dir_num = 0;
        } else if(c == 'W') {
            dir_num = 1;
        } else if(c == 'S') {
            dir_num = 2;
        } else {
            dir_num = 3;
        }

        for(int j = 0; j < d; j++) {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
    }

    cout << x << " " << y;
    return 0;
}