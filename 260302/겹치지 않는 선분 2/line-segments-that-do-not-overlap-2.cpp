#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int start[n] = {};
    int end[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }

    //겹치는 조건이 무엇일까. start i번째와 end i번째 사이에 start, end j가 들어가면 겹친다.
    //그걸 알아보자.
    int count = 0;
    int check[n] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) { //검사 과정은 쌍방으로 간다. 그러니까 4개 있는데 겹치는게 있으면 선분은 2개 겹친다. 그림으로 보면 단순.
        //겹치는 조건은 2개다. a가 b보다 왼쪽에서 출발했는데, 오른쪽에 도착하는 것. 혹은 a가 b보다 오른쪽에서 출발했는데 왼쪽에 도착하는것.
        //1번째는 1,5 / 2,3 (이러면 겹친다) 2번째는 3,2 / 5,1. 이러면 겹친다.
        //겹치는 조건 설계를 잘못했음.
            if((start[i] < start[j] && end[i] > end[j]) || (start[i] > start[j] && end[i] < end[j])) {
                check[i] = 1;
                check[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(check[i] != 1) {
            count++;
        }
    }

    cout << count;
    return 0;
}