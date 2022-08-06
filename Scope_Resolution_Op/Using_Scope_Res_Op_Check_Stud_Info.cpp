#include<iostream>
using namespace std;

class StudentSR
{
	public:
	int rno;
	string name;
	bool feePaid;
	void accept(int r, string n, bool fee);
	void show();
};

void StudentSR::accept(int r, string n, bool fee)
{
	rno=r;
	name=n;
	feePaid=fee;
}
void StudentSR::show()
{
	cout<<"Student Roll Number is :"<<rno<<endl;
	cout<<"Student Name is : "<<name<<endl;
	cout<<"Fees Paid by Student :"<<feePaid;
}

int main()
{
	StudentSR s1;
	
	s1.accept(18,"Jaydeep",true);
	s1.show();
}