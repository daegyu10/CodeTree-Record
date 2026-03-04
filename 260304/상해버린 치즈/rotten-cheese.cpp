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

bool cmp(const Cheese& a, const Cheese& b) {
    return a.t < b.t;
}
int main() {
    // Please write your code here.
    int n, m, d, s;

    cin >> n >> m >> d >> s;
    Cheese cheese[1000];
    Record record[50];

    for(int i = 0; i < d; i++) {
        cin >> cheese[i].p >> cheese[i].m >> cheese[i].t;
    }

    for(int i = 0; i < s; i++) {
        cin >> record[i].p >> record[i].t;
    }

    //sort(cheese.begin(), cheese.end(), cmp); //sort가 필요할거라 생각하지 않음. 그냥 무식하게 다 완전탐색 하기 때문.

    int max_count = 0;
    for(int i = 1; i <= m; i++) { //먼저 치즈 번호를 기준으로 반복문 돌린다.
        int count = 0;
        bool is_rotten = true; //현재 검사하는 치즈가 상했음을 간주하고 변수 마련. 이건 없어도 되나? 애초에 is_sick if문으로 이후의 연산 여부를 결정한다면 필요 없나?
        int count_person[n] = {}; //상한 치즈 먹은 사람 bool 카운트 용. 이거 카운트 한다.

        for(int j = 0; j < s; j++) { //그 다음은 record. 다친 기록 뒤져서 사람 번호, 시간 꺼낸다.
            int person = record[j].p;
            int time = record[j].t;
            bool is_sick = false; //이걸로 아픈 사람이 있으면 가능성이 있는 것.

            for(int k = 0; k < d; k++) {
                if(cheese[k].p == person && cheese[k].m == i && cheese[k].t < time) {
                    is_sick = true;
                }
            }

            if(is_sick == false) {
                is_rotten = false;
                break;
            }
        }
        
        if(is_rotten == false) {
            continue;
        }

        for(int l = 0; l < d; l++) {
            if(cheese[l].m == i && count_person[cheese[l].p] == 0) {
                count++;
                count_person[cheese[l].p] = 1;
            }
        }
        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}