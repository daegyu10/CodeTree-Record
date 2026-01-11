#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int score1, score2, score3;

        Student(string name, int score1, int score2, int score3) {
            this->name = name;
            this->score1 = score1;
            this->score2 = score2;
            this->score3 = score3;
        }

        Student() {}
};

bool cmd(Student a, Student b) {
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    // Please write your code here.
    int n;
    string name1;
    int scorea, scoreb, scorec;

    cin >> n;
    Student students[n];

    for(int i = 0; i < n; i++) {
        cin >> name1 >> scorea >> scoreb >> scorec;
        students[i] = Student(name1, scorea, scoreb, scorec);
    }

    sort(students, students+n, cmd);

    for(int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].score1 << " " << students[i].score2 << " " << students[i].score3 << endl;
    }
    return 0;
}