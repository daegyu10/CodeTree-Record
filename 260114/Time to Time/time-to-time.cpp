#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int h1, m1;
    int h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int need_t = 0;

    while(true) {
        if(h1 == h2 && m1 == m2) {
            break;
        }

        m1++;
        need_t++;

        if(m1 >= 60) {
            h1++;
            m1 = 0;
        }
    }

    cout << need_t;
    return 0;
}