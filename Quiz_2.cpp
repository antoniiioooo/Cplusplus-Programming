// Antonio Olivera
// Write an dcompile and run C++ program that accepts the radius and distance measurment, calculates the volume o foil in the tank and dispalsy the two input values and calculate volume
// Equation (3.1416 * radius^2) * (200 - distance)

#include <iostream>
#include <cmath>
using namespace std;


int main()
{   // declaring my variables 
    double radius;
    double distance;
    double volume;
    double cylindrical = 200; 
    const double PI = 3.1416; // declared my pi because its a vlaue thatisnt going to be changed 

    cout << "Enter the radius (in feet): "; // print a statement to the user to enter a number 
    cin >> radius;                          // the number entered by the user will then be stored in the variable
    cout << "Enter the distance (in feet): ";
    cin >> distance;

    volume = PI * pow(radius, 2) * (cylindrical - distance); // this is the equation to find the volume

    cout << "The volume is " << volume << endl; 
 
}