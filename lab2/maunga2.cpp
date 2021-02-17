#include<iostream>
#include"rain.h"

using namespace std;

int main() {
    const int SIZE = 12;
    double vals[SIZE] = {0,0,1,3,6,8,77,2,1,1.5,3.5,66.9};
    cout << "The total rainfall for the year is " << get_total(vals,SIZE) << " inches." << endl;
    cout << "The average rainfall for the year is " << get_average(vals,SIZE) << " inches." << endl; 
    cout << "The largest amount of rainfall was " << vals[max_position(vals,0,SIZE)] << "inches in month " << max_position(vals,0,SIZE) + 1 << "." << endl;
    cout << "The smallest amount of rainfall was " << vals[min_position(vals,0,SIZE)] << "inches in month " << min_position(vals,0,SIZE) + 1 << "." << endl;
    return 0;
}