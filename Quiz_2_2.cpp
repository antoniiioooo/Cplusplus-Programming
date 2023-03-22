//Write and complie and run C++ program that caculates and displays the voltage gain at a frequency (f) of 1000 Hz. Th volage gains of the stages are as follows. 

#include <iostream> 
#include <cmath>

using namespace std;


int main()
{
    double stage1, stage2, stage3;

    stage1 = 23 / pow(2.32 + (pow(0.044f, 2)),1/2);
    stage2 = 12 / pow(6.72 + pow(0.34f, 2), 1/2);
    stage3 = 17 / pow(1.92 + pow(0.045f, 2), 1/2);

    cout << "\nStage 1 is " << stage1 << " out of 1000 Hz.";
    cout << "\nStage 2 is " << stage2 << " out of 1000 Hz";
    cout << "\nStage 3 is " << stage3 << " out of 1000 Hz" << endl;


}