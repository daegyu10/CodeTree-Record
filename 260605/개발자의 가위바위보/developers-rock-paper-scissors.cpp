#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr1[n] = {};
    int arr2[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
    }

    //총 가짓수는 6가지. 1가위. 주먹/보를 2,3 바꿔서. 이거 3번 반복.
    int max_win = 0;
    int temp_win = 0;
    for(int i = 0; i < n; i++) {
        //1 가위, 2 주먹, 3 보
        if(arr1[i] == 1 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 1) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 2) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    for(int i = 0; i < n; i++) {
        //1 가위, 2 보, 3 주먹
        if(arr1[i] == 1 && arr2[i] == 2) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 1) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    for(int i = 0; i < n; i++) {
        //1 바위, 2 가위, 3 보
        if(arr1[i] == 1 && arr2[i] == 2) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 1) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    for(int i = 0; i < n; i++) {
        //1 바위, 2 보, 3 가위
        if(arr1[i] == 1 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 1) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 2) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    for(int i = 0; i < n; i++) {
        //1 보, 2 가위, 3 바위
        if(arr1[i] == 1 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 1) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 2) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    for(int i = 0; i < n; i++) {
        //1 보, 2 바위, 3 가위
        if(arr1[i] == 1 && arr2[i] == 2) {
            temp_win++;
        } else if(arr1[i] == 2 && arr2[i] == 3) {
            temp_win++;
        } else if(arr1[i] == 3 && arr2[i] == 1) {
            temp_win++;
        }
    }

    max_win = max(max_win, temp_win);
    temp_win = 0;

    cout << max_win;
    return 0;
}