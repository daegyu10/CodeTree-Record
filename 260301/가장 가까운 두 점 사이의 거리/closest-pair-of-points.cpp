#include <iostream>
using namespace std;
#include <climits>


int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int x[n] = {};
    int y[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int dist = ((x[i] - x[j])*(x[i] - x[j]))+((y[i]-y[j])*(y[i]-y[j]));
            ans = min(ans, dist);
        }
    }

    cout << ans;
    return 0;
}