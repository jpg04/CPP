#include<iostream>
using namespace std;

class Movie
{
    public:
    string heroName;
    string movieName;
    int reYear;
    double rating;
    string language;
};

int main()
{
    Movie m1, m2, m3,m4,m5;
    m1.heroName = "Ajay Devgan";
    m1.movieName = "Runway 34";
    m1.reYear = 2022;
    m1.rating = 7.5;
    m1.language = "Hindi";

    cout<<"Hero Name is : "<<m1.heroName<<endl;
    cout<<"Movie Name is : "<<m1.movieName<<endl;
    cout<<"Movie Release Year is : "<<m1.reYear<<endl;
    cout<<"IMDB Rating of Movie is : "<<m1.rating<<endl;
    cout<<"Movie Released Language : "<<m1.language<<endl;

    return 0;
}