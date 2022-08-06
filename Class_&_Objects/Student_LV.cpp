#include<iostream>
using  namespace std;
class Student
{
	public:
	int rno;
	string name;
	bool feePaid;
	
	void accept(int r, string n, bool fee) //Here accept function used to initialize instance variable of the class
	{
		rno=r;
		name=n;
		feePaid=fee;
		
	}
	
	void show()
	{
		cout<<"Roll Number of Student is: "<<rno<<endl;
		cout<<"Name of Student is : "<<name<<endl;
		cout<<"Fees Paid by Student :  "<<feePaid<<endl;
	}		
	
};


int main()
{
	Student s1,s2;
	s1.accept(94,"Pragati",true);
	s1.show();
}