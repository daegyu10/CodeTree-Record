#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int need_day = 1;

    int month_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(true) {
        if(m1 == m2 && d1 == d2) {
            break;
        }

        need_day++;
        d1++;

        if(d1 > month_day[m1]) {
            m1++;
            d1 = 1;
        }
    }

    cout << need_day;
    return 0;
}