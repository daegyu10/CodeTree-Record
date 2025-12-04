#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    bool exist_1 = false;
    bool exist_2 = false;
    cin >> str;
    
    for(int i = 0; i < str.length(); i++) {
        if(str.substr(i, 2) == "ee") {
            exist_1 = true;
        }
        if(str.substr(i, 2) == "ab") {
            exist_2 = true;
        }
    }

    if(exist_1 == true) cout << "Yes" << " ";
    else cout << "No" << " ";

    if(exist_2 == true) cout << "Yes";
    else cout << "No";
    return 0;
}