// defining the constructor outside the class
#include<iostream>
using namespace std;

class Employee
{
    int Eid;
    string name;
    string company_Name;
    int salary;

    public:
    Employee();
    void show(); 
};

Employee :: Employee()
{
    cout<<"Enter The Employee ID :";
    cin>>Eid;
    cout<<"Enter The Name of Employee :";
    cin>>name;
    cout<<"Enter The Name of Company :";
    cin>>company_Name;
    cout<<"Enter The Salary of Employee :";
    cin>>salary;
}

void Employee :: show()
{
    cout<<endl<<"Employee ID is :"<<Eid<<endl;
    cout<<"Name of Employee is :"<<name<<endl;
    cout<<"Employee's Company Name is :"<<company_Name<<endl;
    cout<<"Salary of Employee is :"<<salary<<endl;
}

int main()
{
    Employee emp;
    emp.show();
    return 0;

}