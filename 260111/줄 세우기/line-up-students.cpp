#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int height;
        int weight;
        int number;

        Student(int height, int weight, int number) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }

        Student() {}
};

bool cmd(Student a, Student b) {
    if(a.height == b.height) {
        if(a.weight == b.weight) {
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    // Please write your code here.
    int n;
    int h, w;
    cin >> n;

    Student students[n];
    for(int i = 0; i < n; i++) {
        cin >> h >> w;
        students[i] = Student(h,w,i+1);
    }

    sort(students, students+n, cmd);

    for(int i = 0; i < n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << endl;
    }
    return 0;
}