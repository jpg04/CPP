/* #include <iostream>
using namespace std;

class Shapes
{
public:
    int a, b, c;
    double pi = 3.14;

    void getNum(int j,int g)
    {

        a = j;
        // b = p;
        c = g;
    }
};

class Rect : public Shapes
{
public:
    int getAOR()
    {
        int A = a * b;
        return A;
    }
};

class Square : public Shapes
{
public:
    int getAOS()
    {
        int A = a * a;
        return A;
    }
};

class Circle : public Shapes
{
public:
    int getAOC()
    {
        int A = pi * a * a;
        return A;
    }
};

int main()
{
    Rect r;
    int length, breadth;
    cout << "Enter the length and breadth of a rectangle : " << endl;
    cin >> length >> breadth;
    r.getNum(length, breadth);
    int j = r.getAOR();
    cout << "Area of the rectangle is : " << j << endl;

    Square s;
    int side;
    cout << "Enter The Sides of Square : " << endl;
    cin >> side >> side;
    s.getNum(side, side);
    int p = s.getAOS();
    cout << "Area of Square is : " << p << endl;

    Circle c;
    int radius;
    cout << "Enter The Radius of Circle : " << endl;
    cin >> radius >> radius;
    c.getNum(radius, radius);
    A = c.getAOC();
    cout << "Area of Circle is : " << A << endl;

    r.getAOR();
     r.showAOR();

    Square s;
     s.getAOS();
     s.showAOS();

     Circle c;
     c.getAOC();
     c.showAOC();
    return 0;
} */

#include <iostream>
using namespace std;
class Shape
{
public:
    int a;
    int b;
    void get_data(int n, int m)
    {
        a = n;
        b = m;
    }
};
class Rectangle : public Shape
{
public:
    int rect_area()
    {
        int result = a * b;
        return result;
    }
};
class Square : public Shape
{
public:
    int square_area()
    {
        float result = a * a;
        return result;
    }
};

class Circle : public Shape
{
public:
    int circle_area()
    {
        double pi = 3.14;
        double result = pi * a * a;
        return result;
    }
};
int main()
{
    Rectangle r;
    Square s;
    Circle c;

    int length, breadth, side, radius;
    cout << "Enter the length and breadth of a rectangle: " << endl;
    cin >> length >> breadth;
    r.get_data(length, breadth);
    int m = r.rect_area();
    cout << "Area of the rectangle is : " << m << endl;

    cout << "Enter the side Square : " << endl;
    cin >> side >> side;
    s.get_data(side, side);
    float n = s.square_area();
    cout << "Area of the Square is : " << n << endl;

    cout << "Enter the radius of circle : " << endl;
    cin >> radius >> radius;
    c.get_data(radius, radius);
    int o = c.circle_area();
    cout << "Area of Circle is : " << o << endl;
    return 0;
}