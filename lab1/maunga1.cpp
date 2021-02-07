#include<iostream>
#include"auxa1.h"
#include"maze.h"
using namespace std;

int main() {
    bool found = traverse_maze();
    if(found == false){
        cout<<"The tapestry was not found"<<endl;
    }
    return 0;
}