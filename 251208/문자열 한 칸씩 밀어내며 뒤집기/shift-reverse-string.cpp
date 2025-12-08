#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    string str;
    int qur_num;
    cin >> str >> qur_num;

    int q_num;
    int len = str.length();
    for(int i = 0; i < qur_num; i++) {
        cin >> q_num;
        if(q_num == 1) {
            str = str.substr(1, len-1) + str.substr(0,1);
            cout << str << endl;
        } else if(q_num == 2) {
            str = str.substr(len-1,1) + str.substr(0, len-1);
            cout << str << endl;
        } else if(q_num == 3) {
            string rev_str;
            for(int j = 0; j < len; j++) {
                rev_str += str[len-1-j];
            }
            str = rev_str;
            cout << str << endl;
        }
    }
    return 0;
}
