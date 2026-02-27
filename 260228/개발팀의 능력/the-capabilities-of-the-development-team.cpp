#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main() {
    // Please write your code here.

    int total_sum = 0;
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        total_sum += arr[i];
    }

    //5명 중에서 2명씩 2번. 팀을 짜야 한다. 이전 문제와 비슷함.
    //5명 중에서 2명 고르고, 또 2명 고른다. 이때, 한 명이라도 서로 겹치면 continue로 패스. 이렇게 가는 것.

    int answer = INT_MAX;
    for(int i = 0; i < 5; i++) {
        for(int j = i+1; j < 5; j++) {

            for(int k = 0; k < 5; k++) {
                for(int l = k+1; l < 5; l++) {

                    if(i == k || i == l || j == k || j == l) {
                        continue;
                    }

                    int sum1 = arr[i] + arr[j];
                    int sum2 = arr[k] + arr[l];
                    int sum3 = total_sum - (sum1 + sum2);
                    
                    int res = abs(sum1 - sum2);
                    res = max(res, abs(sum2 - sum3));
                    res = max(res, abs(sum3 - sum1));
                    //이건 각 팀끼리 빼보는거. 이 중에서 최대값을 구하는 이유는, 최대값-최소값을 빼는 경우를 구해보기 위함.
                    //예를 들어, 팀이 10, 11, 12. 이렇게 되었다고 하면 10-11은 차이 1, 11-12는 차이 1. 근데 12-10은 차이 2.
                    //차이가 최대값 -> 최대값과 최소값의 차이가 최대 -> 즉 맞게 구한거란 소리.
                    
                    
                    //answer는 차이값의 최소값. res는 '차이값' 자체를 구한거다.
                    //이제 차이값에서 최소 차이값을 구해보는 것.
                    //이때, 모든 팀의 능력치를 서로 다르게 할 수 없다면 연산을 넘긴다.
                    if(sum1 == sum2 || sum1 == sum3 || sum2 == sum3) {
                        continue;
                    } else {
                        answer = min(answer, res);
                    }

                }
            }
        }
    }

    //그리고 최종. 만약 하나 팀 능력치라도 서로 같으면 연산 안한다.
    //만약 끝까지 같는데도 서로 같다? 그럼 연산이 안되니 answer는 처음 값이다.
    if(answer == INT_MAX) {
        cout << -1;
    } else {
        cout << answer;
    }
    
    return 0;
}