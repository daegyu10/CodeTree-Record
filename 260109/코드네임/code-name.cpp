#include <iostream>
using namespace std;

class Record {
    public:
        char name;
        int score;

        Record(char name, int score) {
            this->name = name;
            this->score = score;
        }
        Record() {}
};

int main() {
    // Please write your code here.
    char a;
    int b;
    int min = 0;
    int index;

    Record records[5];
    for(int i = 0; i < 5; i++) {
        cin >> a >> b;
        records[i] = Record(a,b);
    }

    Record record0 = records[0];
    min = record0.score;

    for(int i = 1; i < 5; i++) {
        record0 = records[i];
        if(min > record0.score) {
            min = record0.score;
            index = i;
        }
    }

    Record record1 = records[index];
    cout << record1.name << " " << record1.score;
    return 0;
}