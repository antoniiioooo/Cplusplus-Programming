//Antonio Olivera 
//March 8, 2023
// This program will allow the user to enter the city names and mayors and have them organized in alphbatic order 

#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
using namespace std; 


int main(){

    int num, population; 
    string city, mayor;

    string Files = ("city.txt");
    ofstream oFile;

    oFile.open(Files.c_str());

    if(oFile.fail()){
        cout << "The file was not successfully opened" << endl;
        exit(1);

    }
    
    cout << "The file is open" << endl; 

    cout << "How many cities will you be inputting: " << endl; 
    cin >> num; 

    oFile << setw(7) << "City Name " << setw(7) << " City Population " << setw(7) << " City Mayor " << endl; 
    oFile << "--------------------------------------" << endl; 
    for (int i = 0; i < num; i++){ //asking to enter city name and the population and the mayor of the city
        cout << " What is the city name: " 
        << "What is the population: " 
        << "What is the city mayor name: " 
        << endl; 
        cin >> city >> population >> mayor; 
        //outputting the informatation to the files
        oFile << city << "\t" << population << "\t" <<  mayor << endl; 
 
    }

    oFile.close(); 

    //void outputFile(ofstream& oFile, int& num, string& Files, int& population, string& city, string& mayor); 

    ifstream fileIn; 
    fileIn.open("city.txt"); //reopening the file 

    //reading the file and getting the information out the file and its going to print on the screen 
    //now we have to print in alphabetic order by the city name 
    string header, dash; 
    getline(fileIn,header);
    getline(fileIn, dash);

    cout << "City Name" << setw(5) << "Population" << setw(5) << "Mayor" << endl; 

    while(true){
        getline(fileIn, city, '\t');
        if(fileIn.eof())
            break; 

        fileIn >> population;
        fileIn.ignore();

        getline(fileIn, mayor);

        cout << city << population << mayor << endl; 

    }

    fileIn.close(); 
   
    return 0; 

}
