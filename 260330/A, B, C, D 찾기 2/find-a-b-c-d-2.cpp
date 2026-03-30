#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int arr[15] = {};
    for(int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+15);
    
    //조건이 a <= b <= c <= d.
    //즉 배열 정렬하면 0번째는 a. 1번째는 b. 14번째는 a+b+c+d.
    //생각해보자. 1,2,3,4. 이렇게 나온다고 치면. sort하면 1,2는 무조건 앞에 온다.
    //1,1,1,1이라도. 1,1. 이렇게 맨 앞 2개는 a,b다. 그럼 c만 구하면 맨 마지막에서 빼면 된다.
    int a = arr[0];
    int b = arr[1];
    int temp = a+b;
    arr[0] = 0;
    arr[1] = 0;

    for(int i = 0; i < 15; i++) {
        if(arr[i] == temp) {
            arr[i] = 0;
        }
    }

    sort(arr, arr+15);
    int c = arr[3];
    int d = arr[14] - (a+b+c);
    cout << a << " " << b << " " << c << " " << d;

    return 0;
}