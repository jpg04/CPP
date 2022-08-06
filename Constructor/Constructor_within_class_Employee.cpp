// defining the constructor within the class

#include <iostream>
using namespace std;

class Employee
{
    int Eid;
    string name;
    int salary;
    string company_Name;

public:
    Employee()
    {
        /* Eid = id;
        name = n;
        salary = sal;
        company_Name = cn; */

        cout << "Enter The Employee Id : " << endl;
        cin >> Eid;
        cout << "Enter The Employee Name : " << endl;
        cin >> name;
        cout << "Enter The Employee Salary : " << endl;
        cin >> salary;
        cout << "Enter The Employee's Company Name : " << endl;
        cin >> company_Name;
    }
    void show()
    {
        cout << endl
             << "Employee ID is : " << Eid << endl;
        cout << "Employee Name is : " << name << endl;
        cout << "Salary of Employee is : " << salary << endl;
        cout << "Employee's Company Name is : " << company_Name << endl;
    }
};

int main()
{
    Employee e1;
    // e1.accept();
    e1.show();
}