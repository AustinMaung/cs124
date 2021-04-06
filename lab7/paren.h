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
void test();
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
    // cout << "Pushing " << val << endl;
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
        tail = before;

        // cout << val << endl;
        return val;
    }
    else
    {
        // cout << "Attempting to POP again... The stack is empty." << endl;
        return 'a';
    }
}
#endif