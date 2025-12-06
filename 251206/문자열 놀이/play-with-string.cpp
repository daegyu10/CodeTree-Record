#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int num;
    cin >> str;
    cin >> num;

    int q_num;
    int char_a;
    int char_b;

    char char_c;
    char char_d;

    for(int i = 0; i < num; i++) {
        cin >> q_num;
        if(q_num == 1) {
            cin >> char_a >> char_b;
            char_c = str[char_a-1];
            str[char_a-1] = str[char_b-1];
            str[char_b-1] = char_c;
            cout << str << endl;
        } else {
            cin >> char_c >> char_d;
            for(int i = 0; i < str.length(); i++) {
                if(str[i] == char_c) {
                    str[i] = char_d;
                }
            }
            cout << str << endl;
        }
    }
    return 0;
}