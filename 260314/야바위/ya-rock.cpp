#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    int a[100] = {};
    int b[100] = {};
    int c[100] = {};

    int max_score = 0;

    for(int j = 0; j < n; j++) {
        cin >> a[j] >> b[j] >> c[j];
    }

    for(int i = 1; i <= 3; i++) {
        int arr[4] = {}; //할때마다 배열 새로 만듬. 초기화를 위함.
        arr[i] = 1;
        int score = 0;
        for(int j = 0; j < n; j++) {

            int temp = arr[a[j]];
            arr[a[j]] = arr[b[j]];
            arr[b[j]] = temp;

            if(arr[c[j]] == 1) {
                score++;
            }
        }

        max_score = max(max_score, score);
    }

    cout << max_score;
    return 0;
}