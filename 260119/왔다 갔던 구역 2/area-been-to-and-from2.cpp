#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[300] = {}; //음수는 배열 인덱스로 포함 불가. 따라서 -100~+100.

    cin >> n;
    int index = 150; //한 가운데. 숫자로 치면 0.
    for(int i = 0; i < n; i++) {
        int a;
        char c;
        cin >> a >> c;
        if(c == 'R') {
            for(int i = 0; i < a; i++) {
                arr[index]++;
                index++;
            }
        } else {
            for(int i = 0; i < a; i++) {
                arr[index]++;
                index--;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 300; i++) {
        if(arr[i] >= 2) {
            count++;
        }
    }

    cout << count;
    return 0;
}