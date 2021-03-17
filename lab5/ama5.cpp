#include<iostream>
#include<iomanip>
#include<string>
#include"LinkedList.h"
using namespace std;
// Functions: main() askForValues()
// Description: gather rainfall data using a linked list
// Programmer: Austin Maung
// Date: 2/16/2021
// Version: 1.5
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
// History Log:
// 2/14/21 A.M finished ver 1.0

void askForValues(LinkedList<double> &a)
{   
    bool size_found = false;
    int size = 0;
    cout << "How many months will you enter? " << endl;
    cin >> size;
    if(size > 1){
        size_found = true;
    }
    while(!size_found){
        cout << "Enter at least 1 for the number of months: " << endl;
        cin >> size;
        if(size > 1){
            size_found = true;
        }
    }

    int index = 0;
    bool error = false;
    while(index < size)
    {
        if(error)
        {
            cout << "Rainfall must be 0 or more." << endl;
            cout << "Please re-enter: " << endl;
        }
        else
        {
            cout << "Enter the rainfall (in inches) for month #" 
            << index + 1 << ": " << endl;
            index++;
        }
        //assume input are valid values
        double val;
        cin >> val;
        a.appendNode(val);
    }
}

int main()
{
    LinkedList<double> test = LinkedList<double>();
    askForValues(test);
    cout << "The total rainfall for the period is " << test.getTotal() << " inches." << endl;
    cout << "The average rainfall for the period is " << test.getAverage() << " inches." << endl;
    cout << "The largest amount of rainfall was " << test.getLargest() << " inches in month " 
    << test.getLargestPosition() << endl;
    cout << "The smallest amount of rainfall was " << test.getSmallest() << " inches in month " 
    << test.getSmallestPosition() << endl;
}
/*
How many months will you enter? 
5
Enter the rainfall (in inches) for month #1: 
23.5
Enter the rainfall (in inches) for month #2: 
2
Enter the rainfall (in inches) for month #3: 
20.4
Enter the rainfall (in inches) for month #4: 
32
Enter the rainfall (in inches) for month #5: 
1
The total rainfall for the period is 78.9 inches.
The average rainfall for the period is 15.78 inches.
The largest amount of rainfall was 32 inches in month 4
The smallest amount of rainfall was 1 inches in month 5
*/