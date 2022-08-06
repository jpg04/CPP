#include <iostream>
using namespace std;

class Stud
{
public:
    int rno;
    string sname;

    void getStudInfo()
    {
        cout << "Enter Student Roll Number:" << endl;
        cin >> rno;
        cout << "Enter Student Name : " << endl;
        cin >> sname;
    }
    void displayStudInfo()
    {
        cout << "Roll Number of Student is : " << rno << endl;
        cout << "Name of Student is : " << sname << endl;
    }
};

class Marks : public Stud
{
public:
    double C, CPP;

    void getMarks()
    {
        cout << "Enter C Lang Subject Marks :  " << endl;
        cin >> C;
        cout << "Enter CPP Subject Marks :  " << endl;
        cin >> CPP;
    }

    void dispplayMarks()
    {
        cout << "C Lang Marks is : " << C << endl;
        cout << "CPP Lang Marks is : " << CPP << endl;
    }
};

class Sports
{
public:
    string sport_name, sport_type;

    void getSportInfo()
    {
        cout << "Enter Sport Name : " << endl;
        cin >> sport_name;
        cout << "Enter The Sport Type : " << endl;
        cin >> sport_type;
    }

    void displaySportInfo()
    {
        cout << "Sport Name is : " << sport_name << endl;
        cout << "Sport Type is : " << sport_type << endl;
    }
};

class Result : public Marks, public Sports
{
public:
    void displayAvg()
    {
        double avg = ((C + CPP) / 2);

        if (avg < 35)
        {
            cout << "You got " << avg << " marks in the exam so you are FAIL in the EXAM" << endl;
        }
        else
        {
            cout << "You got " << avg << " marks in the exam CONGRATULATIONS you are PASS" << endl;
        }
    }
};

int main()
{
    Result r;
    r.getStudInfo();
    r.displayStudInfo();
    r.getMarks();
    r.dispplayMarks();
    r.getSportInfo();
    r.displaySportInfo();
    r.displayAvg();
    return 0;
}