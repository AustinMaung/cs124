#include<iostream>
#include<iomanip>
#include<string>
#include"amDynStk.h"
using namespace std;
// Functions: main()
// Description: implements a stack in c++
// Programmer: Austin Maung
// Date: 2/29/2021
// Version: 1.5
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
int main()
{
    Stack<double> test = Stack<double>();
    test.push(14.1);
    test.push(9.3);
    test.push(25.7);
    test.push(3.14);
    test.push(2.75);
    cout << "Popping..." << endl;
    for(int i = 0; i < 6; i++)
    {
        test.pop();
    }
}
/*
Pushing 14.1
Pushing 9.3
Pushing 25.7
Pushing 3.14
Pushing 2.75
Popping...
2.75
3.14
25.7
9.3
14.1
*/