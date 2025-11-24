#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    int max = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(((-1*price[i])+price[j]) > max) {
                max = ((-1*price[i])+price[j]);
            }
        }
    }

    cout << max;
    return 0;
}
