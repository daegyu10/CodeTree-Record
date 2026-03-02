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
    for(int i = 0; i < n; i++) {
        bool cross = false;
        for(int j = 0; j < n; j++) { //검사 과정은 쌍방으로 간다. 그러니까 4개 있는데 겹치는게 있으면 선분은 2개 겹친다. 그림으로 보면 단순.
        //1,2,3,4선분 있는데 2,3번이 겹치면 겹치는건 2번, 3번. 2개다. 따라서 역검사가 필요함.
            if(start[i] < start[j] && end[i] > start[j] && start[i] < end[j] && end[i] > end[j]) {
                cross = true;
            } else if(start[j] < start[i] && end[j] > start[i] && start[j] < end[i] && end[j] > end[i]) {
                cross = true;
            }
        }
        if(cross == false) {
            count++;
        }
    }

    cout << count;
    return 0;
}