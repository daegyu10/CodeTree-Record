#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int x[n] = {};
    int y[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                //일단 세 점을 고른다. 그리고 두 점씩 비교하면서 x축 평행(y변화 없음), y축 평행(x변화 없음)을 bool 변수로 파악
                bool x_pal = false;
                bool y_pal = false;

                if(x[i] == x[j] || x[i] == x[k] || x[j] == x[k]) {
                    y_pal = true;
                }
                if(y[i] == y[j] || y[i] == y[k] || y[j] == y[k]) {
                    x_pal = true;
                }

                if(x_pal && y_pal) {
                    int x_min = min({x[i], x[j], x[k]});
                    int x_max = max({x[i], x[j], x[k]});

                    int y_min = min({y[i], y[j], y[k]});
                    int y_max = max({y[i], y[j], y[k]});
                    ans = max(ans, ((x_max - x_min) * (y_max - y_min)));
                }
            }
        }
    }

    cout << ans;
    return 0;
}