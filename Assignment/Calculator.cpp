#include<iostream>
using namespace std;
int main()
{
    int choice ,a,b;
    // const double pi=3.14;
    cout<<"Enter The First Number : "<<endl;
    cin>>a;
    cout<<"Enter The Second Number : "<<endl;
    cin>>b;
    cout<<"Enter Your Choice : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1: cout<<"Addition is : "<<a+b<<endl;
        /* code */
        break;
    case 2: cout<<"Subtraction is : "<<a-b<<endl;
        break;
    case 3: cout<<"Multiplication is : "<<a*b<<endl;
        break;
    case 4: cout<<"Division is : " <<a/b<<endl;
        break;
    default: cout<<"Please Enter The Valid Operation";
        break;
    }

}