// CS 124-03 
// FILE: maze.cpp
// IMPLEMENTS: dead_end() traverse_maze()

#include <iostream> // Provides cout
#include "maze.h"
#include "auxa1.h"

using namespace std;

bool dead_end(){
    bool ans = inquire("Are you facing a wall?");
    if(ans)
        return true; 
    else
        return false;
}
bool traverse_maze(){
    bool found = false;
    cout<<"Step forward & write your name on the ground."<<endl;
    bool ans = inquire("Have you found the tapestry");
    //base case
    if(ans){
        cout<<"Pick up the tapestry and take a step backward."<<endl;
        return true;
    }
    //left direction
    cout<<"Please turn left 90 degrees."<<endl;
    if(dead_end() == false){
        found = traverse_maze();
        //no matter if tapestry if found, opposite actions will be performed
        cout<<"Please turn right 90 degrees."<<endl;
        cout<<"take a step backward."<<endl;
        return found;
    }
    //straight ahead direction
    cout<<"Please turn right 90 degrees."<<endl;
    if(dead_end() == false){
        found = traverse_maze();
        cout<<"take a step backward."<<endl;
        return found;
    }
    //right direction
    cout<<"Please turn right 90 degrees."<<endl;
    if(dead_end() == false){
        found = traverse_maze();
        cout<<"Please turn left 90 degrees."<<endl;
        cout<<"take a step backward."<<endl;
        return found;
    }
    //if all directions were false just back out and return false,
    //this can sort of be thought of as the base case
    cout<<"take a step backward."<<endl;
    return false;
}