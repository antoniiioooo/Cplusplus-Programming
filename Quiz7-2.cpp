// Antonio Olivera
// November 30, 2022
// Quiz 7 #2


#include <iostream> 
using namespace std; 

int findMax(int [], int); 

int main()
{
    const int NUMPTS = 5; 
    int nums[NUMPTS] = {2, 18, 1, 27, 16};

    cout << "\nThe maximum value is: " << findMax(nums, NUMPTS) << endl; 
    
    return 0;
}

int findMax(int *vals, int numels)
{
    int i, max = *vals++;

    for (i = 1; i < numels; i++, vals++)
    {
        if(max < *vals )
        max = *vals;

    }
    return max; 
}