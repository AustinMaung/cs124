#include <iostream> 
#include <string>
#include "paren.h"

using namespace std;

bool has_parenthesis(string input)
{
    int count = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '(' || input[i] == ')')
        {
            count++;
        }
    }
    if(count > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//size is the max amount of iterations, could be string size
int count_parenthesis(Stack<char> *arr)
{
    int count = 0;
    while(true)
    {
        char paren = arr->pop();
        //a is just what pop returns when the stack is empty
        if(paren != 'a' && paren == '(')
        {
            count++;
        }
        else if(paren != 'a' && paren == ')')
        {
            count--;
        }
        else if(paren == 'a')
        {
            break;
        }  
    }
    return count;
}

bool read_parenthesis(string input)
{
    Stack<char> arr = Stack<char>();
    for(int i = 0; i < input.length(); i++)
    {
        // cout << input[i] << endl;
        if(input[i] == '(' || input[i]==')')
        {
            arr.push(input[i]);
        }
    }
    //0 is the only value where the parenthesis
    //are balanced
    if(count_parenthesis(&arr) != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}