// Antonio Olivera
// March 13, 2023
// Homework Programming: Character Manipulation Implementation
// This program will take a sentence in and will fix the spaces between the words and fix random uppercase letters and outout the sentence correclty back on the screen.

#include <iostream>
#include <string>
using namespace std;

int main(){

    string input;
    

    cout << "Enter your setences of choice: " << endl; // prompting on the screen to enter the sentence of choice
    getline(cin, input);

    // checking to see if the first letter in the sentence is capitalized
    if (!input.empty())
    {
        input[0] = toupper(input[0]);
    }

    for (int i = 0; i < input.length(); i++){

        if (input[i] == '.'){
            bool capitalize_next = true;

            for (int j = 0; j <= i; j++){

                if (input[j] == ' ' || input[j] == '.'){

                    if (capitalize_next){
                        cout << (char)toupper(input[j + 1]);
                        capitalize_next = false;
                }
                    else {
                     cout << input[j];
                }
            }
                else {
                    cout << (char)tolower(input[j]);
                    capitalize_next = false;
                }
            }

        cout << endl;
        input.erase(0, i + 1);
        i = -1;

        if (!input.empty()){
            input[0] = toupper(input[0]);
        }

        
        }
    }

    return 0;

}
