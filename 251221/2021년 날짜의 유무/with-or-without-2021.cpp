#include <iostream>

using namespace std;

int M, D;

bool Findday(int n, int m) {
    bool month_exist = false;
    bool day_exist = false;

    if(1 <= n && n <= 12) {
        month_exist = true;
    }

    if(n == 2) {
        if(1 <= m && m <= 28) {
            day_exist = true;
        }
    } else if(n == 4 || n == 6 || n == 9 || n == 11) {
        if(1 <= m && m <= 30) {
            day_exist = true;
        }
    } else {
        if(1 <= m && m <= 31) {
            day_exist = true;
        }
    }

    return month_exist && day_exist;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if(Findday(M,D)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}