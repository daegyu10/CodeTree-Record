#include <iostream>
using namespace std;
#include <algorithm>

class Distance {
    public:
        int x;
        int y;
        int num;
        Distance(int x, int y, int num) {
            this->x = x;
            this->y = y;
            this->num = num;
        }

        Distance() {}
};

bool cmd(Distance a, Distance b) {
    if (abs(a.x)+abs(a.y) == abs(b.x)+abs(b.y)) {
        return a.num < b.num;
    }
    return (abs(a.x)+abs(a.y)) < (abs(b.x)+abs(b.y));
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Distance distances[n];
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        distances[i] = Distance(x,y,i+1);
    }

    sort(distances,distances+n,cmd);
    for(int i = 0; i < n; i++) {
        cout << distances[i].num << endl;
    }
    return 0;
}