#include <iostream>

using namespace std;

string FindDate(int n, int m, int o) {
    bool is_luneyear = false;

    if(n % 4 == 0) {
        if(n % 100 == 0 && n % 400 != 0) {
            is_luneyear = false;
        } else {
            is_luneyear = true;
        }
    }

    int day;
    string season;

    if(m == 2 && is_luneyear == true) {
        day = 29;
    } else if(m == 2 && is_luneyear == false) {
        day = 28;
    } else if(m == 4 || m == 6 || m == 9 || m == 11) {
        day = 30;
    } else if(1 <= m && m <= 12) {
        day = 31;
    }

    if(((3 <= m) && (m <= 5)) && (o <= day)) {
        return "Spring";
    } else if(((6 <= m) && (m <= 8)) && (o <= day)) {
        return "Summer";
    } else if(((9 <= m) && (m <= 11)) && (o <= day)) {
        return "Fall";
    } else if((m == 12 || m == 1 || m == 2) && (o <= day)) {
        return "Winter";
    }
    return "-1";
}

int Y, M, D;

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    cout << FindDate(Y,M,D);
    return 0;
}