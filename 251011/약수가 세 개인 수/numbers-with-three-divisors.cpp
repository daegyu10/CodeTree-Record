#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    // Please write your code here.
    //int sum = 0;
    int num = 0;

    for(int i = st; i <= ed; i++) {
        int sum = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                sum++;
            }
        }
        if(sum == 3) {
            num++;
        }
    }
    cout << num;
    return 0;
}
