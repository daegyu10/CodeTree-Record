#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int can_num;
    int position;
    int arr[100] = {};
    for(int i = 0; i < n; i++) {
        cin >> can_num;
        cin >> position;
        arr[position-1] += can_num;
    }

    int max_num = INT_MIN;
    if(2*k >= 100) { //중앙점이 충분히 클 경우.
        for(int i = 0; i < 100; i++) {
            max_num += arr[i];
        }
    } else {
        for(int i = 0; i < 100-2*k; i++) { //i로 잡는 범위는 100-2*k여야 함. k로 중간점을 잡으면 범위 크기는 항상 홀수임.
            //k가 3이다. 그럼 1 ~ 7이 가능하다. 즉 1,2,3,4,5,6,7. 7개다. 따라서 i는 <=가 아니라 <를 써야한다. 그래야 93 94 95 96 97 98 99. 이렇게 된다.
            int count = 0;
            for(int j = i; j <= i+(2*k); j++) {
                count += arr[j];
            }
            max_num = max(max_num, count);
        }
    }
    

    cout << max_num;
    return 0;
}