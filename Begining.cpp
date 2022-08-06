#include <iostream>  //library => collection of classes(otsream=>cout,istream=> cin)
using namespace std; // namespace is collection of identifires and group of elements such as data types and variables which we are not declaring in our directly in program bcz its already declared in a program//this std namespace consists of the declaration of cout and cin object..that's why we need to use it in the programming
int main()
{
    int a, b;
    // << insertion << extraction op
    cout << "Enter The Two Numbers : " << endl; // cout ostream, cin istream both are iostream library objects
    cin >> a >> b;
    int c = a + b;
    cout << "Addition is : " << c;
    return 0;
}