#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int arr[n] = {};
    int max_n = 0;
    int min_n = 20000;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(max_n < arr[i]) {
            max_n = arr[i];
        }
        if(min_n > arr[i]) {
            min_n = arr[i];
        }
    }

    int cost = 0;
    int min_cost = 10000000;
    int result = 0;

    int min_now = min_n;
    int max_now = min_n+2;
    if(abs(max_n - min_n) <= 2) {
        result = 0;
    } else {
        while(max_now != max_n) {
            for(int i = 0; i < n; i++) {
                if(arr[i] < min_now) {
                    cost += abs(arr[i] - min_now);
                } else if(arr[i] > max_now) {
                    cost += abs(arr[i] - max_now);
                }
            }

            min_cost = min(min_cost, cost);
            min_now++;
            max_now++;
        }

        result = min_cost;
    }

    //탐색은 비용인가?
    //최대 최소를 탐색해보자. 그 뒤에 비용을 재보자.

    cout << result;
    return 0;
}