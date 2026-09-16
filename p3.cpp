#include <iostream>
using namespace std;

class Patient {
public:
    int pid;
    string name;

    static int count;

    Patient(int patientId, string n) {
        pid = patientId;
        name = n;
        count++;
    }

    static void showActivePatients() {
        cout << "Number of patients are: " << count << endl;
    }

    ~Patient() {
        count--;
        cout << "One pateint is discharged..." << endl;
    }
};

int Patient::count = 0;

int main() {

    Patient p1(101, "Abhay");
    Patient p2(102, "Avinash");

    Patient::showActivePatients();

    {
        Patient p3(103, "Aditya");
        Patient::showActivePatients();
    }

    Patient::showActivePatients();

    return 0;
}