#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[m][2] = {};
    for(int i = 0; i < m; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int max_count = 0;
    for(int i = 0; i < m; i++) {
        int x1 = arr[i][0];
        int x2 = arr[i][1];
        int count = 0;
        for(int j = 0; j < m; j++) {
            if((x1 == arr[j][0] || x1 == arr[j][1])&&(x2 == arr[j][0] || x2 == arr[j][1])) {
                count++;
            }
        }
        max_count = max(max_count, count);

    }
    
    cout << max_count;
    return 0;
}