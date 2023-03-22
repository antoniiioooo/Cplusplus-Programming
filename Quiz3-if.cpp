// Antonio Olvera
// Quiz 3 
// Using the if-else statement 

#include <iostream>
using namespace std;

int main()
{
    //declarin gour variables
    double num1;

    //asking the user for some input numbers
    cout << "Enter the degress of the the angle(triangle): ";
    cin >> num1;

    //creating an if statement to see what the degree is going to be consider as
    if (num1 > 90)
    {
        cout << num1 << " its a acute angle. ";
    }
    else if (num1 < 90)
     {
         cout << num1 << " its a obtuse angle. ";
     }
    else if (num1 == 90)
     {  
         cout << num1 << " its a right angle. ";
     }
    cout << endl;

    return 0; 
}