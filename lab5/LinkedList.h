// CS124-03
// FILE: LinkedList.h
// PROVIDES: A linked list class for lab 5
//
// FUNCTIONS in this toolkit:   
//   LinkedList()   Constructor
//   ~LinkedList();  Destructor
//   void appendNode(T);
//     postcondition: list contains one extra ListNode at the end of the list
//   void insertNode(T);
//     postcondition: not sure about how this function would differ than append, so
//     I just made it the same as append
//   void deleteNode(T);
//     precondition: value passed is in the linked list
//     postcondition: node with the value is removed from the list
//   void displayList();
//     postcondition: prints the contents of the list
//   int search(T);    
//     postcondition: index position of where the node with value is
//   T getTotal();
//     postcondition: added up total of list values
//   int numNodes();
//     postcondition: number of elements in the linked list
//   T getAverage();
//     postcondtion: average of the node values in the list
//   T getLargest();
//     postcondition: max node value in the list
//   int getLargestPosition();
//     poscondtion: position of max value node in the list, from a range
//     between 1 to n, n being any arbitrary number representing the list size
//   T getSmallest();
//     postcondtion: min node value in the list
//   int getSmallestPosition();
//     poscondtion: position of min value node in the list, from a range
//     between 1 to n, n being any arbitrary number representing the list size
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
   ListNode *tail;   // List tail pointer, added to make append easier

public:
   LinkedList()   // Constructor
      { head = nullptr; }
   ~LinkedList(); // Destructor
   void appendNode(T);
   void insertNode(T);
   void deleteNode(T);
   void displayList();
   int search(T);    // search function
   T getTotal();
   int numNodes();
   T getAverage();
   T getLargest();
   int getLargestPosition();
   T getSmallest();
   int getSmallestPosition();
};

template<typename T>
LinkedList<T>::~LinkedList() {
    ListNode* temp = head;
    while( temp != 0 ) {
        ListNode* next = temp->next;
        delete temp;
        temp = next;
    }
    head = 0;
}

template<typename T>
void LinkedList<T>::appendNode(T val) {
    ListNode* temp = new ListNode;
    temp->value = val;
    temp->next = nullptr;
    if(head == nullptr)
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

template<typename T>
void LinkedList<T>::insertNode(T val) {
    ListNode* temp = new ListNode;
    temp->value = val;
    temp->next = nullptr;
    if(head == nullptr)
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

template<typename T>
void LinkedList<T>::deleteNode(T val) {
    ListNode* temp=new ListNode;
    temp = head;
    while(temp != nullptr){
        cout << temp->value << endl;
        if(val == temp->next->value){
            cout << "really going to delete" << endl;
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }
}

template<typename T>
void LinkedList<T>::displayList() {
    ListNode* temp=new ListNode;
    temp = head;
    while(temp != nullptr){
        cout << temp->value << endl;
        temp = temp->next;
    }
}

template<typename T>
int LinkedList<T>::search(T search_val){
    ListNode* temp=new ListNode;
    temp = head;
    int idx = 1;
    bool found = false;
    while(temp != nullptr){
        if(temp->value == search_val){
            found = true;
            break;
        }
        temp = temp->next;
        idx++;   
    }
    if(!found){
        cout << "The value is not in the list" << endl;
    }
    return idx;
}

template<typename T>
T LinkedList<T>::getTotal() {
    ListNode* temp=new ListNode;
    temp = head;
    T store = 0;
    while(temp != nullptr){
        store += temp->value;
        temp = temp->next;   
    }
    return store;
}

template<typename T>
int LinkedList<T>::numNodes() {
    ListNode* temp=new ListNode;
    temp = head;
    int store = 0;
    while(temp != nullptr){
        temp = temp->next;
        store += 1;
    }
    return store;
}

template<typename T>
T LinkedList<T>::getAverage() {
    return (getTotal() / numNodes());
}

template<typename T>
T LinkedList<T>::getLargest() {
    ListNode* temp=new ListNode;
    temp = head;
    T max = 0;
    while(temp != nullptr){
        if(temp->value > max){
            max = temp->value;
        }
        temp = temp->next;   
    }
    return max;
}

template<typename T>
int LinkedList<T>::getLargestPosition() {
    ListNode* temp=new ListNode;
    temp = head;
    T max = 0;
    int pos = 0;
    int idx = 1;
    while(temp != nullptr){
        if(temp->value > max){
            max = temp->value;
            pos = idx;
        }
        temp = temp->next;
        idx++;
    }
    return pos;
}

template<typename T>
T LinkedList<T>::getSmallest() {
    ListNode* temp=new ListNode;
    temp = head;
    T min = temp->value;
    while(temp != nullptr){
        if(temp->value < min){
            min = temp->value;
        }
        temp = temp->next;   
    }
    return min;
}

template<typename T>
int LinkedList<T>::getSmallestPosition() {
    ListNode* temp=new ListNode;
    temp = head;
    T min = temp->value;
    int pos = 0;
    int idx = 1;
    while(temp != nullptr){
        if(temp->value < min){
            min = temp->value;
            pos = idx;
        }
        temp = temp->next;
        idx++;
    }
    return pos;
}

#endif