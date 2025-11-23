#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    int max = -1;
    int count[1000] = {};
    
    for(int i = 0; i < N; i++) {
        if(nums[i] >= max) {
            max = nums[i];
            count[max]++;
        }
    }

    if(count[max] == 1) {
        cout << max;
    } else {
        for(int i = max; max >= 1; i--) {
            if(count[max] == 1) {
                cout << max;
                break;
            }
            if(i == 1) {
                cout << -1;
                break;
            }
        }
        
    }
    return 0;
}
