#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;

        Student(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }

        Student() {}
};

bool cmd(Student a, Student b) {
    if(a.kor == b.kor) {
        if(a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // Please write your code here.
    int n;
    string name1;
    int kor1, eng1, math1;

    cin >> n;
    Student students[n];

    for(int i = 0; i < n; i++) {
        cin >> name1 >> kor1 >> eng1 >> math1;
        students[i] = Student(name1, kor1, eng1, math1);
    }

    sort(students, students+n, cmd);

    for(int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng <<  " " << students[i].math << endl;
    }
    return 0;
}