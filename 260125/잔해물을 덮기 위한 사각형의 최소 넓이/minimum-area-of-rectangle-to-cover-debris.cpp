#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    int arr[2001][2001] = {};

    for(int i = x1+1000; i < x2+1000; i++) {
        for(int j = y1+1000; j < y2+1000; j++) {
            arr[i][j] = 1;
        }
    }

    for(int i = x3+1000; i < x4+1000; i++) {
        for(int j = y3+1000; j < y4+1000; j++) {
            arr[i][j] = 0;
        }
    }

    int x_max = 0;
    int y_max = 0;

    int x_min = 0;
    int y_min = 0;

    for(int i = 0; i < 2001; i++) {
        for(int j = 0; j < 2001; j++) {
            if(arr[i][j] == 1 && x_min == 0) {
                x_min = i;
            }
            if(arr[i][j] == 1 && y_min == 0) {
                y_min = j;
            }

            if(arr[i][j] == 1 && y_max < j) {
                y_max = j;
            }
            if(arr[i][j] == 1 && x_max < i) {
                x_max = i;
            }
        }
    }

    cout << (x_max-x_min+1)*(y_max-y_min+1);
    return 0;
}