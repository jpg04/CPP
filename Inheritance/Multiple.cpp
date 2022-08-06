#include<iostream>
using namespace std;

class Comp_Dept
{
    public:
    int numOfComp;
    void programming()
    {
        cout<<endl<<"We are Writing Code Here"<<endl<<endl;
    }
};

class Mech_Dept
{
    public:
    int numOfMachines;
    void machine()
    {
        cout<<"Satisfaction...!! When You are Mechanical Engineer"<<endl<<endl;

    }
};

class Elec_Dept
{
    public:
    int numOfDevices;
    void devices()
    {
        cout<<"Playing With The Electronic Gadget"<<endl<<endl;
    }
};

class Dept : public Comp_Dept, public Mech_Dept, public Elec_Dept
{
    public:

    void getDept(int numOfComp,int numOfMachines, int numOfDevices)
    {
        this->numOfComp=numOfComp;
        this->numOfMachines=numOfMachines;
        this->numOfDevices=numOfDevices;

    }

    void disp()
    {
        cout<<"Number of Computers Present in The Computer Department : "<<numOfComp<<endl;
        cout<<"Number of Machines Present in The Mechanical Department : "<<numOfMachines<<endl;
        cout<<"Number of Electronic Devices Present in The Electronic Department : "<<numOfDevices<<endl<<endl;
    }
};


int main()
{
    Dept d;
    d.programming();
    d.machine();
    d.devices();
    d.getDept(50,150,500);
    d.disp();
    
    return 0;
}