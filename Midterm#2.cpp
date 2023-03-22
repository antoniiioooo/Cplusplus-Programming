// Antonio Olivera
// October 19, 2022

#include <iostream>  
using namespace std; 

int main ()
{

    int num1, num2, num3, num4, num5;
    int numbers;
    int maximumNumber = -1;

    //Prompting the user to enter 5 different numbers
    cout << "Enter 5 different numbers of your choice: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // the numbers will then go into the for loop and they are all being camaoered to see which number is bigger
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 )
    {
        cout << num1 << " is the maximum " << "and position is first"; 

    }
     else if (num2 > num3 && num2 > num4 && num2 > num5)
    {
        cout << num2 << " is the maximum " << "and position is second ";
    }
     else if (num3 > num4 && num3 > num5)
    {
        cout << num3 << " is the maximum " <<  "and position is third ";
    }
    else if (num4 > num5)
    {
        cout << num4 << " is the maximum " << "and position is fourth ";
    }
     else 
    {
        cout << num5 << " is the maximum " << "and position is fifth " << endl; 
    }
    return 0; 
}
