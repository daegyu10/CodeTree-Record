#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    int total_num = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    } //일단 방 개수 입력 받고, 그 방에 들어가야하는 인원을 배열에 넣고. 총 인원은 total_num으로 받기.

    //중요한거 : 방 이동거리 정하기. 방 이동거리는 인원 * 거리. 인원은 이미 있다. 그럼 거리는?
    //반시계 방향이다. 이거는? 뭔가 더하고 나누는 방식은 안되나?
    
    int min_dist = INT_MAX;
    //i는 시작방. j는 각각 도착방. 그럼 각 도착방에 따른 거리는? 일단 n으로 나누어야한다.
    //
    for(int i = 0; i < n; i++) { //시작 방 개수, 그리고 방 가는 횟수만큼 가야함. 따라서 총 반복수는?
        int sum_dist = 0;
        for(int j = 0; j < n; j++) {
            int dist = (n + j - i) % n; //결국 이동거리를 구하는게 핵심이었다. q&a 답변 보고 유추한거라서 완전 정답은 아님.
            //일반적으로, 거리를 구하는건 도착지점-시작지점임. 2번에서 4번 갈려면? 4-2. 거리는 2다.
            //근데, 이번건 반시계방향 연결이 있다. 즉, 4번방에서 1번방으로 가면? j-1하면 -3이다. 거리는 맞는데. 음수다.
            //우리는 (j-i)%n으로 거리를 구해왔다. 거리는 맞지만 음수라면? 
            sum_dist += dist * arr[j];
        }
        if(sum_dist < min_dist) {
            min_dist = sum_dist;
        }

    }
    cout << min_dist;
    return 0;
}