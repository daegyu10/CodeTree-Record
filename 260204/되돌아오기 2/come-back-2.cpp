#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dx[4] = {-1, 0, 1, 0}; //북 동 남 서
    int dy[4] = {0, 1, 0, -1};
    int dir_num = 0;

    string command;
    cin >> command;
    int x = 0, y = 0;
    int count = 0;
    bool exist = false;

    for(int i = 0; i < command.length(); i++) {
        if(command[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
            count++;
        } else if(command[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
            count++;
        } else if(command[i] == 'F') {
            x += dx[dir_num];
            y += dy[dir_num];
            count++;
        }

        if(x == 0 && y == 0) {
            exist = true;
            cout << count;
            return 0;
        }
    }

    cout << exist;
    return 0;
}