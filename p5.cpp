#include <iostream>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    int salary;

public:
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
        cout << "Default constructor is called!!" << endl;
    }

    Employee(int eId, string n, int s) {
        employeeId = eId;
        name = n;
        salary = s;
    }

    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }

    void updateSalary(int s) {
        salary = s;
    }
    
};

int main() {

    const Employee e1(101, "Shreya", 240000);

    e1.display();

    Employee e2(e1);

    e2.updateSalary(280000);
    e2.display();

    return 0;
}