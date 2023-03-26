// Antonio Olivera 
// Februaru 8, 2023
// Homework #1 and the assignment is based on functions 

#include <iostream> 
#include <cmath> 
using namespace std; 


int convertdays(int month, int day, int year)
{
     int date = year * 10000 + month * 100 + day; 
    
    return date; 

}

int main ()
{
    int month, day, year; 

    cout << "Enter the month number: ";
    cin >> month; 

    cout << "Enter the date nunber: ";
    cin >> day; 

    cout << "Enter the year number: ";
    cin >> year ; 

    cout << month << "/" << day << "/" << year << endl; 

    cout << convertdays(month,day,year); 


    return 0; 

}

