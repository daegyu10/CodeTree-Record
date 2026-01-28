#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int a_speed[1000] = {};
    int a_time[1000] = {};
    int b_speed[1000] = {};
    int b_time[1000] = {};

    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> a_speed[i] >> a_time[i];
        count += a_time[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b_speed[i] >>b_time[i];
    }

    int a_index = 0;
    int b_index = 0;
    int a_pos = 0;
    int b_pos = 0;

    int lead_count = 0;
    int who_is_lead = 0; //현재 선두값을 나타냄. 1은 a, 2는 b. 공동선두는 아예 값을 바꾸지 않음.

    for(int i = 0; i < count; i++) {
        if(a_time[a_index] > 0) {
            a_pos += a_speed[a_index];
            a_time[a_index]--;
            if(a_time[a_index] == 0) {
                a_index++;
            }
        }

        if(b_time[b_index] > 0) {
            b_pos += b_speed[b_index];
            b_time[b_index]--;
            if(b_time[b_index] == 0) {
                b_index++;
            }
        }
        if(a_pos > b_pos && who_is_lead == 0) { //첫 선두 확인용. 선두만 기록하고 바뀐거 기록은 안함.
            who_is_lead = 1;
        } else if(b_pos > a_pos && who_is_lead == 0) {
            who_is_lead = 2;
        }

        if(a_pos > b_pos && who_is_lead != 1) {
            lead_count++;
            who_is_lead = 1;
        } else if(b_pos > a_pos && who_is_lead != 2) {
            lead_count++;
            who_is_lead = 2;
        }
    }
    cout << lead_count;
    return 0;
}