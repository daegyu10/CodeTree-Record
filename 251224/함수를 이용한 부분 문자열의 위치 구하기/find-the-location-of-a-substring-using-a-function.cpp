#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int Index() {
    for(int i = 0; i <= text.length() - pattern.length(); i++) {
        bool match = true;

        for(int j = 0; j < pattern.length(); j++) {
            if(text[i+j] != pattern[j]) {
                match = false;
                break;
            }
        }

        if(match) {
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