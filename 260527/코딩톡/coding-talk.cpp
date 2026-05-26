#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int per_num, mes_num, p_mes_num;
    cin >> per_num >> mes_num >> p_mes_num;

    char arr1[mes_num] = {};
    int arr2[mes_num] = {};
    bool check[26] = {};
    for(int i = 0; i < mes_num; i++) {
        cin >> arr1[i] >> arr2[i];
    }

    if(arr2[p_mes_num-1] == 0) {
        return 0;
    }

    int start = arr2[p_mes_num-1];
    int r_start = p_mes_num-1;
    for(int i = p_mes_num-1; i >= 0; i--) {
        if(arr2[i] != start) {
            r_start = i+1;
            break;
        }
    }

    for(int i = r_start; i < mes_num; i++) {
        char c = arr1[i];
        int b_check = -65 + c;
        check[b_check] = true;
    }

    for(int i = 0; i < per_num; i++) {
        if(check[i] == false) {
            cout << (char)(i+65) << " ";
        }
    }
    return 0;
}