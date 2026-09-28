#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double salary;
    int age;

public:
    Employee()
    {
        name = "";
        salary = 0;
        age = 0;
    }

    Employee(string n, double s, int a)
    {
        name = n;
        salary = s;
        age = a;
    }

    void checkBonus()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Age: " << age << endl;

        if (salary >= 50000)
            cout << "Bonus: Eligible" << endl;
        else
            cout << "Bonus: Not Eligible" << endl;

        cout << endl;
    }

    string getName()
    {
        return name;
    }

    double getSalary()
    {
        return salary;
    }

    int getAge()
    {
        return age;
    }
};

int findHighest(Employee e[])
{
    int highest = 0;

    for (int i = 1; i < 5; i++)
    {
        if (e[i].getSalary() > e[highest].getSalary())
        {
            highest = i;
        }
    }

    return highest;
}

int main()
{
    Employee e[5] =
    {
        Employee("Ali", 45000, 25),
        Employee("Adnan", 60000, 30),
        Employee("Usman", 55000, 28),
        Employee("Hamza", 40000, 24),
        Employee("Bilal", 75000, 32)
    };

    for (int i = 0; i < 5; i++)
    {
        e[i].checkBonus();
    }

    int index = findHighest(e);

    cout << "Highest Paid Employee:" << endl;
    cout << "Name: " << e[index].getName() << endl;
    cout << "Salary: " << e[index].getSalary() << endl;

    return 0;
}
