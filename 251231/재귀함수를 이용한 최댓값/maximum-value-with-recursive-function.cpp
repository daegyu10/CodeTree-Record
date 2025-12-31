#include <iostream>

using namespace std;

int n;
int arr[100];
int max_num = 0;

int MaxRetrun(int a) {
    if(a == n) {
        return max_num;
    }
    if(arr[a] > max_num) {
        max_num = arr[a];
    }
    return MaxRetrun(a+1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << MaxRetrun(0);

    return 0;
}