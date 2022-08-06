#include <iostream>
using namespace std;

class Book
{
public:
    int bookId;
    string name;
    double price;

    void getData(int bookId, string name, double price)
    {
        this->bookId = bookId;
        this->name = name;
        this->price = price;
    }

    void putData()
    {
        cout << "Book ID is : " << bookId << endl;
        cout << "Book Name is : " << name << endl;
        cout << "Price of Book is : " << price << endl;
        cout << "Address of Object is :" << this;
    }
};

int main()
{
    Book b1, b2, b3;

    b1.getData(101101, "C Programming By Ajay Mittal", 700);
    b1.putData();

    return 0;
}

// this pointer=>used to refer current instance/object of the class
//=> used to refer current instance var of the class
// whenever we have same name for local and instance var in taht case we can use this pointer with instance var
// assigning the value of local var to the instance var
// here,we are printing the address of object