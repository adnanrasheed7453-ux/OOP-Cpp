#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display(Student arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Name: " << arr[i].name << endl;
            cout << "Roll No: " << arr[i].rollNo << endl;
            cout << "Marks: " << arr[i].marks << endl;
            cout << "-------------------" << endl;
        }
    }
};

int main() {

    Student s[3] = {
        {"Adnan", 101, 96.0},
        {"Ali", 102, 88.0},
        {"Luqman", 103, 91.0}
    };

    s[0].display(s, 3);

    return 0;
}
