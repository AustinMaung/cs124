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
//  HELPER FUNCTIONS:
//  bool has_parenthesis(string input);
//     precondition: a string, not a const char array
//     postcondition: truth value depending on if the inputted string has
//     a parenthesis
//  bool read_parenthesis(string input);
//     precondition: a string with atleast one parenthesis
//     postcondion: main function, places parenthesis into a stack then
//     compares the amount of left parenthesis to right by passing the 
//     stack into count_parenthesis
//  int count_parenthesis(Stack<char> arr);
//     postcondition: helper function for read_parenthesis that 
//     returns the amount of left parenthesis minus right parenthesis. 0
//     would result in balanced parenthesis.
#include<iostream>
#include<string>
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
bool has_parenthesis(string input);
bool read_parenthesis(string input);
int count_parenthesis(Stack<char> arr);

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
        if(before != nullptr)
        {
            before->next = nullptr;
        }
        tail->prev = nullptr;
        tail = before;

        return val;
    }
    else
    {
        return 'a';
    }
}
#endif