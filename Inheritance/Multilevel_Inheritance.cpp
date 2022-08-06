#include<iostream>
using namespace std;

class Languages 
{
    public:
    string lname;
};

class Programming_Language : public Languages
{
    public:
    string lang_type;

};

class Lang_Book : public Programming_Language
{
    public:
    string bookName;

    void accept(string lname, string lang_type, string bookName)
    {
        this->lname=lname;
        this->lang_type=lang_type;
        this->bookName=bookName;
    }

    void disp()
    {
        cout<<"Language Name is : "<<lname<<endl;
        cout<<"Type of Language is : "<<lang_type<<endl;
        cout<<"Book Name is :"<<bookName<<endl;

    }
};

int main()
{

    Lang_Book p;
    p.accept("C Language","Native Level","Let us C by Yashwant Kanetkar");
    p.disp();
    return 0;
}