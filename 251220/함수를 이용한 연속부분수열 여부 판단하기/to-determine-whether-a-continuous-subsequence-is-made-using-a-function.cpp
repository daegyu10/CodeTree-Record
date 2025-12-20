#include <iostream>

using namespace std;

bool IsSame(int a[], int b[], int c, int d) {
    bool exist = false;

    for(int i = 0; i < c-d; i++) {
        if(a[i] == b[0]) {
            for(int j = 0; j < d; j++) {
                if(a[i+j] != b[j]) {
                    exist = false;
                } else if(j == d-1) {
                    exist = true;
                    return exist;
                }
            }
        }
    }

    return exist;
}

int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if(IsSame(a, b, n1, n2)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

