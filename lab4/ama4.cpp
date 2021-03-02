#include<iostream>
#include<string>
#include"ama4.h"
using namespace std;
// Functions: main()
// Description: prints the minimum of an array using templates
// Programmer: Austin Maung
// Date: 2/27/2021
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
// History Log:
// 2/27/21 A.M finished ver 1.0

int main()
{
    int const SIZE = 2;
    string a[SIZE] = {"x", "A"};
    int b[SIZE] = {149, 182};
    double c[SIZE] = {56.7, 11.3};
    string d[SIZE] = {"f","F"};
    int e[SIZE] = {-1, 0};
    double f[SIZE] = {100, 110.3};
    printMin(a, SIZE);
    printMin(b, SIZE);
    printMin(c, SIZE);
    printMin(d, SIZE);
    printMin(e, SIZE);
    printMin(f, SIZE);
}
/*
Smaller of x and A: A
Smaller of 149 and 182: 149
Smaller of 56.7 and 11.3: 11.3
Smaller of f and F: F
Smaller of -1 and 0: -1
Smaller of 100 and 110.3: 100
*/