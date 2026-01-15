#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int now_m1, now_d1;
    int t_m1, t_d1;

    cin >> now_m1 >> now_d1;
    cin >> t_m1 >> t_d1;

    bool front;
    if(t_m1 <= now_m1 && t_d1 <= now_d1) {
        front = false; //목표 날짜가 현재 날짜보다 적을 때, 즉 과거. back.
    } else {
        front = true; //목표 날짜가 현재 날짜보다 클때. 즉 미래. front.
    }

    int day_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; //월별 날짜. 1~12. 0은 일부러 비워둠.
    int diff = 0; //차이 날짜. 나중에 7로 나누어서 요일 볼거다. front == true 라면 diff 나머지에 다라서 다르게. false일때도 다르게.

    if(front) {
       while(true) {
        if(now_m1 == t_m1 && now_d1 == t_d1) {
            break;
        }

        now_d1++;
        diff++;

        if(now_d1 >= day_month[now_m1]) {
            now_d1 = 1;
            now_m1++;
            diff++;
        }
       } 
    } else {
        while(true) {
            if(t_m1 == now_m1 && t_d1 == now_d1) {
                break;
            }

            now_d1--;
            diff++;

            if(now_d1 == 1) {
                now_m1--;
                now_d1 = day_month[now_m1];
                diff++;
            }
        }
    }

    //이제 bool front true/false유무에 따라서 diff를 7로 나누고 나머지 따라서 요일 출력.
    if(front) {
        int print = diff % 7;
        if(print == 0) {
            cout << "Mon";
        } else if(print == 1) {
            cout << "Tue";
        } else if(print == 2) {
            cout << "Wed";
        } else if(print == 3) {
            cout << "Thu";
        } else if(print == 4) {
            cout << "Fri";
        } else if(print == 5) {
            cout << "Sat";
        } else if(print == 6) {
            cout << "Sun";
        }
    } else {
        int print = diff % 7;
        if(print == 0) {
            cout << "Mon";
        } else if(print == 1) {
            cout << "Sun";
        } else if(print == 2) {
            cout << "Sat";
        } else if(print == 3) {
            cout << "Fri";
        } else if(print == 4) {
            cout << "Thu";
        } else if(print == 5) {
            cout << "Wed";
        } else if(print == 6) {
            cout << "Tue";
        }
    }
    
    //그냥 날짜 차이 구하고 7로 나눠서 나머지대로 요일 출력하면 되는거 아닌가?
    //절대값은 안됨. 마이너스 차이랑 플러스 차이 구해야함.
    //그리고 날짜 따른 월별 날짜 알아야함. 달마다 날짜가 다르니 그걸 체크해야함.
    return 0;
}