#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    cin >> a;

    int count = 0;
    int speed = 1;
    int cur_speed = 0;
    int dist_up = 0;
    int dist_ind = 0;

    while(true) {
        a -= speed;
        count++;

        if(a == 0) {
            break;
        } else {
            cur_speed = speed;
            if(cur_speed == 1) {
                dist_ind = 1;
            } else {
                dist_up = ((cur_speed+1)*(cur_speed+2))/2;
                dist_ind = ((cur_speed)*(cur_speed+1))/2;
            }

            if(dist_up < a) {
                speed++;
            } else if(dist_ind <= a) {
                speed = speed;
            } else if(dist_ind > a) {
                speed--;
            }
        }
    }
    cout << count;
    return 0;
}