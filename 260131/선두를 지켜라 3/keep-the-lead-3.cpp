#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    
    int a_pos[1000001] = {};
    int b_pos[1000001] = {};
    
    int a_time = 1;
    for(int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;
        while(t--) {
            a_pos[a_time] = a_pos[a_time - 1] + v;
            a_time++;
        }
    }

    int b_time = 1;
    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;
        while(t--) {
            b_pos[b_time] = b_pos[b_time -1] + v;
            b_time++;
        }
    }

    int count = 0;
    int leader = 0;
    for(int i = 1; i < a_time; i++) {
        if(a_pos[i] > b_pos[i]) {
            if(leader != 1) {
                count++;
            }
            leader = 1;
        } else if(b_pos[i] > a_pos[i]) {
            if(leader != 2) {
                count++;
            }
            leader = 2;
        } else if(a_pos[i] == b_pos[i]) {
            if(leader != 3) {
                count++;
            }
            leader = 3;
        }
    }

    cout << count;
    return 0;
}