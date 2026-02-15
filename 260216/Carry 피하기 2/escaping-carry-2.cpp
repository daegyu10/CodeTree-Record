#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    //설계 : 각 자리를 어떻게 할것인가? 10으로 나눈 몫을 각각 더하고, 그게 10 넘으면 break. 아니면 끝까지 간다.
    int n;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_count = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) { //일단 3개의 수를 고른다. 
                int sum = 0;
                for(int r = 1; r <= 10000; r *= 10) {
                    sum = (arr[i]/r)%10 + (arr[j]/r)%10 + (arr[k]/r)%10;
                    if(sum >= 10) {
                        break;
                    } else if(r == 10000 && sum < 10) {
                        int max_num = arr[i] + arr[j] + arr[k];
                        if(max_count < max_num) {
                            max_count = max_num;
                        }
                    } 
                }
            }
                
        }
    }

    cout << max_count;
    return 0;
}