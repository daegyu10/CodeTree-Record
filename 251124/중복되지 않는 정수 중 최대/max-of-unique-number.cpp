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
    int count[1000] = {};
    int max = nums[0];

    for(int i = 0; i < N; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
        count[nums[i]]++;
    }

    for(int i = max; i >= 1; i--) {
        if(count[i] == 1) {
            cout << i;
            break;
        } else if(i == 1) {
            cout << -1;
        }
    }
    return 0;
}
