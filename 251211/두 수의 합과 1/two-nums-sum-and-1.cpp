#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b;
    cin >> a >> b;
    string str = to_string(a+b);

    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '1') {
            count++;
        }
    }

    cout << count;
    return 0;
}