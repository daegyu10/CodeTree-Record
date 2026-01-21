#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[200001] = {}; //최대 범위는 10만. 왼쪽/오른쪽 반영.
    int index = 100000;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        char c;
        cin >> a >> c;
        //검은색은 1. 흰색은 2.
        //마지막으로 뒤집은 타일위에 서있음 -> 현재 칠하고(뒤집고) 움직임. 즉 마지막은 이동하지 말아야함.
        if(c == 'R') {
            for(int j = 0; j < a; j++) {
                arr[index] = 1;

                if(j != a-1) {
                    index++;
                }
            }
        } else {
            for(int j = 0; j < a; j++) {
                arr[index] = 2;

                if(j != a-1) {
                    index--;
                }
            }
        }
    }
    int white = 0;
    int black = 0;

    for(int i = 0; i < 200001; i++) {
        if(arr[i] == 1) {
            black++;
        } else if(arr[i] == 2) {
            white++;
        }
    }

    cout << white << " " << black;
    return 0;
}