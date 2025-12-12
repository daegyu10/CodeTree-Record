#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string str;
    cin >> n >> str;

    string str_a;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> str_a;
        if(str == str_a) {
            count++;
        }
    }
    cout << count;
    return 0;
}