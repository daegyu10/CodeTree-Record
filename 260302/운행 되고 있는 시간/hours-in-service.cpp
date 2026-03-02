#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int start[n] = {};
    int end[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }

    int max_time = 0;
    for(int i = 0; i < n; i++) {
        int count[1000] = {};
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            
            for(int k = start[j]; k < end[j]; k++) {
                count[k]++;
            }

        }
        int time_count = 0;
        for(int l = 0; l < 1000; l++) {
            if(count[l] >= 1) {
                time_count++;
            }
        }
        max_time = max(max_time, time_count);
    }

    cout << max_time;
    return 0;
}