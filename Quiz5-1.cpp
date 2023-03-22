// Antonio Olivera
// November 7, 2022
// Quiz 5 #2

#include <iostream>
using namespace std;

int findMax(int, int);

int main()
{
    int firstnum, secnum, max;

    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;

    max = findMax(firstnum, secnum);

    cout << "\nThe maximum of the two numbers is " << max << endl;
    return 0;
}

int findMax(int x, int y)
{
    int maxnum;

    if (x >= y)
        maxnum = x;
    else
        maxnum = y;

    return maxnum;
}
