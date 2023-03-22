// Antonio Olivera 
// November 7. 2022
// This is on the quiz #5 and this for the passing the value 

#include <iostream>
using namespace std;

float get_radius(double c)
{
    double r;
    r = c / (2 * 3.14);
    return r;

}

float area(double c)
{
    double r, a; 
    r = get_radius(c);
    a = 3.14 * r * r;
    return a;

}

int main()
{
    double c;

    cout << "Enter the Circumference: ";
    cin >> c;
    cout << "Radius: " << get_radius(c) << endl;
    cout << "Area: " << area(c) << endl;
    return 0;

}

