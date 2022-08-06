#include <iostream>
using namespace std;

class Clg
{   
protected: // protected data can be accessible within child class only
    string clgName;
    string clgAddresss;

    void about()
    {
        cout << "*****One of Best College For Management Studies*****" << endl
             << endl;
    }
};
class Dept : public Clg
{
public:
    int noOfDept;
    string deptName;

    void nature()
    {
        cout << "*****Engaging In a Deep and Richly Entertaining Study of Sampus*****" << endl
             << endl;
    }
};
class Stud : public Dept
{
public:
    int noOfStud;

    Stud(string clgName, string clgAddresss, int noOfDept, string deptName, int noOfStud)
    {
        this->clgName = clgName;
        this->clgAddresss = clgAddresss;
        this->noOfDept = noOfDept;
        this->deptName = deptName;
        this->noOfStud = noOfStud;
    }
    void putInfo()
    {
        about();
        nature(); // function chaining=>we about() fun here bcz,we can't call it in main(),as it is declared as a protected in EleDevic
        cout << "Name of College is : " << clgName << endl;
        cout << "Address of College is : " << clgAddresss << endl;
        cout << "Number of Department in The College : " << noOfDept << endl;
        cout << "Name of The Departments : " << deptName << endl;
        cout << "Strength of The Student in Both Department : " << noOfStud << endl;
    }
};

int main()
{
    Stud s("D Y Patil Institute of Management", "Akurdi", 2, "MBA, MCA", 300);
    s.putInfo();
    return 0;
}