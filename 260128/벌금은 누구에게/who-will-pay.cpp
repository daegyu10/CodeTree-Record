#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int stu_n;
    int pun_m;
    int limit_k;
    cin >> stu_n >> pun_m >> limit_k;
    int stu[stu_n+1] = {};

    for(int i = 0; i < pun_m; i++) {
        int num;
        cin >> num;
        stu[num]++;

        if(stu[num] == limit_k) {
            cout << num;
            return 0;
        }
    }

    cout << '-1';
    return 0;
}