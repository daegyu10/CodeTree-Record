#include <iostream>

using namespace std;

int n, m;

void Maxdiv(int n, int m) {
    int save;
    int max;
    if(n >= m) {
        max = n;
    } else {
        max = m;
    }

    for(int i = 1; i <= max; i++) {
        if(n % i == 0 && m % i == 0) {
            save = i;
        }
    }

    cout << save;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    Maxdiv(n,m);
    return 0;
}