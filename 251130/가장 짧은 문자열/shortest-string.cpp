#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int c1;
    int c2;
    int c3;

    int min;
    int max;

    cin >> str;
    c1 = str.length();

    cin >> str;
    c2 = str.length();

    cin >> str;
    c3 = str.length();

    max = c1;
    if(c2 >= max) {
        max = c2;
    }
    if(c3 >= max) {
        max = c3;
    }

    min = c1;
    if(c2 <= min) {
        min = c2;
    }
    if(c3 <= min) {
        min = c3;
    }

    cout << max-min;


    return 0;
}