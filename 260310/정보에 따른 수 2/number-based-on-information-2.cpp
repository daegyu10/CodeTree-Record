#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int a, b;
    cin >> a >> b;

    char arr2[1001] = {};
    for(int i = 0; i < n; i++) {
        int pos;
        char alpha;
        cin >> alpha >> pos;
        arr2[pos] = alpha;
    }

    //어떻게 할 것인가. 간단한가? 
    //지금 중요한건 s와 n의 위치다.
    //각 위치마다. 그러니까 알파벳을 발견할때마다 n과 s 위치를 판별해야 하나?
    //알파벳을 발견할때마다, 왼쪽. 오른쪽으로 s와 n을 찾는다. 먼저 찾으면 그 값 기록.
    //그리고 s가 n보다 거리가 짧으면. s가 n보다 가까우면 count++

    int count = 0;
    for(int i = a; i <= b; i++) {
        int pos_now = i;
        int s_dis_p = 2000;
        int n_dis_p = 2000;
        int s_dis_n = 2000;
        int n_dis_n = 2000; //초기값 설정을 0으로 하면 당연히 s, n이 다 위치가 0으로 나온다. 최소 거리를 구해야하니 최대값으로 값을 줌.

        int temp_s_n = 0;
        int temp_n_n = 0;
        bool s_found = false;
        bool n_found = false; //왼쪽, 오른쪽으로 각각 1번씩 가보면서 s, n찾는다. 찾으면 bool true로 하고 위치 기록.
        while(pos_now >= a) {
            if(arr2[pos_now] == 'S' && s_found == false) {
                s_dis_n = temp_s_n;
                s_found = true;
            }

            if(arr2[pos_now] == 'N' && n_found == false) {
                n_dis_n = temp_n_n;
                n_found = true;
            }

            if(s_found == true && n_found == true) {
                break;
            }
            temp_s_n++;
            temp_n_n++;
            pos_now--;
        } 

        pos_now = i;
        int temp_s_p = 0;
        int temp_n_p = 0;
        s_found = false;
        n_found = false;
        while(pos_now <= b) {
            if(arr2[pos_now] == 'S' && s_found == false) {
                s_dis_p = temp_s_p;
                s_found = true;
            }

            if(arr2[pos_now] == 'N' && n_found == false) {
                n_dis_p = temp_n_p;
                n_found = true;
            }
            if(s_found == true && n_found == true) {
                break;
            }
            temp_s_p++;
            temp_n_p++;
            pos_now++;
        }

        int s_pos = min(s_dis_p, s_dis_n);
        int n_pos = min(n_dis_p, n_dis_n);

        if(s_pos <= n_pos) {
            count++;
        }

    }

    cout << count;
    return 0;
}