//Antonio Olivera
//February 23, 2023
//Homework #2 and its based on arrays and finding the average for the grades that are being entered and having to display the grading scale

#include <iostream> 
#include <cmath>
using namespace std; 

int main()
{
    //declaring the arrays that are needed 
    const int NUM = 30;
    double grade[NUM];
    double sum = 0, average; 

    for(int i = 0; i < NUM; i++)
    {
       //asking the user to input the grades and its being storesd in the array 
        cout << "Enter the grade (enter 0 to stop): " << endl; 
        cin >> grade[i]; 

        sum = sum + grade[i];  //adding up the grades
        average = sum / sizeof(grade[i]); //adding the sum and then dividing the amout of grade that were entered 
    if (grade[i] <= 0)
        break; 

    else if (grade[i] <= 0) //once the user has entered '0' it will break out the for loop and stop storing data in the array 
        break; 

    }

    cout << "This is the sum: " << sum << endl; //this will prompt the user the sum of all the grades that were entered earlier 

    cout << "This is the average of the grades: " << average << endl; //this will prompt the user the average of the entire grades 

    for (int i = 0; i <= sizeof(grade[i] +1); i++)
    {
        if (grade[i] < average) //if the grade is below average then it will be printed with a '*'
        {
            cout << " * " << grade[i] << endl; 

        }
        else if (grade[i] >= average) //if the grade is higher than the average then it will be printed but without the '*' 
        {
            cout << grade[i] << endl; 

        }

        }

    for (int i = 0; i <= (sizeof(grade[i])+1); i++){ //this for loop is two print out the grade that was antered and determined a letter grade for it 
				if (grade[i] >= 90){
				cout << grade[i] << ':' << 'A' << endl;
			    }
				if (grade[i] >= 80 && grade[i] <= 90){
					cout << grade[i] << ':' << 'B' << endl;
				}	
				if (grade[i] >= 70 && grade[i] <= 80){
					cout << grade[i] << ':' << 'C' << endl;
				}	
				if (grade[i] >= 60 && grade[i] <=70){
					cout << grade[i] << ':' << 'D' << endl;
				}
				if (grade[i] < 60){
					cout << grade[i] << ':' << 'F' << endl;
				}
			}

   return 0; 
}



