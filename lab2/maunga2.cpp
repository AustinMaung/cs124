#include<iostream>
#include"rain.h"
using namespace std;
// Functions: main()
// Description: gathers, sort, and retrieve important info about rainfall figures
// Programmer: Austin Maung
// Date: 2/13/2021
// Version: 1.5
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
// History Log:
// 2/13/21 A.M finished ver 1.0

int main() {
    //gathering data
    const int SIZE = 12;
    double vals[SIZE];
    ask_for_values(vals,SIZE);
    //printing important information
    cout << endl;
    cout << "The total rainfall for the year is " 
    << get_total(vals,SIZE) << " inches." << endl;
    cout << "The average rainfall for the year is " 
    << get_average(vals,SIZE) << " inches." << endl; 
    cout << "The largest amount of rainfall was " 
    << vals[max_position(vals,0,SIZE - 1)] << " inches in month " 
    << max_position(vals,0,SIZE - 1) + 1 << "." << endl;
    cout << "The smallest amount of rainfall was " 
    << vals[min_position(vals,0,SIZE - 1)] << " inches in month " 
    << min_position(vals,0,SIZE - 1) + 1 << "." << endl;
    cout << endl;
    //sorting and printing the sorted array
    selection_sort(vals,SIZE);
    cout << "Here are the rainfall amounts in ascending order:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << vals[i] << endl;
    }
    return 0;
}
/*
Enter the rainfall (in inches) for month #1: 
2
Enter the rainfall (in inches) for month #2: 
3
Enter the rainfall (in inches) for month #3: 
56
Enter the rainfall (in inches) for month #4: 
43
Enter the rainfall (in inches) for month #5: 
23
Enter the rainfall (in inches) for month #6: 
-2
Rainfall must be 0 or more.
Please re-enter:
46
Enter the rainfall (in inches) for month #7: 
23
Enter the rainfall (in inches) for month #8: 
94
Enter the rainfall (in inches) for month #9: 
0
Enter the rainfall (in inches) for month #10: 
1000
Enter the rainfall (in inches) for month #11: 
2
Enter the rainfall (in inches) for month #12: 
-1
Rainfall must be 0 or more.
Please re-enter:
7

The total rainfall for the year is 1299 inches.
The average rainfall for the year is 108.25 inches.
The largest amount of rainfall was 1000 inches in month 10.
The smallest amount of rainfall was 0 inches in month 9.

Here are the rainfall amounts in ascending order:
0
2
2
3
7
23
23
43
46
56
94
1000
*/