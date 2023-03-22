// Antonio OLivera
// Quiz 3 Switch 

#include <iostream> 
using namespace std;

int main()
{
    // delaring the variables
    double num1, num2;
    int number;
    
    //asking user to input some numbers
    cout << "Enter two numbers of your choose: ";
    cin >> num1 >> num2;
    cout << "\n 1 for Addition ";
    cout << "\n 2 for Multiplication ";
    cout << "\n 3 for Divide ";
    cin >> number;

    // creating a if statement to do what theuser wants to do     
    if (number == 1){
        cout << num1 << " plus " << num2 << " equals to " << num1+num2;

    }
    else if (number == 2){
        cout << num1 << " times " << num2 << " equals to " << num1 * num2;
    
   }
   else if (number == 3){
    cout << num1 << " divided by " << num2 << " equals to " << num1/num2;

   }
   cout << endl;
   return 0;


}
    // This is the switch statement, same as if but in a switch method wa
    // switch (number)
   // {
     //   case 1:
       // cout << num1 << " plus " << num2 << " equals to " << num1+num2;
        //break; 

        //case 2:
        //cout << num1 << " times " << num2 << " equals to " << num1*num2;
        //break;

        //case 3:
    //    cout << num1 << " divided by " << num2 << " equals to " << num1/num2;
      //  break;
   // }
    //cout << endl;
    //return 0;

// }