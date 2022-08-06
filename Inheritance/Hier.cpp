#include <iostream>
using namespace std;

class Shapes
{
public:
    int a, b, A;

    void getnum(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

class Rect : public Shapes
{
public:
    void getAOR()
    {
        cout << "Enter the leng :" << endl;
        cin >> a;
        cout << "Enter the wid : " << endl;
        cin >> b;
        A = a * b;
    }

    void showAOR()
    {
        cout << "Area of Rect :" << A << endl;
    }
};

class Square : public Shapes
{
public:
    void getAOS()
    {
        cout << "Enter the side :" << endl;
        cin >> a;
        cout << "Enter the side : " << endl;
        cin >> a;
        A = a * a;
    }

    void showAOS()
    {
        cout << "Area of Rect :" << A << endl;
    }
};

int main()
{
    Rect r;
    r.getAOR();
    r.showAOR();

    Square s;
    s.getAOS();
    s.showAOS();
    return 0;
}
