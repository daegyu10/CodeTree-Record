#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b;
    int count = 0;
    
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> b;
        count += b;
    }
    string str;
    str = to_string(count);
    str = str.substr(1,str.length()-1) + str.substr(0,1);
    cout << str;
    return 0;
}