#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int a_time[50001] = {};
    char a_dir[50001] = {};
    int b_time[50001] = {};
    char b_dir[50001] = {}; //a,b 로봇의 움직인 시간과 거리 기록용 배열. n,m은 최대 5만을 넘지 않으니 그렇게 설정함.

    int total_time_a = 0;
    int total_time_b = 0; //두 로봇이 움직이는 총 시간은 다르다. 더 큰걸 총 시간으로 쓰고 나머지는 움직임 멈추기 위함.
    for(int i = 0; i < n; i++) {
        cin >> a_time[i] >> a_dir[i];
        total_time_a += a_time[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b_time[i] >> b_dir[i];
        total_time_b += b_time[i];
    }

    int total_time;
    if(total_time_a > total_time_b) {
        total_time = total_time_a;
    } else {
        total_time = total_time_b;
    } //a로봇과 b로봇이 움직이는 시간과 방향을 배열에 저장. 그리고 총 시간 설정.

    int a_pos[1000001] = {};
    int b_pos[1000001] = {}; //전 위치에서 다른 곳에 있는걸 확인해야 하면 저번 위치를 기억해야함. 배열로 설정함. 이때, 위치는 시간에 비례함. 따라서 백만으로 설정.
    int a_index = 0;
    int b_index = 0;
    int a_now = 0;
    int b_now = 0;
    int count = 0; //정답에 쓸 카운트.
    //a_time, a_dir, a_pos. b도 동일.
    for(int i = 0; i < total_time; i++) {
        //a 움직이고 b 움직이고 만약 a 위치랑 b위치가 서로 다른 상황에서 서로 같다? 카운트++; 
        if(i >= total_time_a) {
            a_pos[i] = a_now;
        } else {
            if(a_dir[a_index] == 'L' && a_time[a_index] != 0) {
                a_now--;
                a_pos[i] = a_now;
                a_time[a_index]--;
                if(a_time[a_index] == 0) {
                    a_index++;
                }
            } else if(a_dir[a_index] == 'R' && a_time[a_index] != 0 && i < total_time_a) {
                a_now++;
                a_pos[i] = a_now;
                a_time[a_index]--;
                if(a_time[a_index] == 0) {
                    a_index++;
                }
            }
        }
        
        if(i >= total_time_b) {
            b_pos[i] = b_now;
        } else {
            if(b_dir[b_index] == 'L' && b_time[b_index] != 0 && i < total_time_b) {
                b_now--;
                b_pos[i] = b_now;
                b_time[b_index]--;
                if(b_time[b_index] == 0) {
                    b_index++;
                }
            } else if(b_dir[b_index] == 'R' && b_time[b_index] != 0 && i < total_time_b) {
                b_now++;
                b_pos[i] = b_now;
                b_time[b_index]--;
                if(b_time[b_index] == 0) {
                    b_index++;
                }
            }
        }
        //a, b 다 움직이고 그걸 위치 배열에 기록함. 0번째(맨 첫번째 움직임에는 움직인 위치를 반영함.)
        //그리고 토탈 타임 a,b를 반영해서 a가 먼저 끝나면 거기서 끝남.
    }

    int a_count_t = 1;
    int b_count_t = 1;
    for(int i = 0; i < total_time; i++) {
        if(a_pos[a_count_t-1] != b_pos[b_count_t-1] && a_pos[a_count_t] == b_pos[b_count_t]) {
            count++;
        }

        if(a_count_t < total_time_a) {
            a_count_t++;
        }
        if(b_count_t < total_time_b) {
            b_count_t++;
        }
    }

    cout << count;

    return 0;
}