// Antonio Olivera
// November 30, 2022
// Quiz 7, #1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int MAX = 10;
    double miles[MAX] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    double gallons[MAX] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    double mpg[MAX];

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            *(mpg + i) = *(miles + i) / *(gallons + i);
        }
    }

    for (int k = 0; k < MAX; k++)
    {
        cout << "The mpg array is: " << *(mpg + k) << endl;
    }
    return 0;
}