#include <iostream> 
using namespace std;
 

void times (int seconds, int &hours, int &mins, int &secs )
 {
    hours = seconds / 3600;
    seconds = seconds / 3600;
    mins = seconds / 60; 
    secs = seconds / 60; 


 }

 int main()
 {
    int hours = 0; 
    int mins = 0; 
    int secs = 0;
    int seconds = 0; 

    times (seconds, hours, mins, secs);
    cout << seconds << " seconds = " << hours << " hours, " << mins << " mins, " << secs << " seconds" << endl;

    return 0; 


 }

 