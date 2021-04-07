#include<iostream>
#include<string>
#include"paren.h"
using namespace std;

// Functions: main()
// Description: checks if user inputted strings have balanced parenthesis.
//     Also validates if the strings have parenthesis.
// Programmer: Austin Maung
// Date: 4/4/2021
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code

int main(){
    bool run = true;
    string input;

    cout << "EVALUATING EXPRESSION PARENTHESIS" << endl;
    cout << "This program will detect unbalanced expression parentheses."
    << endl;
    while(true)
    {
        cout << "Type in a string with some parenthesis:";
        getline(cin, input);
        if(has_parenthesis(input))
        {
            break;
        }
    }
    if(read_parenthesis(input))
    {
        cout << "The string has balanced parentheses." << endl;
        
    }
    else
    {
        cout << "The string does not have balanced parentheses." << endl;
    }
    
    return 0;
}
/* TEST RUN - VALIDATE USER INPUT; UNMATCHED LEFT PAREN
EVALUATING EXPRESSION PARENTHESIS
This program will detect unbalanced expression parentheses.
Type in a string with some parenthesis: test1
Type in a string with some parenthesis: tset(
The string does not have balanced parentheses. */

/* TEST RUN 2 - UNMATCHED RIGHT PAREN 
EVALUATING EXPRESSION PARENTHESIS
This program will detect unbalanced expression parentheses.
Type in a string with some parenthesis: )
The string does not have balanced parentheses. */

/* TEST RUN - UNMATCHED RIGHT PAREN 
EVALUATING EXPRESSION PARENTHESIS
This program will detect unbalanced expression parentheses.
Type in a string with some parenthesis:(90 * 2) + 4) 
The string does not have balanced parentheses. */

/* TEST RUN - UNMATCHED LEFT PAREN 
EVALUATING EXPRESSION PARENTHESIS
This program will detect unbalanced expression parentheses.
Type in a string with some parenthesis:6((g + h) * 70        
The string does not have balanced parentheses. */

/* TEST RUN - MATCHED PARENS 
EVALUATING EXPRESSION PARENTHESIS
This program will detect unbalanced expression parentheses.
Type in a string with some parenthesis:(((11 + 12) * 543 ) / 7) 
The string has balanced parentheses. */

