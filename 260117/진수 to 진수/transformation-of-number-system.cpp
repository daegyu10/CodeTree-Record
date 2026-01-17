#include <iostream>
using namespace std;
#include <string>

int main() {
    // Please write your code here.
    int a, b;
    string n;
    cin >> a >> b >> n;

    int num = 0;
    //먼저 n는 a진수로 표현되어 있다. 그걸 10진수로 바꾸고, 그걸 b진수로 바꾸면 됨. n진수 -> 10진수 -> b진수.
    for(int i = 0; i < n.length(); i++) {
        num = num * a + (n[i]-'0');
    }

    int arr[20];
    int count = 0;

    while(true) {
        if(num < b) {
            arr[count++] = num;
            break;
        }

        arr[count++] = num % b;
        num /= b;
    }

    for(int i = count-1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}