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
        int count = 0; //스스로를 골랐으니 count는 1.
        for(int j = 0; j < n; j++) { //수를 다 골라본다. 1,2,3,4,5. 이 상태에서 3을 기준으로 4,5 하는거랑 5를 기준으로 보는거랑 다를 수 있음.
            if((i != j) &&(abs(arr[i]-arr[j]) <= k)) { //스스로가 아니고 k 이하면 플러스.
                count++;
            }
        }

        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}