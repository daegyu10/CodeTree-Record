#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[n] = {};
    bool index[1000001] = {}; 
    int index2[n] = {};
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(index[arr[i]] == false) {
            index2[count++] = arr[i];
            index[arr[i]] = true;
        }
    }
    int result = 0;
    int explode_max = 0;
    for(int i = 0; i < count; i++) {
        int target = index2[i];
        int idx = 0;
        bool first = false;
        int explode = 0;

        for(int j = 0; j < n; j++) {
            if(arr[j] == target) {
                if(first == false) {
                    first = true;
                    idx = 0;
                } else {
                    if(idx <= k) {
                        explode++;
                        idx = 0;
                    }
                }
            } else {
                if(first == true) {
                    idx++;
                }
            }

        }

        if(explode_max < explode) {
            explode_max = explode;
            result = target;
        }
    }
    cout << result;

    return 0;
}