#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //간단하게 가자. arr를 sort하고, 맨 처음부터 잡으면서 max count 세기.

    int max_count = 0;
    for(int i = 0; i < n; i++) {
        int count = 1;
        //지금 고른 값을 최소값으로 한다. 그러면? 다음 수는 고른값 변동범위 내에서 있어야한다.

        for(int j = 0; j < n; j++) { //수를 다 골라본다. 1,2,3,4,5. 이 상태에서 3을 기준으로 4,5 하는거랑 5를 기준으로 보는거랑 다를 수 있음.
            if((i!=j) && (arr[i] <= arr[j]) && (arr[j] <= arr[i]+k)) {
                count++;
            }
        }

        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}