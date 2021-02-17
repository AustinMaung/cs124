// CS124-03
// FILE: rain.h
// PROVIDES: A toolkit of useful functions for lab 2. 
//
// WHY A STABLE SORT IS IMPORTANT:
// If I wanted the months with 0 precipitation, I would also want months that are sorted.
// For example, it would make more sense to list out January, March, and May rather than
// May, January, and March being the least precipitate months. However, selection sort 
// is not stable and cannot support this situation.
// 
// FUNCTIONS in this toolkit:                  
//
//  void ask_for_values(double a[], int size)
//     Precondition: values that will be asked for are valid doubles
//     Poscondition: array a has been filled up with rainfall statistics
//  bool enter_element(double a[], double val, int index,int size)
//     Postcondition: returns true if val was passed in to the array, false otherwise
//  double get_total(double a[], int size)
//     Precondition: array has been filled up
//     Postcondition: total of all values returned
//  double get_average(double a[], int size)
//     Precondition: array has been filled up
//     Postcondition: average of all values returned
//  int max_position(double a[], int from, int to)
//     Precondition: array has been filled up, from and to are indexes
//     Postcondition: max value returned
//  int min_position(double a[], int from, int to)
//     Precondition: array has been filled up, from and to are indexes
//     Postcondition: min value returned, used in selection sort
//  void swap(double& x, double& y);
//     Postcondition: swaps values, helper function used in selection sort
//  void selection_sort(double a[], int size);
//     Precondition: array has been filled up
//     Postcondtion: array a has been sorted with selection sort, slightly 
//     modified version of algorithm found in the book, instead of sorting
//     ints, this sorts an array of doubles

#ifndef RAIN_H// Prevent duplicate definition
#define RAIN_H 

    //collecting elements for array
    void ask_for_values(double a[], int size);
    bool enter_element(double a[], double val, int index,int size);

    //getting data from array
    double get_total(double a[], int size);
    double get_average(double a[], int size);
    int max_position(double a[], int from, int to);
    //min_position also used for the sorting
    
    //selection sort algorithm
    int min_position(double a[], int from, int to);
    void swap(double& x, double& y);
    void selection_sort(double a[], int size);

#endif