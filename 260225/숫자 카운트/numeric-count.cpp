#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    int count1[n] = {};
    int count2[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cin >> count1[i];
        cin >> count2[i];
    }

    int answer = 0;
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            for(int k = 1; k <= 9; k++) {
                if(i == j || i == k || j == k) {
                    continue;
                }

                int answer_count = 0;
                for(int l = 0; l < n; l++) {
                    int count_1 = 0;
                    int count_2 = 0;

                    if(arr[l] / 100 == i) {
                        count_1++;
                    } else if(arr[l] / 100 == j || arr[l] / 100 == k) {
                        count_2++;
                    }

                    if((arr[l] / 10)%10 == j) {
                        count_1++;
                    } else if((arr[l] / 10)%10 == i || (arr[l] / 10)%10 == k) {
                        count_2++;
                    }

                    if(arr[l] % 10 == k) {
                        count_1++;
                    } else if(arr[l] % 10 == i || arr[l] % 10 == j) {
                        count_2++;
                    }

                    if(count_1 == count1[l] && count_2 == count2[l]) {
                        answer_count++;
                    }
                }

                if(answer_count == n) {
                    answer++;
                }
            }
        }
    }

    cout << answer;
    return 0;
}