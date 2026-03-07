#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, total_c;
    cin >> n >> total_c;

    int p_i[n] = {};
    int s_i[n] = {};
    int half_p_i[n] = {};
    

    for(int i = 0; i < n; i++) {
        int p;
        cin >> p >> s_i[i];
        p_i[i] = p;
        half_p_i[i] = p/2;
    }

    int max_count = 0;
    for(int i = 0; i < n; i++) {
        int total_i[n] = {};
        for(int j = 0; j < n; j++) {
            if(i == j) {
                total_i[j] = (half_p_i[j] + s_i[j]);
            } else {
                total_i[j] = (p_i[j] + s_i[j]);
            }
        }
        sort(total_i, total_i+n);

        int count = 0;
        int price = 0;
        for(int j = 0; j < n; j++) {
            price += total_i[j];
            if(price > total_c) {
                break;
            }
            count++;
        }

        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}