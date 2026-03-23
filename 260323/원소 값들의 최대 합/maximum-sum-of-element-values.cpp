#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[n+1] = {};
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    //먼저 시작점 정하는거 for문 하나. 그리고 반복 m번. 그래서 max값 구해보자.
    int count_max = 0;
    for(int i = 1; i <= n; i++) {
        int index = i; //시작점. 반복되면서 달라진다.
        int count = 0;
        for(int j = 0; j < m; j++) {
            count += arr[index];
            index = arr[index];
        }

        count_max = max(count_max, count);
    }

    cout << count_max;
    return 0;
}