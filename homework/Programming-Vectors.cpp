#include <iostream> 
#include <vector>
#include <numeric>
using namespace std; 

int main() {
  int idx = 0;
  vector <double> grade;
  double sum = 0;
  double average;
  
  //take inputs
  while (true) {
    double g;

    cout << "Enter the grade: ";
    cin >> g;

    if (g < 0) {
      break;
    } else {
      grade.push_back(g);
    }
  } 

  //calculating the sum 
  sum = sum = accumulate(grade.begin(), grade.end(), sum);
  cout << "sum: " << sum << endl;

  // calculating the average 
  average = sum / grade.size();
  cout << "average: " << average << endl;

  //sort
  sort(grade.begin(), grade.end());
  

  cout << "list of each grades:" << endl;
  for (int i=0; i < grade.size(); i++) {
    if (grade[i] < average) {
      cout << "*" << grade[i];
    } else {
      cout << grade[i];
    }
    
    //display letter grade
    if (grade[i] >= 90) {
      cout << " (A)" << endl;
    } else if (grade[i] >= 80) {
      cout << " (B)" << endl;
    } else if (grade[i] >= 70 ) {
      cout << " (C)" << endl;
    } else if (grade[i] >= 60) {
      cout << " (D)" << endl;
    } else {
      cout << " (F)" << endl;
    }
  }

}