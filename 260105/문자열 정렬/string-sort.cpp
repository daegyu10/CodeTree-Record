#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
//using namespace std;
string str;

int main() {
    cin >> str;

    // Please write your code here.
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}