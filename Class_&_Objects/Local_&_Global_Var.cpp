#include<iostream>
using namespace std;

	int g = 18; //g is global variable=> bcz,it is defined outside any fun/at top of the program 

			  //as b is a global var so we can access it at anywhere in the prog
void show()
{
	cout<<"In show fun value of g is : "<<g<<endl;
}

int main()
{
	int l = 1;
	cout<<"In main function value of a : "<<l<<endl;  //a is local variable=> bcz,it is define inside the function
               							//as a is a local var so we can NOT access it at anywhere in the prog. It can be access only in this function
	cout<<"In main function value of b : "<<g<<endl;

	show();
}