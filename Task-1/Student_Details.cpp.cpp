#include<iostream>
using namespace std;

class student {
    
private:
    int Roll;
    double Marks;
    string name;

public:
    void input() {
        cout << "Enter Name:" << endl;
        getline(cin, name);

        cout << "Enter Roll:" << endl;
        cin >> Roll;

        cout << "Enter Marks:" << endl;
        cin >> Marks;

        cin.ignore();
    }

    void Display() {
        cout << endl << "===== Student Details =====" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << Roll << endl;
        cout << "Marks: " << Marks << endl;
        cout << "===========================" << endl;
    }
};

int main() {

    student s[3];

    for(int i = 0; i < 3; i++) {
        cout << endl << "Enter Student " << i + 1 << " Details" << endl;
        s[i].input();
    }

    for(int i = 0; i < 3; i++) {
        s[i].Display();
    }

    return 0;
}
