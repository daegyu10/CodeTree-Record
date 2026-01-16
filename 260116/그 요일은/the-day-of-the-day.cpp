#include <iostream>
using namespace std;

int num_Days(int m, int d) {
    int m_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int total_days = 0;

    for(int i = 1; i < m; i++) {
        total_days += m_days[i];
    }

    total_days += d;
    return total_days;
}

int main() {
    // Please write your code here.
    int now_m, now_d;
    int tar_m, tar_d;
    string day;
    cin >> now_m >> now_d >> tar_m >> tar_d >> day;
    
    int diff = num_Days(tar_m, tar_d) - num_Days(now_m, now_d);
    //cout << diff << endl;
    int count = diff / 7;
    int last_num = diff % 7;

    string day_arr[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    for(int i = 0; i <= last_num; i++) {
        if(day == day_arr[i]) {
            count++;
        }
    }

    cout << count;
    return 0;
}