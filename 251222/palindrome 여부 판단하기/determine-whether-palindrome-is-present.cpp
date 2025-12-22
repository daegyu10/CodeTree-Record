#include <iostream>
#include <string>

using namespace std;

bool Ispalin(string &s) {
    string s_2;
    for(int i = s.length()-1; i >= 0; i--) {
        s_2 += s[i];
    }
    if(s_2 == s) {
        return true;
    } else {
        return false;
    }
}

string A;

int main() {
    cin >> A;

    // Please write your code here.
    if(Ispalin(A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}