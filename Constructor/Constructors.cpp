#include <iostream>
using namespace std;

class Book
{
public:
    int bookId;
    string bookName;
    double price;

    Book(int bookId, string bookName, double price)
    {
        this->bookId = bookId;
        this->bookName = bookName;
        this->price = price;    
    }
    Book(const Book &b1)
    {
        bookId = b1.bookId;
        bookName = b1.bookName;
        price = b1.price;
    }

    void putData()
    {
        cout << "Book ID is :" << bookId << endl;
        cout << "Book Name is: " << bookName << endl;
        cout << "Price of Book : " << price << endl<<endl;
    }
};

int main()
{
    Book b1(101, "C++ Programmming Language", 700);
    Book b2 = b1;
    b1.putData();
    b2.putData();
    return 0;
}

// 1.Constructor is special type of function,having same name as a class name
// 2. Constructor does not have any return type
// 3. Constructor is used to initialize the instance var of the class
// Types of constructor
// 1.default cons
// 2.parameterized cons
// 3.copy cons
// the cosntructor which does NOT accept any parameters are called as default constructor
// the constructor which does accepts some parameters are called as parameterized constructor

// here,cp object is creating by calling parameterized constructor that why it has a diff values compare to cpp,java
// but cpp and java both objects are creating by calling default constructor thats both objects has same values