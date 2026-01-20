#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[200001] = {}; //최대 입력 1000번, 최대 이동 횟수 100칸. 즉, -100000 ~ +100000이 최대.
    //offset값을 처음부터 고려하여 20만으로 범위 잡음.
    //중요 - 색깔은 0이 무색. 1이 검은색. 2가 횐색. 3이 회색으로 정함.
    int white[200001] = {};
    int black[200001] = {};
    //각각 위치에 따른 하얀색/검은색 칠해진 횟수 저장용
    int index = 100000; //offset을 처음부터 정함.

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        char c;
        cin >> a >> c;

        if(c == 'R') {
            for(int j = 0; j < a; j++) {
                if(arr[index] == 3) {
                    if(j != a-1) {
                    index++; //설명을 보면 현재 위치 색칠하고 마지막 칠한 타일 위치에 서있어야함. 마지막은 움직이지 않아야함.
                    }
                } else {
                    arr[index] = 1;
                    black[index]++;

                    if(black[index] >= 2 && white[index] >= 2) {
                        arr[index] = 3;
                    }

                    if(j != a-1) {
                        index++; //설명을 보면 현재 위치 색칠하고 마지막 칠한 타일 위치에 서있어야함. 마지막은 움직이지 않아야함.
                    }
                }
            }
        } else {
            for(int j = 0; j < a; j++) {
                if(arr[index] == 3) {
                    if(j != a-1) {
                        index--; //설명을 보면 현재 위치 색칠하고 마지막 칠한 타일 위치에 서있어야함. 마지막은 움직이지 않아야함.
                    }
                } else {
                    arr[index] = 2;
                    white[index]++;

                    if(black[index] >= 2 && white[index] >= 2) {
                        arr[index] = 3;
                    }

                    if(j != a-1) {
                        index--; //설명을 보면 현재 위치 색칠하고 마지막 칠한 타일 위치에 서있어야함. 마지막은 움직이지 않아야함.
                    }
                }
            }
        }
    }

    int b_n = 0;
    int w_n = 0;
    int g_n = 0;

    for(int i = 0; i < 200001; i++) {
        if(arr[i] == 1) {
            b_n++;
        } else if(arr[i] == 2) {
            w_n++;
        } else if(arr[i] == 3) {
            g_n++;
        }
    }

    cout << w_n << " " << b_n << " " << g_n;
    return 0;
}