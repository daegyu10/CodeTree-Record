#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;

    int count = 0;
    for(int i = 0; i < a.length(); i++) {
        count += (int)(a[i]-'0');
    }

    cout << count;
    return 0;
}