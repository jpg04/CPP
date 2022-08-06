#include <iostream>
using namespace std;

class Operation
{
public:
    int a, b, c;
    void getNum(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

class Add : public Operation
{
public:
    void dispAdd()
    {
        c = a + b;
        cout << "Addition of a & b is : " << c << endl;
    }
};

class Sub : public Operation
{
public:
    void dispSub()
    {
        c = a - b;
        cout << "Subtraction of a & b is : " << c << endl;
    }
};

class Multi : public Operation
{
public:
    void dispMulti()
    {
        c = a * b;
        cout << "Multiplication of a & b is : " << c << endl;
    }
};

class Div : public Operation
{
public:
    void dipsDiv()
    {
        c = a / b;
        cout << "Division of a & b is : " << c << endl;
    }
};

int main()
{
    Add a;
    a.getNum(3,4);
    a.dispAdd();

    Sub s;
    s.getNum(7,5);
    s.dispSub();

    Multi m;
    m.getNum(5,4);
    m.dispMulti();

    Div d;
    d.getNum(8,2);
    d.dipsDiv();
    

    return 0;
}