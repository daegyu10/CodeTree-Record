#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    int max_h = 0;
    int min_h = 100;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //어떤 언덕을 깎을지 먼저 생각하지 말고. 어느 '높이'에 언덕을 맞출지 생각해보는건 어떨까.
    //아예 정답 범위를 정해놓는 것. 0 ~ 17. 1 ~ 18. 이렇게. 이러면 범위 안에 있으면 그대로. 범위 밖이면 깎고. 이렇게.

    int min_n = 0;
    int max_n = 17;
    int min_cost = INT_MAX;
    for(int i = 0; i < 85; i++) { //반복 횟수. 
        int cost = 0;
        for(int j = 0; j < n; j++) { //배열 다 돌면서 최대 최소 안이면 pass. 밖이면 깎고 비용 추가.
            if(arr[j] < min_n) {
                int diff1 = abs(arr[j] - min_n);
                cost += (diff1 * diff1);
            } else if(arr[j] > max_n) {
                int diff2 = abs(arr[j] - max_n);
                cost += (diff2 * diff2);
            }
        }
        min_cost = min(min_cost, cost);
        min_n++;
        max_n++;
        if(max_n > 100) {
            break;
        }
    }

    cout << min_cost;
    return 0; 
}