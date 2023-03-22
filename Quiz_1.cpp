// Antonio Olivera
// This program will convert temperture in degrees Fahrenheit to degrees celsius
// Fahrrenheit = ((9.0 / 5.0 * celsius) + 32.0; this is the equation to convert the celsius back to faherenheit 

#include <iostream>
using namespace std;

int main() {

    double Fahrenheit = 98.6;
    double celsius; 

    celsius = (5.0 / 9.0 * (Fahrenheit - 32.0)); 
    //This is the equation to convert from fahrenheit to celsius

    cout << "For a Farhrenheit temperture of 98.6 degrees, the equivalent Celsius temperture is " << celsius << " degrees." << endl;
     // this line is going to print what 98.6 fahrenheit degrees to celsius temperture. 

}
