#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int arr[6] = {};
    int t_sum = 0;
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
        t_sum += arr[i];
    }

    int answer = 1000000;
    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 5; j++) {
            for(int k = j+1; k < 6; k++) {
                int sum1 = arr[i] + arr[j] + arr[k];
                int sum2 = t_sum - sum1;
                answer = min(answer, abs(sum2 - sum1));
            }
        }
    }
    cout << answer;
    return 0;
}