#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    string input;
    cin >> input;
    for(int i = 0; i < n; i++) {
        arr[i] = int(input[i]) - '0';
    }
    
    int max_distance = 0;
    for(int i = 0; i < n-1; i++) {
        bool empty1 = false;
        if(arr[i] == 0 && empty1 == false) {
            arr[i] = 1;
            empty1 = true;
        } else if(arr[i] == 1) {
            continue;
        }
        
        for(int j = i+1; j < n; j++) {
            int min_dist = 0;
            int min_now = 100;

            bool empty2 = false;
            if(arr[j] == 0 && empty2 == false) {
                arr[j] = 1;
                empty2 = true;
            } else if(arr[j] == 1) {
                continue;
            }
            
            int encounter = 0;
            for(int k = 0; k < n; k++) {
                if(arr[k] == 0 && encounter >= 1) {
                    min_dist++;
                } else if(arr[k] == 1) {
                    if(encounter == 0) {
                        encounter++;
                    } else {
                        min_dist++;
                        min_now = min(min_now, min_dist);
                        min_dist = 0;
                    }
                }
            }

            if(empty2 == true) {
                arr[j] = 0;
            }

            max_distance = max(max_distance, min_now);
        }
        
        if(empty1 == true) {
            arr[i] = 0;
        }
    }
    cout << max_distance;
    return 0;
}