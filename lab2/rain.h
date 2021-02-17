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