	#include<iostream>
using namespace std;

class Student
{	
	public:
	int rno;
	string name;
	bool feePaid;
};

int main()
{	
	Student s1, s2;
	s1.rno=18;
	s1.name="Jaydeep Popat Godase";
	s1.feePaid=true;
	cout<<"Student s1 Roll Number is : "<<s1.rno<<endl;
	cout<<"Student s1 Name is : "<<s1.name<<endl;
	cout<<"Student Fees Information Paid or Not : "<<s1.feePaid<<endl;
}