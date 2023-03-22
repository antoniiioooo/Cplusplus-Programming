// Antonio Olivera
// November 24, 2022
// Quiz 6 based on number one where we write a program to output the following values that are in the array named 'volts' and then
// have it be display into a specififc order.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMN = 3;
    double volts[ROWS][COLUMN] = {11.95, 16.32, 12.15, 8.22, 15.89, 26.22, 13.54, 6.45, 17.59};

    for (int z = 0; z < ROWS; z++)
    {
        cout << endl;

        for (int x = 0; x < COLUMN; x++)
        {
            cout << setw(7) << volts[z][x];
            
        }
    }
    cout << endl; 
    return 0; 
}
