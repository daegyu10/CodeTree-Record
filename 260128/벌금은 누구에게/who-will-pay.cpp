#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int stu_n;
    int pun_m;
    int limit_k;
    cin >> stu_n >> pun_m >> limit_k;
    int stu[stu_n] = {};

    for(int i = 0; i < pun_m; i++) {
        int num;
        cin >> num;
        stu[num-1]++;
        if(stu[num-1] == limit_k) {
            cout << num;
            return 0;
        }
    }

    cout << '-1';
    return 0;
}