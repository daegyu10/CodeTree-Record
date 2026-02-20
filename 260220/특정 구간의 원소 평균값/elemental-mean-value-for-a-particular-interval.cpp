#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    //개념 정리. 3중 포문. i는 0 시작 n 끝. j는 i 시작 n 끝. i는 시작점, j는 도착점을 의미. k는 i 이상 j 미만. 즉 구간.
    int n;
    cin >> n;
    int arr[n] = {};
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            bool exist = false;
            float avg = 0;
            int count = 0;
            for(int k = i; k <= j; k++) {
                //먼저 평균을 구해야한다. j에서 i를 빼면? 개수다. 그걸로 일단 먼저 순회하고 평균 구하고 평균 있나 보자. 4중 for문 될듯.
                avg += arr[k];
                count++;
            }
            avg = avg / count;

            for(int k = i; k <= j; k++) {
                if(arr[k] == avg) {
                    exist = true;
                }
            }

            if(exist == true) {
                total_count++;
            }
        }
    }

    cout << total_count;
    return 0;
}