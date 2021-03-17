#include<iostream>
using namespace std;

#ifndef LINKEDLIST_H// Prevent duplicate definition
#define LINKEDLIST_H 

template <class T>
class LinkedList
{
private:
   // Declare a structure for the list
   struct ListNode
   {
      T value;
      struct ListNode *next;
   }; 

   ListNode *head;   // List head pointer

public:
   LinkedList()   // Constructor
      { head = nullptr; }
//    ~LinkedList(); // Destructor
   void appendNode(T);
//    void insertNode(T);
//    void deleteNode(T);
//    void displayList();
//    int search(T);    // search function
//    T getTotal();
//    int numNodes();
//    T getAverage();
//    T getLargest();
//    int getLargestPosition();
//    T getSmallest();
//    int getSmallestPosition();
};

template<typename T>
void LinkedList<T>::appendNode(T value) {
    cout << "appending" << endl;
    
}

#endif