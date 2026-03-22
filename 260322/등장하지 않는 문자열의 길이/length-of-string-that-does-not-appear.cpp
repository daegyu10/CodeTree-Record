#include <iostream>
using namespace std;
#include <string>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    char arr[n] = {};
    string line;
    
    cin >> line;
    for(int i = 0; i < n; i++) {
        arr[i] = line[i];
    }

    //비교를 해야한다. 굳이 새로운 배열 만들 필요 없을듯.
    //첫번째 for문에선 시작점. 두번재 for문에선 length 변수로 arr[i] 잡고 비교. 
    //지금 봐야할 건, 1. 길이. 2. 비교할 문자열의 시작 장소. 3. 시작점 이후 비교할(기존 문자열) 문자열.
    //c++에서, 문자열에는 특정 부분 문자열이 있는걸 찾아주는 find 함수가 있다. str.find(str2) != string::npos -> 즉, 이건 있다는 것
    for(int i = 1; i < n; i++) { //길이
        bool exist = false;

        for(int j = 0; j < n-i; j++) { //시작점
            string str;
            for(int k = j; k < j+i; k++) { //도착점.
                str += arr[k];
            }

            if(line.find(str, j+1) != string::npos) { //그냥 시작점 j부터 잡으면 자기 자신을 잡아버림. 그렇다고 j+i로 하면 10번째 테스트 케이스를 못잡음.
            //그래서 j+1. 목표 문자열 바로 다음 인덱스부터 검사.
                exist = true;
                break;
            }
        }

        if(!exist) {
            cout << i;
            return 0;
        }
    }
    
    return 0;
}