#include<iostream>
using namespace std;

class MobileApp
{
    public:
    void create()
    {
        cout<<"Assignment..!! You Have to develope Mobile Application"<<endl;
    }
    

    virtual void galleryFun()=0;
    virtual void videoFun()=0;
    virtual void audioFun()=0;
    virtual void callFun()=0;
};

class Pragati : public MobileApp
{
    public:
    void galleryFun()
    {
        cout<<"Done With the Gallery Functionality"<<endl;
    }

    void videoFun()
    {
        cout<<"Done With the Video Functionality"<<endl;
    }
};

class Jaydeep : public Pragati
{
    public:
    void audioFun()
    {
        cout<<"Done With the Audio Functinality"<<endl;

    }
};

class Prajkta : public Jaydeep
{
    public:
    void callFun()
    {
        cout<<"Done with the Calling Functinality"<<endl;

    }
};


int main()
{
    Prajkta p;
    p.create();
    p.galleryFun();
    p.videoFun();
    p.audioFun();
    p.callFun();



    return 0;
}