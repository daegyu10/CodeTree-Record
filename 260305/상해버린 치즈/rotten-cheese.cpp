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
        
        bool is_spoiled = false; //먼저 상했는지 먼저 검사.
        for(int j = 0; j < s; j++) { //아픈 사람 기록을 하나하나 대본다.
            for(int k = 0; k < d; k++) { 
                //전체 기록에서, 아픈사람이 먹었던 사람과 같은 사람이고, 먹은 치즈가 현재 검사하는 치즈고, 시간도 아팠던 시간보다 빠르면. 이 치즈는 상한거.
                if(record[j].p == cheese[k].p && record[j].t > cheese[k].t && cheese[k].m == i) {
                    is_spoiled = true;
                }
            }
        }

        if(is_spoiled == false) { //상한게 아니라면 m 반복문 올린다.
            continue;
        }

        int count = 0;
        int ate_person[n] = {}; //일단 상한건 알겠다. 그러면? 이 치즈 먹은 사람을 싹 다 카운트 하면 된다. 단 1번만.
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