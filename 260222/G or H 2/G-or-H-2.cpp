#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    char arr[100] = {};

    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cin >> arr[a-1];
    }

    
    int max_size = 0;
    for(int i = 0; i < 100; i++) {
        int g_count = 0;
        int h_count = 0;

        for(int j = i; j < 100; j++) {
            if(arr[j] == 'G') {
                g_count++;
            } else if(arr[j] == 'H') {
                h_count++;
            }

            if(arr[i] != 0 && arr[j] != 0) {
                if(g_count == h_count || g_count > 0 && h_count == 0 || g_count == 0 && h_count > 0) {
                int size = abs(j-i);
                max_size = max(max_size, size);
                }
            }
        }
    }

    cout << max_size;
    return 0;
}