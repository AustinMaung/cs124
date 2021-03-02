// CS124-03
// FILE: ama4.h
// PROVIDES: A toolkit of useful functions for lab 4
//
// HOW MANY FUNCTION TEMPLATES:
//  I would expect three different function template for my code. One template
//  for each unique type of array I have: string, int, and double. Even though
//  my last array, f, stores an integer, 100, it gets upcasted to double to fit in the array
//
// FUNCTIONS in this toolkit: 
//   min(T arr[], int size);
//     postcondition: returns mininum value of almost any sort of array by using
//     templates
//   printMin(T arr[], int size);
//     postcondition: prints some text to the terminal detailing what is happening
//     in the program

#include<iostream>
using namespace std;

#ifndef AMA4_H// Prevent duplicate definition
#define AMA4_H 

    template<typename T>
    T min(T arr[], int size);

    template<typename T>
    void printMin(T arr[], int size);

#endif

//return type is T because not sure what type is being returned
template<typename T>
T min(T arr[], int size)
{
    T store = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < store)
        {
            store = arr[i];
        }
    }
    return store;
}

template<typename T>
void printMin(T arr[], int size)
{
    cout << "Smaller of ";
    for(int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " and ";
    }
    cout << arr[size - 1] << ": " << min(arr,size) << endl;
}