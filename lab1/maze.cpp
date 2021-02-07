#include <iostream> // Provides cout
#include "maze.h"
#include "auxa1.h"

using namespace std;

bool dead_end(){
    bool ans = inquire("Are you facing a wall?");
    if(ans){return true;} 
    else{return false;}
}
bool traverse_maze(){
    bool found = false;
    cout<<"Step forward & write your name on the ground."<<endl;
    bool ans = inquire("Have you found the tapestry");
    if(ans){
        cout<<"Pick up the tapestry and take a step backward."<<endl;
        return true;
    }
    //left side
    cout<<"Please turn left 90 degrees."<<endl;
    if(dead_end() == false){
        if(traverse_maze()){found = true;}
        cout<<"Please turn right 90 degrees."<<endl;
        cout<<"take a step backward."<<endl;
        return found;
    }
    //straight ahead
    cout<<"Please turn right 90 degrees."<<endl;
    if(dead_end() == false){
        if(traverse_maze()){found = true;}
        cout<<"take a step backward."<<endl;
        return found;
    }
    //right side
    cout<<"Please turn right 90 degrees."<<endl;
    if(dead_end() == false){
        if(traverse_maze()){found = true;}
        cout<<"Please turn left 90 degrees."<<endl;
        cout<<"take a step backward."<<endl;
        return found;
    }
    cout<<"take a step backward."<<endl;
    return false;
}