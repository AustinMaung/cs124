#include <cstdlib>
#include <ctime>
#include <iostream>
#include "selection.h"

using namespace std;

int main()
{
   srand(time(0));
   const int SIZE = 20;
   int values[SIZE];
   for (int i = 0; i < SIZE; i++)
   {
      values[i] = rand() % 100;
   }
   print(values, SIZE);
   selection_sort(values, SIZE);
//    print(values, SIZE);
   return 0;
}