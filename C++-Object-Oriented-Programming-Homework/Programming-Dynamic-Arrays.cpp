// Antonio Olivera
// March 22, 2023
// This program we will be modify the chapter 7 programming, but has to use the dynamic array of doubles for grades
// and instead of a statically declared array of doubles, to achieve the same functionality

#include <iostream>
#include <numeric>
using namespace std; 

int main(){

    int num; 
    double sum = 0; 
    double average; 

    cout << "How many grades will you be entering? " << endl; 
    cin >> num; 

    double *dynamicArray;
    dynamicArray = new double[num];

    for(int i = 0; i < num; i++){
        cout << "Enter the grade: " << endl; 
        cin >> dynamicArray[i];
        
    }

    
    //calculate the sum of the array
    for(int j = 0; j < num; j++){
        sum = sum + dynamicArray[j];
        
    }
    
    cout << "The sum: " << sum << endl; 
   
    //calculate the average
    average = sum / num;
    cout << "The average: " << average << endl; 

    cout << "List of each grades: " << endl; 
    if(int i = 0; i < num || i++){
        if(dynamicArray[i] < average){
            cout << "*" << dynamicArray[i];
        } else {
            cout << dynamicArray[i];
        }

        //displaying the ltter grade
        if(dynamicArray[i] >= 90){
            cout << "(A)" << endl;
        } else if(dynamicArray[i] >= 80){
            cout << " (B) " << endl;
        } else if(dynamicArray[i] >= 70){
            cout << " (C) " << endl;
        } else if(dynamicArray[i] >= 60){
            cout << " (D) " << endl; 
        } else {
            cout << "(F)" << endl; 
        }
    }

    delete[] dynamicArray; 

    return 0;
    
}