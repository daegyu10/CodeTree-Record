#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int index;
    char arr[10000] = {};

    for(int i = 0; i < n; i++) {
        cin >> index;
        cin >> arr[index-1];
    } //위치 저장할 인덱스 입력받고 거기에 저장. 위치는 1-based 기반이다.

    int max_num = 0;
    for(int i = 0; i <= 10000-k; i++) {
        int sum = 0;
        for(int j = i; j <= i+k; j++) {
            if(arr[j] == 'G') {
                sum += 1;
            } else if(arr[j] == 'H') {
                sum += 2;
            }
        }
        max_num = max(sum, max_num);
    }

    cout << max_num;
    return 0;
}