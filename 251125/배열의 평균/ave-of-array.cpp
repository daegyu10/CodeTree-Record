#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4] = {};
    float hor_avg = 0.0;
    float ver_avg = 0.0;
    float total_avg = 0.0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            hor_avg += (float)arr[i][j];
        }
        cout << fixed;
        cout.precision(1);
        cout << hor_avg/4.0 << " ";
        hor_avg = 0.0;
    }
    cout << endl;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            ver_avg += (float)arr[j][i];
        }
        cout << fixed;
        cout.precision(1);
        cout << ver_avg/2.0 << " ";
        ver_avg = 0.0;
    }
    cout << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            total_avg += (float)arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << total_avg/8.0;
    return 0;
}