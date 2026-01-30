#include <iostream>
using namespace std;
#include <algorithm>

struct Event { //사건 자체를 기록함. 악수는 K번. 즉 악수는 최대 250번. 개발자는 최대 100명. 
    int time;
    int x;
    int y;
};

bool cmp(Event a, Event b) {
    return a.time < b.time;
}

Event events[251];
bool infected[101] = {};
int shake_remain[101] = {};

int main() {
    // Please write your code here.
    int n, k, p, t; //n : 개발자 수. k는 감염 가능 악수 수. p는 첫 환자 번호. t는 총 악수 횟수(시간)

    cin >> n >> k >> p >> t;
    for(int i = 1; i <= t; i++) {
        cin >> events[i].time >> events[i].x >> events[i].y;
    }

    sort(events+1, events+t+1, cmp);

    infected[p] = true;
    shake_remain[p] = k;

    for(int i = 1; i <= t; i++) {
        int dev_x = events[i].x;
        int dev_y = events[i].y;
        
        bool xCan = (infected[dev_x] && shake_remain[dev_x] > 0);
        bool yCan = (infected[dev_y] && shake_remain[dev_y] > 0);

        if(xCan) {
            shake_remain[dev_x]--;
            if(!infected[dev_y]) {
                infected[dev_y] = true;
                shake_remain[dev_y] = k;
            }
        }

        if(yCan) {
            shake_remain[dev_y]--;
            if(!infected[dev_x]) {
                infected[dev_x] = true;
                shake_remain[dev_x] = k;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << infected[i];
    }

    return 0;
}