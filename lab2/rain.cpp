// CS 124-03 
// FILE: rain.cpp
// IMPLEMENTS: ask_for_values() enter_element() get_total() get_average() max_position()
// min_position() swap() selection_sort(), parameters and return type not given here
#include <iostream> // Provides cout
#include "rain.h"

using namespace std;

void ask_for_values(double a[], int size)
{   
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
        }
        //assume input are valid values
        double val;
        cin >> val;
        if(enter_element(a, val, index, size))
        {
            index++;
            error = false;
        }
        else
        {
            error = true;
        }
    }
}
bool enter_element(double a[], double val, int index,int size)
{ 
    if((index + 1 <= size) && (val >= 0))
    {
        a[index] = val;
        return true;
    }
    return false;
}

double get_total(double a[], int size)
{
    double max = 0;
    for(int i = 0; i < size; i++)
    {
        max += a[i];
    }
    return max;
}

double get_average(double a[], int size)
{
    double store = get_total(a,size);
    return (store/size);
}

int max_position(double a[], int from, int to)
{
    int max_pos = from;
    for (int i = from + 1; i <= to; i++)
    {
        if (a[i] > a[max_pos]) { max_pos = i; }
    }
    return max_pos;
}

int min_position(double a[], int from, int to)
{
    int min_pos = from;
    for (int i = from + 1; i <= to; i++)
    {
        if (a[i] < a[min_pos]) { min_pos = i; }
    }
    return min_pos;
}

void swap(double& x, double& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selection_sort(double a[], int size)
{
    int next; // The next position to be set to the minimum

    for (next = 0; next < size - 1; next++)
    {
        // Find the position of the minimum starting at next
        int min_pos = min_position(a, next, size - 1);
        // Swap the next element and the minimum
        swap(a[next], a[min_pos]);
    }
}

