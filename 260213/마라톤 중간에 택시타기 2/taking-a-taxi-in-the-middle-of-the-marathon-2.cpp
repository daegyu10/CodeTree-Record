#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int x[n] = {};
    int y[n] = {}; //위치 저장용. 여기서 좌표 저장하고 불러와서 거리 계산해야한다.
    //나중에 거리 최소값 구해야함. 그러니 min_dist 선언하고 거기에 INT_MAX 넣기. 위에 climits 넣어둠.
    //좌표 저장하고, 그 중에서 중간 체크포인트 하나만 없앤다. 그 다음에 총 거리 구하고 그걸 비교하면서 최소값 구하기.

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int dist_min = INT_MAX;
    //시작, 끝은 냅두고 중간에 하나만 체크포인트를 지워야함.
    //그러면 그 체크포인트를 스킵하는 로직을 짜야하는데 이를 어떻게 할 것인가?

    //이동거리 구하려면 다 돌아야한다. 그 중에서 j에 해당하는 체크포인트만 생략하게.
    //근데 그러면 1번째 체크포인트 생략하면 2번째를, 2번째 생략하면 1번째 포인트를 선택하게 해야한다. 그건?
    //배열을 따로 만든다. 그래서 i랑 j랑 같으면 그건 패스하고 append. 그리고 그걸 이동거리 구해서 최소거리.
    for(int j = 1; j < n-1; j++) {
        int dist = 0;
        int skip_x[n-1] = {};
        int skip_y[n-1] = {};
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(i != j) {
                skip_x[count] = x[i];
                skip_y[count] = y[i];
                count++;
            }
        }

        for(int i = 0; i < n-2; i++) {
            dist += (abs(skip_x[i] - skip_x[i+1]) + abs(skip_y[i] - skip_y[i+1]));
        }

        if(dist < dist_min) {
            dist_min = dist;
        }
    }

    cout << dist_min;
    return 0;
}
