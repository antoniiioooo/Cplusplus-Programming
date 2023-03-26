//Antonio Olivera
//February 27, 2023
//This progeam is going to be implementing a grade report with student id numbers and the class names and names of the student and their grades should also appear

#include <iostream> 
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main (){

    ifstream myFile; 
    const string filename = "reports.txt"; 

    ofstream outFile(filename.c_str()); 

    //checking to see if the file exists and is open
    if (outFile.fail()){
        cout << "\nThe file named " //<< filename
        << " was not successfully opened"
        << "\n Please check that tghe file currently exists."
        << endl;
        exit(1);

    }
        cout << "\nThe file has been succesfully opened for reading.\n" << endl; 

    //the information that was given to store in the file 
    outFile << "Student ID Number" << "   " << "Student Name" << "   " << "Course Code" << "   " << "Course Credits" << "   " << "Course Grade" << endl; 
    outFile << "-----------------" << "   " << "------------" << "   " << "-----------" << "   " << "--------------" << "   " << "------------" << endl; 
    outFile << "2333021" << "             " << "Bokow, R." << "         " << "NS201" << "        " << "3" << "                " << "A" << endl;
    outFile << "2333021" << "             " << "Bokow, R." << "        " << "MG342" << "         " << "3" << "                " << "A" << endl;
    outFile << "2333021" << "             " << "Bokow, R." << "        " << "FA302" << "         " << "1" << "                " << "A" << endl;
    outFile << "2574063" << "             " << "Fallin, D." << "       " << "MK106" << "         " << "3" << "                " << "C" << endl;
    outFile << "2574063" << "             " << "Fallin, D." << "       " << "MA205" << "         " << "3" << "                " << "B" << endl;
    outFile << "2574063" << "             " << "Fallin, D." << "       " << "CM201" << "         " << "3" << "                " << "C" << endl;
    outFile << "2574063" << "             " << "Fallin, D." << "       " << "CP101" << "         " << "2" << "                " << "B" << endl;
    outFile << "2663628" << "             " << "Kingsley, M." << "     " << "QA140" << "         " << "3" << "                " << "A" << endl;
    outFile << "2663628" << "             " << "Kingsley, M." << "     " << "CM245" << "         " << "3" << "                " << "B" << endl;
    outFile << "2663628" << "             " << "Kingsley, M." << "     " << "EQ521" << "         " << "3" << "                " << "A" << endl;
    outFile << "2663628" << "             " << "Kingsley, M." << "     " << "MK341" << "         " << "3" << "                " << "A" << endl;
    outFile << "2663628" << "             " << "Kingsley, M." << "     " << "CP101" << "         " << "2" << "                " << "B" << endl;

    outFile.close();

    return 0; 

}