#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[n][2] = {};
    //n개만큼 배열 만들고, n 0 에는 x좌표, n 1 에는 y좌표 저장한다.
    //이제 아래에서 써먹어야 함.
    for(int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int ans = INT_MAX;
    //총 개수는 n개. 그리고 1개씩 빼봐야 함.
    for(int i = 0; i < n; i++) {
        //직사각형 구하려면 x 최소, 최대값. y 최소, 최대 값을 구해야 함.
        int x_min = INT_MAX;
        int x_max = INT_MIN;

        int y_min = INT_MAX;
        int y_max = INT_MIN;
        for(int j = 0; j < n; j++) { //1개씩 점을 각각 제외하고 x 죄표, y좌표의 최소/최대값 구함.
            if(i == j) {
                continue;
            }
            
            x_min = min(x_min, arr[j][0]);
            x_max = max(x_max, arr[j][0]);

            y_min = min(y_min, arr[j][1]);
            y_max = max(y_max, arr[j][1]);
        }

        int num = (x_max - x_min) * (y_max - y_min);
        ans = min(ans, num);
    }

    cout << ans;
    return 0;
}