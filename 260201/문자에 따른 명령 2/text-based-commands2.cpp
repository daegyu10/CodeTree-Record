#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int dir_num = 3;

    string command;
    int x = 0;
    int y = 0;
    cin >> command;
    for(int i = 0; i < command.length(); i++) {
        if(command[i] == 'L') {
            dir_num = (dir_num - 1 + 4) % 4;
        } else if(command[i] == 'R') {
            dir_num = dir_num + 1;
        } else if(command[i] == 'F') {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
    }

    cout << x << " " << y;
    return 0;
}