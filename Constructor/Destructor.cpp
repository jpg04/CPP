#include <iostream>
using namespace std;

class Mobile
{
public:
    string model_no;
    string mobile_comp_name;
    int mobile_price;

    Mobile(string model_no, string mobile_comp_name, int mobile_price)
    {
        this->model_no = model_no;
        this->mobile_comp_name = mobile_comp_name;
        this->mobile_price = mobile_price;
    }

    Mobile(const Mobile &mob1)
    {
        model_no = mob1.model_no;
        mobile_comp_name = mob1.mobile_comp_name;
        mobile_price = mob1.mobile_price;
    }

    ~Mobile()
    {
        cout<<"Destuctor is Called for Destroy The Object"<<endl;
    }
    void show()
    {
        cout << "Model Number of Mobile is : " << model_no << endl;
        cout << "Mobile Company Name is : " << mobile_comp_name << endl;
        cout << "Price of Mobile is : " << mobile_price << endl<<endl;
    }
};

int main()
{
    Mobile mob1("Nothing Phone(1)", "Nothing", 38999);
    Mobile mob2 = mob1;
    mob1.show();
    mob2.show();

    return 0;
}