#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    // Please write your code here.
    int index = -1;
    for(int i = 0; i < input_str.length(); i++) {
        if(input_str.substr(i, target_str.length()) == target_str) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}
