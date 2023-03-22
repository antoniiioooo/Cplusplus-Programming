// Antonio Olivera
// November 24, 2022
// Quiz 6 #2, writitng a program that declares a one-dimesnsional array named "votls, current, and resistance" and will be double type,
// and that will be the size of 10 intems and will be doing a few caluations and it willl then be passed to an array to be stored and will display to the screen the numbers

#include <iostream>
#include <cmath>
using namespace std;

double calc_volts(double[], double[], double[]);

int main()
{
    int i, x, y, z;
    const int MAX = 10;
    double volts[10];
    double current[MAX] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double resistance[MAX] = {4, 8.45, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};

    calc_volts(volts, current, resistance);
    for (int x = 0; x < 10; x++)
    {
        cout << "\nThis is stored in the volts array: " << volts[x]; 
    }

    return 0;
}

double calc_volts(double volts[], double current[], double resistance[])
{

    int x, y, z;

    for (z = 0; z < 10; z++)
    {
        for (y = 0; y < 10; y++)
        {
            for (x = 0; x < 10; x++)
            {
               volts[x] = current[y] * resistance[z];
            }
        }
    }

    return z;
}
