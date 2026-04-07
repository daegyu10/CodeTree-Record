#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= 100000; i++) {
        int count = 0;
        int sector_count = 0;
        for(int j = 0; j < n-1; j++) {
            count += arr[j];
            if(count + arr[j+1] > i) {
                count = 0;
                sector_count++;
            }
            if(sector_count > m-1) {
                break;
            }
        }

        if(sector_count == m-1) {
            cout << i;
            return 0;
        }
    }
    return 0; 
}