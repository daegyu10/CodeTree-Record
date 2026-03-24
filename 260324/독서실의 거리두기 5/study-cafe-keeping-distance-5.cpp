#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    int visited[n] = {};
    string input;
    cin >> input;
    for(int i = 0; i < n; i++) {
        arr[i] = int(input[i] - '0'); //입력에서 간과했다. 13 입력받고, 나머지는 1000100100010. 이렇게 긴 1줄로 온다. 처리함.
    }

    int max_dist = 0;
    for(int i = 0; i < n; i++) {
        bool possible = false;
        if(arr[i] == 0) {
            arr[i] = 1;
            possible = true;
        }

        if(possible) {
            int encounter = 0;
            int dist_v = 1000;
            int dist = 0;
            for(int j = 0; j < n; j++) {
                if(arr[j] == 1) {
                    encounter++;
                    dist++;
                    if(encounter >= 2) {
                        dist_v = min(dist_v, dist);
                    }
                    
                    dist = 0;
                } else {
                    dist++;
                }
            }

            max_dist = max(max_dist, dist_v);
        }

        if(possible) {
            arr[i] = 0;
        }
        
    }

    cout << max_dist;
    return 0;
}