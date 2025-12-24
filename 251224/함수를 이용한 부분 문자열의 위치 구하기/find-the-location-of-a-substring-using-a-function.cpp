#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int Index() {
    for(int i = 0; i < text.length(); i++) {
        if(text.substr(i, pattern.length()) == pattern) {
            return i;
        }
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    int result = Index();
    cout << result;
    return 0;
}