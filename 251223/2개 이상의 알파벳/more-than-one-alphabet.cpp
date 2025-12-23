#include <iostream>
#include <string>

using namespace std;

bool AlphabetKnow(string &s) {
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] != s[i+1]) {
            return true;
        }
    }
    return false;
}

string A;

int main() {
    cin >> A;

    // Please write your code here.
    if(AlphabetKnow(A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}