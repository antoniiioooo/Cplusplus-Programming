//Antonio Olivera
//March 22, 2023
//Programming: Pointer Arithmetic Homework
/*(a) This program we have to declare a main() to store the following numbers in an array named 'rates' and include a function that calls to show()
that accepts rates in a parameter named rates and then display the numbers by using the pointer notation '*(rates + i)'  
(b) Modify the show() function to alter the address in rates, and always use the expression *rates rather than *(rates + i) to retrieve the correct element */

#include <iostream>
using namespace std;

void show(double *rates, int size){
    for(int i = 0; i < size; i++ ){
        //cout << "rates "  << *(rates + i) << endl;  
        //*(rates++) for part b
        cout << "rates: " << *(rates++) << endl;

    }

    return;
}


int main(){
    double rates[] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

    show(rates, 9 ); 
    
    return 0;
}






