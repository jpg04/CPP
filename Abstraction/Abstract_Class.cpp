#include <iostream>
using namespace std;

class Abc
{
public:
    void info()
    {
        cout << endl
             << "Here is some general information" << endl;
    }

    virtual void put();
    virtual void disp();
};

class Pqr : public Abc
{
public:
    void put()
    {
        cout << "Another General info" << endl;
    }
};

class Xyz : public Pqr
{
public:
    void disp()
    {
        cout << "Somthing different from the the another information" << endl
             << endl;
    }
};

int main()
{
    Xyz x;
    x.info();
    x.put();
    x.disp();

    Abc *a;
    a = &x;
    a->info();
    a->put();
    a->disp();
    return 0;
}

// Abstraction
// 1.the process of hiding implementation details from teh user and showing only functionality to user is ca;lled as abstraction
// 2.to implement the concept of abstractoion in the programming we need to define abstract classes
// 3.we cannot create an object of abstract class bcz,this class consists
// of pure virtual fun(incomplete function)
// 4.but we can create referece variable of abstarct class
// Abc is an abstract class bcz,it consists of pure virtual function
// the function which has declaration and definition in one class,called as concrete fun
// the function which has declaration in one class and definition in another class,called as pure virtual fun
// Pqr is an abstract class bcz,it consists of pure virtual function
// here,a1 is a ref var/pointer of Abc class
// here, a1 is pointing to an address of x1(object)
// error => bcz, msg is own function of Xyz,a1 is the ref var Abc