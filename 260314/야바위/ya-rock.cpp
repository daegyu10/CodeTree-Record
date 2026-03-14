#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[4] = {};

    int max_score = 0;
    for(int i = 1; i <= 3; i++) {
        arr[i] = 1;
        int score = 0;
        for(int j = 0; j < n; j++) {
            int a, b, c;
            cin >> a >> b >> c;

            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;

            if(arr[c] == 1) {
                score++;
            }
        }

        max_score = max(max_score, score);
        arr[i] = 0;
    }

    cout << max_score;
    return 0;
}