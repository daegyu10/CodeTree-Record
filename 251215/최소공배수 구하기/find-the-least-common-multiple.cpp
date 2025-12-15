#include <iostream>

using namespace std;

int n, m;

void FindMul(int n, int m) {
    int min;
    int max;

    if(n > m) {
        min = m;
        max = n;
    } else {
        min = n;
        max = m;
    }

    bool complete = false;

    for(int i = 1; i < 100; i++) {
        for(int j = 1; j < 100; j++) {
            if(min * j == max * i) {
                cout << min*j;
                complete = true;
                break;
            }
        }
        if(complete == true) {
            break;
        }
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    FindMul(n,m);

    return 0;
}