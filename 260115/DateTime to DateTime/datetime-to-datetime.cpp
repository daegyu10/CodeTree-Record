#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int d1 = 11;
    int h1 = 11;
    int m1 = 11;

    int t_d1, t_h1, t_m1;

    cin >> t_d1 >> t_h1 >> t_m1;
    int n_minute = 0;

    if(t_d1 <= 11 && (t_h1 < 11 || t_m1 < 11)) {
        return -1;
    }

    while(true) {
        if(d1 == t_d1 && h1 == t_h1 && m1 == t_m1) {
            break;
        }

        m1++;
        n_minute++;

        if(m1 >= 60) {
            h1++;
            m1 = 0;
        }

        if(h1 >= 24) {
            d1++;
            h1 = 0;
        }
    }

    cout << n_minute;
    return 0;
}