#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    string str_a;
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> str;
        str_a += str;
    }

    int length = str_a.length();
    int count = 0;
    for(int i = 0; i < length; i++) {
        cout << str_a[i];
        count++;

        if(count == 5) {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}