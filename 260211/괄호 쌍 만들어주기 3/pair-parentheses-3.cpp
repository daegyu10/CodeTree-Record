#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main() {
    // Please write your code here.
    string line;
    cin >> line;
    int count = 0;

    for(int i = 0; i < line.length(); i++) {
        bool start = false;
        if(line[i] == '(') {
            start = true;
        }
        for(int j = i+1; j < line.length(); j++) {
            if(start == true && line[j] == ')') {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}