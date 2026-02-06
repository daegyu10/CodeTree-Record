#include <iostream>
using namespace std;

int n;

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}

int main() {
    // Please write your code here.
    //거울 방향을 주는걸 숫자로 저장하고, 각 숫자당 반사하는 방향을 정해주면 될듯?
    //그 다음에 튕기면 카운트++ 해주고 dir_num 바꿔주고 다음으로 넘기고.
    //그 다음에 i가 range에서 벗어나면 break하고 count 출력하고 끝내면 될듯.

    cin >> n;
    int arr[n][n] = {};
    
    int dx[4] = {0, 1, 0, -1}; //동 남 서 북
    int dy[4] = {1, 0, -1, 0};
    int dir_num; //동 남 서 북으로 맞춰둠.

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if(c == '/') {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 2;
            }
        }
    } //행에 해당하는 정보 입력하기. /면 1, \면 2로 받음.

    //다음에는 레이저 쏘는 곳 입력받기. 4n으로 이루어졌다면 일단 입력 수를 n으로 나눈 몫/n으로 나눈 나머지로 나누기
    //그리고 4분면에따라서 각각 할당하기.
    int dir;
    cin >> dir;
    dir--; //123은 012로 바꿔야한다. 그래야 나눈 몫이 0이되고 나머지가 012가 되기 때문. 나머지도 마찬가지.
    //456이면 345. 즉 몫은 1이되고 나머지 012. 789라면 678. 몫은 2. 나머지는 012.
    int aspect = dir / n;
    int rest = (dir % n); //0 base 상태. 1이면 00에 넣어야한다. 3이면 02에 넣어야함.
    int in_n, in_m; //각 분면과 들어갈 칸을 정하면 그걸로 들어간다.
    //0-동 1-남 2-서 3-북. 들어가는 방향이 아니라 향하는 방향을 했어야 했음. 그거 고쳤다.
    if(aspect == 0) {
        in_n = 0;
        in_m = rest;
        dir_num = 1;
    } else if(aspect == 1) {
        in_n = rest;
        in_m = n-1;
        dir_num = 2;
    } else if(aspect == 2) {
        in_n = n-1;
        in_m = n-rest-1;
        dir_num = 3;
    } else if(aspect == 3) {
        in_n = n-rest-1;
        in_m = 0;
        dir_num = 0;
    }

    //들어가는 곳 산정 완료. 여기서 dir_num도 할 수 있을듯. 들어가는 방향으로 맞춰놨다.
    int count = 0;
    while(true) {
        //여기서 무한 반복. in_n, in_m으로 계속 가다가 in_n, in_m이 outrange되면 break되고 나온다.
        //행에 해당하는 정보 입력하기. /면 1, \면 2로 받음.
        
        if(InRange(in_n, in_m)) {
            if(arr[in_n][in_m] == 1) {
                //방향 좀 헷갈린듯. 다시 시도.
                //1일 경우/ 동쪽에서 들어오면 북을 향함. 남쪽에서 들어오면 서를 향함. 0->3, 1->2
                //서쪽에서 들어오면 남을 향함. 북쪽에서 들어오면 동을 향함. 2->1, 3->0
                //0-동 1-남 2-서 3-북
                //cout << in_n << " " << in_m << endl;
                if(dir_num == 0) {
                    dir_num = 3;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 1) {
                    dir_num = 2;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 2) {
                    dir_num = 1;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 3) {
                    dir_num = 0;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                }
            } else if(arr[in_n][in_m] == 2) {
                //방향은 향하는 족이다. 들어오는걸 반대로 생각한듯.
                //2라면 북에서 들어오면 서쪽, 동쪽에서 들어오면 남쪽이다. 3->2, 0->1
                //남쪽에서 들어오면 동쪽, 서쪽에서 들어오면 북쪽. 1->0, 2->3
                //0-동 1-남 2-서 3-북
                if(dir_num == 0) {
                    dir_num = 1;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 1) {
                    dir_num = 0;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 2) {
                    dir_num = 3;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                } else if(dir_num == 3) {
                    dir_num = 2;
                    in_n = in_n + dx[dir_num];
                    in_m = in_m + dy[dir_num];
                    count++;
                }
            }
        } else {
            cout << count;
            return 0;
        }
    }
    return 0;
}