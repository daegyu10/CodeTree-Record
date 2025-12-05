#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int cnt_1 = 0;
    int cnt_2 = 0;

    for(int i = 0; i < str.length() -1; i++) {
        if(str.substr(i, 2) == "ee") {
            cnt_1++;
        }
        if(str.substr(i, 2) == "eb") {
            cnt_2++;
        }
    }

    cout << cnt_1 << " " << cnt_2;
    return 0;
}