#include <iostream>
using namespace std;
#include <algorithm>

class Cheese {
    public:
        int p;
        int m;
        int t;

        Cheese(){}
        Cheese(int p, int m, int t) {
            this->p = p;
            this->m = m;
            this->t = t;
        }
};

class Record {
    public:
        int p;
        int t;

        Record(){}
        Record(int p, int t) {
            this->p = p;
            this->t = t;
        }
};

int main() {
    // Please write your code here
    int n, m, d, s;
    cin >> n >> m >> d >> s;

    Cheese cheese[1000];
    Record record[50];
    int max_count = 0;

    for(int i = 0; i < d; i++) {
        cin >> cheese[i].p >> cheese[i].m >> cheese[i].t;
    }

    for(int i = 0; i < s; i++) {
        cin >> record[i].p >> record[i].t;
    }

    for(int i = 1; i <= m; i++) { //우선 1번 ~ m번 치즈 검사한다.
        
        bool is_spoiled = true; //먼저 상했는지 먼저 검사.
        for(int j = 0; j < s; j++) { //아픈 사람 기록을 하나하나 대본다.
            bool is_sick = false; //추가. 이 치즈 때문에 아픈가? 를 본다. 모든 사람이 이 치즈를 먹은적이 있는지를 보려면, 모든 사람이 이 치즈를 먹고 아픈지를 봐야함.
            for(int k = 0; k < d; k++) { 
                //전체 기록에서, 아픈사람이 먹었던 사람과 같은 사람이고, 먹은 치즈가 현재 검사하는 치즈고, 시간도 아팠던 시간보다 빠르면. 이 치즈는 상한거.
                //논리 추가. 이 방법은, 이 치즈 먹고 아픈 사람이 1명이라도 있으면 상한거다 판정.
                //a가 1번 치즈 먹고 아팠고, b는 1번 치즈를 안먹었는데 아팠다. 근데 a가 아프면 true가 된다.
                //근데 b는 아니다. 근데 spoiled는 true. 따라서 마법의 치즈가 되어버린다.
                //그럼 어떻게 해야 할까. 아픈사람이 '이 치즈' 때문에 아픈지를 봐야한다.
                //그러니까, 치즈 상한 판별 bool 하나. 그리고, 아픈 사람이 이것때문에 아픈건지 하나하나 보는거.
                //사람은 아픈데, 이거때문이 아니다? 그럼 나가는거다.
                if(record[j].p == cheese[k].p && record[j].t > cheese[k].t && cheese[k].m == i) {
                    is_sick = true;
                }
            }

            if(is_sick == false) { //1명이라도 i번 치즈를 먹지 않았다면. sick가 false다. 그럼 이 치즈는 가능성 없음.
                is_spoiled = false;
                break;
            }

        }

        if(is_spoiled == false) { //상한게 아니라면 m 반복문 올린다.
            continue;
        }

        int count = 0;
        int ate_person[n+1] = {}; //일단 상한건 알겠다. 그러면? 이 치즈 먹은 사람을 싹 다 카운트 하면 된다. 단 1번만.
        for(int j = 0; j < d; j++) {
            if(cheese[j].m == i && ate_person[cheese[j].p] == 0) {
                count++;
                ate_person[cheese[j].p] = 1;
            }
        }

        max_count = max(max_count, count);
    }
    
    cout << max_count;
    return 0;
}