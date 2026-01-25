#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[201][201] = {}; //항상 명심. 초기화 안하면 쓰레기값 들어간다.

    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;

        if(i % 2 == 0) {
            cin >> x1 >> y1 >> x2 >> y2;
            for(int i = x1+100; i < x2+100; i++) {
                for(int j = y1+100; j < y2+100; j++) {
                    arr[i][j] = 1;
                }
            }
        } else {
            cin >> x1 >> y1 >> x2 >> y2; //파란색. 빨강은 1, 파랑은 2.
        for(int i = x1+100; i < x2+100; i++) {
            for(int j = y1+100; j < y2+100; j++) {
                arr[i][j] = 2;
            }
        }
        }
    }

    int count = 0;
    for(int i = 0; i < 201; i++) {
        for(int j = 0; j < 201; j++) {
            if(arr[i][j] == 2) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}