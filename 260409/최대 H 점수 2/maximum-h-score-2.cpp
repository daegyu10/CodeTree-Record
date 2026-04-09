#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, l;
    cin >> n >> l;

    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arr2[n] = {};
    
    int max_count = 0;
    int result;
    //배열을 하나 복사하자. 하나하나 복구시키기엔 l값이 통제가 어렵다.
    for(int i = 1; i <= 100; i++) { //H값 완전탐색.
        copy(arr, arr+n, arr2);
        bool index[n] = {};
        if(l > 0) { //만약 l이 0보다 크다면. 더해야한다. 1을 어디에, 얼마나?
        //h값과 가장 가까운 곳에. 근데 l은 여러개다. 그럼? 그냥 반복 시키자.
            for(int j = 0; j < l; j++) {
                int min_index = 0;
                bool work = false;

                for(int k = 0; k < n; k++) {
                    if(arr2[k] == i-1 && index[k] == 0) { //3이 기준이라고 하자. 그럼 1 100 2 3이면 3에 더해버린다. 당사자면 안된다.
                        min_index = k;
                        work = true;
                    }
                }

                if(work == true) {
                    arr2[min_index] += 1;
                    index[min_index] = 1;
                }
            }
        }

        

        int target_count = 0;
        bool exist = false;
        for(int j = 0; j < n; j++) {
            if(arr2[j] >= i) {
                target_count++;
            }
        }

        if(target_count >= i) {
            exist = true;
        }

        if(exist == true) {
            result = i;
        }
    } 

    cout << result;
    //l로 더해주는 수는 어떻게?
    //--> h로 먼저 가정한다. 그럼 abs로 가장 가까운거에 더한다.
    //----> 인덱스는? 따로 배열 만드는가? 고민중.
    //먼저, 완전 탐색할거는 정답. H다.
    return 0;
}