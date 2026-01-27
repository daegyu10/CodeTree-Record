#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_pos = 0;
    int b_pos = 0;

    char a_dir[1000] = {};
    char b_dir[1000] = {};
    int a_num[1000] = {};
    int b_num[1000] = {};

    int n, m;
    int total_time = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a_dir[i] >> a_num[i];
        total_time += a_num[i]; //a와 b가 움직이는 시간은 같다고 가정함.
    }
    for(int i = 0; i < m; i++) {
        cin >> b_dir[i] >> b_num[i];
    }

    int dir_cnt_a = 0;
    int dir_cnt_b = 0;
    int time = -1;

    for(int i = 0; i < total_time; i++) {

        if(a_dir[dir_cnt_a] == 'R' && a_num[dir_cnt_a] != 0) {
            a_pos++;
            a_num[dir_cnt_a]--;
            if(a_num[dir_cnt_a] == 0) {
                dir_cnt_a++;
            }
        } else if(a_dir[dir_cnt_a] == 'L' && a_num[dir_cnt_a] != 0) {
            a_pos--;
            a_num[dir_cnt_a]--;
            if(a_num[dir_cnt_a] == 0) {
                dir_cnt_a++;
            }
        }

        if(b_dir[dir_cnt_b] == 'R' && b_num[dir_cnt_b] != 0) {
            b_pos++;
            b_num[dir_cnt_b]--;
            if(b_num[dir_cnt_b] == 0) {
                dir_cnt_b++;
            }
        } else if(b_dir[dir_cnt_b] == 'L' && b_num[dir_cnt_b] != 0) {
            b_pos--;
            b_num[dir_cnt_b]--;
            if(b_num[dir_cnt_b] == 0) {
                dir_cnt_b++;
            }
        }
        if(a_pos == b_pos) {
            time = i+1;
            break;
        }
    }

    cout << time;
    return 0; 
}