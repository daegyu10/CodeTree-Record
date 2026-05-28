#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int start, end, x, y;
    cin >> start >> end >> x >> y;

    int min_dist = 0;
    //3가지 방법이 있다. 
    //1. start > end로 바로 | 2. start > x > y > end | 3. start > y > x > end.
    int dist1 = 0;
    int dist2 = 0;
    int dist3 = 0;
    dist1 = abs(start-end);
    dist2 = (abs(start-x))+(abs(y-end));
    dist3 = (abs(start-y))+(abs(x-end));
    min_dist = min(dist1, dist2);
    min_dist = min(min_dist, dist3);
    cout << min_dist;
    return 0;
}