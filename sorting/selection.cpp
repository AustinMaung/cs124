#include <iostream>
#include "selection.h"

using namespace std;

int min_position(int a[], int from, int to)
{
   int min_pos = from;
   for (int i = from + 1; i <= to; i++)
   {
      if (a[i] < a[min_pos]) { min_pos = i; }
   }
   return min_pos;
}

void swap(int& x, int& y)
{
   int temp = x;
   x = y;
   y = temp;
}

void selection_sort(int a[], int size)
{
   int next; // The next position to be set to the minimum

   for (next = 0; next < size - 1; next++)
   {
      // Find the position of the minimum starting at next
      int min_pos = min_position(a, next, size - 1);
      // Swap the next element and the minimum
      swap(a[next], a[min_pos]);
      print(a,20);
   }
}

void print(int a[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
}

void print(int a[], int start, int size)
{
   for (int i = start; i < size; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
}