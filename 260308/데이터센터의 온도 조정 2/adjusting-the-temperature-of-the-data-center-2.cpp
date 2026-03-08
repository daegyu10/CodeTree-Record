#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, c, g, h;
    cin >> n >> c >> g >> h;

    int low[n] = {};
    int high[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> low[i] >> high[i];
    }

    int max_work = 0;
    for(int f = 0; f <= 1000; f++) {
        int work = 0;
        for(int i = 0; i < n; i++) {
            if(f < low[i]) {
                work += c;
            } else if(f >= low[i] && f <= high[i]) {
                work += g;
            } else if(f > high[i]) {
                work += h;
            }
        }

        max_work = max(work, max_work);
    }

    cout << max_work;
    return 0;
}