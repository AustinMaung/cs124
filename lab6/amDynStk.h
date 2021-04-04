// CS124-03
// FILE: DynStk.h
// PROVIDES: A Stack template for lab 6
// FUNCTIONS in this toolkit:   
//   LinkedList()   Constructor
//   ~LinkedList();  Destructor
// void push(T);
//     precondition: any printable value type like double or string
//     postcondition: prints what value is being passed in and adds
//     vale into the stack
// T pop();
//     postcondition: prints the value of the top element in stack,
//     also takes the element out of the stack and returns it's,
//     value just in case if value needs to be stored
#include<iostream>
using namespace std;
#ifndef STACK_H// Prevent duplicate definition
#define STACK_H 

template <class T>
class Stack
{
private:
   // Declare a structure for the list
   struct ListNode
   {
      T value;
      struct ListNode *next;
      struct ListNode *prev; //pointer to Node before, makes pop easier
   }; 

   ListNode *head;   // List head pointer
   ListNode *tail;   // List tail pointer, added to make push easier

public:
    Stack()   // Constructor
    { 
        head = nullptr;
        tail = nullptr;
    }
    ~Stack(); // Destructor
    void push(T);
    T pop();
};
   

template<typename T>
Stack<T>::~Stack() {
    ListNode* temp = head;
    while( temp != 0 ) {
        ListNode* next = temp->next;
        delete temp;
        temp = next;
    }
    head = 0;
}

template<typename T>
void Stack<T>::push(T val) {
    cout << "Pushing " << val << endl;
    ListNode* temp = new ListNode;
    temp->value = val;
    temp->next = nullptr;
    temp->prev = tail;
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
T Stack<T>::pop() {
    if(tail != nullptr){
        T val = tail->value;
        ListNode* before = tail->prev;
        //if before is null, then it would have no next 
        //pointer to change
        if(before != nullptr)
        {
            before->next = nullptr;
        }
        //delete and replace old tail with node that
        //was previous to it
        tail->prev = nullptr;
        delete tail;
        tail = before;

        cout << val << endl;
        return val;
    }
    else
    {
        cout << "Attempting to POP again... The stack is empty." << endl;
        return -9999;
    }
}
#endif

