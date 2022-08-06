// Inheritance is the process of accessing/deriving the properties(variables,methods)
// one class(parent) into another class(child)
// 1.Single level
// 2.Multilevel
// 3.Multiple
// 4.Hierarchical
// 5.Hybrid

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    string name;
    string address;
};

class Employee : public Person
{
public:
    int sal;
    void accept(int age, string name, string address, int sal)
    {
        this->age = age;
        this->name = name;
        this->address = address;
        this->sal = sal;
    }
    void show()
    {
        cout << "Age of Employee is :" << age << endl;
        cout << "Name of Employee is :" << name << endl;
        cout << "Address of Employee is :" << address << endl;
        cout << "Salary of Employee is : " << sal<<endl;
    }
};

int main()
{
    Employee emp;
    emp.accept(24, "Pragati", "Baramati", 1000000);
    emp.show();
    return 0;
}