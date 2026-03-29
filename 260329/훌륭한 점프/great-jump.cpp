#include <iostream>
using namespace std;

int n, k;
int arr[100] = {}; //수 100개 주어지니까 최대치 선언함.

bool Possible(int a) {
    int count = 0;
    int indexes[n] = {};
    
    if(arr[0] > a || arr[n-1] > a) {
        return false;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] <= a) {
            indexes[count++] = i;
        }
    }

    for(int i = 1; i < count; i++) {
        int distance = indexes[i] - indexes[i-1];
        if(distance > k) {
            return false;
        }
    }

    return true;
}

int main() {
    // Please write your code here.

    cin >> n >> k;
    int max_count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(max_count < arr[i]) {
            max_count = arr[i];
        }
    }

    //조건을 어떻게 해야할끼? 일단 최대값을 구하고. 그거에서 최소값을 구하고. 그 와중에서 거리를 봐야한다.
    //아까 개념대로, 정답을 가정해보자. 
    int minmax = 1000;
    for(int i = 1; i <= max_count; i++) {
        if(Possible(i)) {
            minmax = min(minmax, i);
        }
    }

    cout << minmax;
    return 0;
}