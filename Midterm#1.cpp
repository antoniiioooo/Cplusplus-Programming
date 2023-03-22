// Antonio Olivera
// October 19. 2022
// This was my midterm coding part and recieved a 60/60 on the midterm

#include <iostream> 
#include <iomanip> 
using namespace std; 


int main()
{
    //decalring my variables
    double hours; 
    double total; 

    //Prompting a question to the user
    cout << "Enter the Hours Worked: "; 
    cin >> hours;

    if( hours <= 40)
    {
         total = hours * 12; 
         cout << "Your Salary is $" << total;

    }
    else if (hours > 40)
    {
           int overtime;
           total = hours - 40; //we made an error here, but we had to subtract the 40 mhours from their totoal and the rest is overtime pay
           overtime = total * 17 + 480; //after finding the oovertime hours now we went ahead and timed it by 17 and added the 480 which is the pay for 40 hours 
           cout << "Your Salary is $" << overtime; 
        
    }
    return 0;

}
