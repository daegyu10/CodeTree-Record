#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //배열은 따로 기록용 하나를 만들거다. 이건 아래에서 또 하자.
    //for문 반복문이 몇개 필요한가? 
    //우선 생각해보자. 2배 곱하는거. 그리고 숫자 하나 지우는거. 이거는 각각 for문으로 간다.
    //2배 곱하고, 숫자를 제거하는건 개별적인 for문으로 반복해야한다.
    //2배 곱하고, 숫자 제거한 다음. 그 다음에 인접숫자간 차를 최소로 하자.
    //1번 2배 곱하고, 숫자 제거는? 1번, 2번, 3번... 5번까지. 각자 해야한다. 그 다음에 또.
    //따라서, for문은 3개다. 2배에 for문 1개. 그리고 그 안의 for문 안에 또 다른 for문 하나.
    //더 정확히는 1번째 for문은 2배용. 2번째 for문은 숫자 제거용. 이때, 2번째-3번째 for문은 연동된다. 2번째 for문으로 지울 숫자를 선정하고.
    //2번째를 기반으로 숫자 하나를 제거할 3번째 for문 하나. 그리고 그걸로 숫자 차를 구하는 for문 또 하나. 4번째. 이때 3,4번째 for문은 2번째 for문 안에 들어간다.
    int total_count = 100000;
    for(int i = 0; i < n; i++) {
        arr[i] *= 2;
        for(int j = 0; j < n; j++) {
            int remain_arr[n-1] = {};
            int count = 0; //숫자 하나 제거용 카운트. 인덱스 용.

            for(int k = 0; k < n; k++) {
                if(j != k) {
                    remain_arr[count++] = arr[k];
                }
            }

            int diff = 0;
            for(int k = 0; k < n-2; k++) {
                diff += abs(remain_arr[k+1] - remain_arr[k]);
            }

            total_count = min(total_count, diff);
        }
        arr[i] /= 2;
    }

    cout << total_count;
    return 0;
}