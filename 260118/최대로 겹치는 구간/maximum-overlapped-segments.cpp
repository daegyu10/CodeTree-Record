#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[200] = {};
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a+100; j < b+100; j++) { //음수 고려하여 입력값에 100씩을 추가함. offset.
            arr[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 200; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max;
    //나오는 선분 구간중에 음수가 포함됨. 따라서 음수가 나오면 직접 음수에 더할 offset을 각각 구하는 방법과
    //처음부터 배열을 200 크기로 만들고 모든 선분 위치에 100을 더하는 경우가 있음.
    //구현 편리성을 위해 배열 200크기 구현으로 진행함.
    return 0;
}