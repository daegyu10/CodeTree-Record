#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3] = {};
    int exist[10] = { };
    bool count_num[10] = {};
    string line;

    int index = 0;
    for(int i = 0; i < 3; i++) {
        cin >> line;

        for(int j = 0; j < 3; j++) {
            arr[i][j] = line[j] - '0';

            if(count_num[arr[i][j]] == false) {
                exist[index] = arr[i][j];
                count_num[arr[i][j]] = true;
                index++;
            }

        }
    }

    sort(exist, exist + index);

    int total_count = 0;
    for(int i = 0; i < index-1; i++) {
        for(int j = i+1; j < index; j++) {
            //사용된 숫자 세고, 그걸 sort하고 거기서 2개씩 고른다.
            //여기서, 스도쿠니까 가로 3번, 세로 3번. 대각선 2번 계산해서 exist의 i, j번째 수면 count++. 그게 3이면 true. break.
            int hor_count = 0;
            int ver_count = 0;
            int dig_count1 = 0;
            int dig_count2 = 0;
            bool win = false;
            
            bool i_show = false;
            bool j_show = false;

            for(int k = 0; k < 3; k++) {
                hor_count = 0;
                for(int l = 0; l < 3; l++) {
                    if(arr[l][k] == exist[i]) {
                        i_show = true;
                        hor_count++;
                    } else if(arr[l][k] == exist[j]) {
                        j_show = true;
                        hor_count++;
                    }
                }
                if(hor_count == 3 && i_show == true && j_show == true) {
                    win = true;
                }
            }

            i_show = false;
            j_show = false;
            for(int k = 0; k < 3; k++) {
                ver_count = 0;
                for(int l = 0; l < 3; l++) {
                    if(arr[k][l] == exist[i]) {
                        i_show = true;
                        ver_count++;
                    } else if(arr[k][l] == exist[j]) {
                        j_show = true;
                        ver_count++;
                    }
                }
                if(ver_count == 3 && i_show == true && j_show == true) {
                    win = true;
                }
            }

            i_show = false;
            j_show = false;
            for(int k = 0; k < 3; k++) {
                if(arr[k][k] == exist[i]) {
                    i_show = true;
                    dig_count1++;
                } else if(arr[k][k] == exist[j]) {
                    j_show = true;
                    dig_count1++;
                }
            }

            if(dig_count1 == 3 && i_show == true && j_show == true) {
                win = true;
            }

            i_show = false;
            j_show = false;
            for(int k = 0; k < 3; k++) {
                if(arr[k][2-k] == exist[i]) {
                    i_show = true;
                    dig_count2++;
                } else if(arr[k][2-k] == exist[j]) {
                    j_show = true;
                    dig_count2++;
                }
            }

            if(dig_count2 == 3 && i_show == true && j_show == true) {
                win = true;
            }

            if(win == true) {
                total_count++;
            }
        }
    }

    cout << total_count;
    
    return 0;
}