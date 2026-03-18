#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    //설계 완전 변경. 현재 x좌표, y좌표의 한계는 0부터 10까지. 즉 11개다. x,y 2가지니 22가지.
    //따라서 총 22개의 선 중 3개를 고르고. 그게 선을 다 지나가는지를 보면 된다. 그걸 고민해야 함.
    //간단하게 가자. x 직선 0개~3개. 그리고 y직선 0개~3개. 이렇게 각각 해보자.
    //이 방식은 반복문이 복잡해질 수 있음. 22개 중에 3개. 즉, 직선을 다 모아보자.

    int n;
    cin >> n;

    int x[n] = {};
    int y[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    //22개 하려면 for문에선 i < 22식으로 해야한다. 0~10은 가로선, 11~21은 세로선. 이런 느낌?
    //0~10은 가로선으로 하자. y 고정. 느낌. 11~21은 세로선. x = 0 느낌.
    for(int i = 0; i < 22; i++) {
        for(int j = i+1; j < 22; j++) {
            for(int k = j+1; k < 22; k++) {
                int passed = 0;

                for(int l = 0; l < n; l++) {
                    if((i/11) == 0) {
                        if(x[l] == i%11) {
                            passed++;
                        }
                    } else {
                        if(y[l] == i%11) {
                            passed++;
                        }
                    }

                    if((j/11) == 0) {
                        if(x[l] == j%11) {
                            passed++;
                        }
                    } else {
                        if(y[l] == j%11) {
                            passed++;
                        }
                    }

                    if((k/11) == 0) {
                        if(x[l] == k%11) {
                            passed++;
                        }
                    } else {
                        if(y[l] == k%11) {
                            passed++;
                        }
                    }
                }

                if(passed == n) {
                    cout << "1";
                    return 0;
                }
            }
        }
    }

    cout << "0";
    return 0;
}