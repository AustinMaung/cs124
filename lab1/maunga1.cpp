#include<iostream>
#include"auxa1.h"
#include"maze.h"
using namespace std;

// Functions: main()
// Description: allows user to traverse a maze for a tapestry
// Programmer: Austin Maung
// Date: 2/8/2021
// Version: 1.5
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
// History Log:
// 2/6/21 A.M finished ver 1.0
// 2/8/21 A.M updated 

int main() {
    bool found = traverse_maze();
    if(found == false){
        cout<<"The tapestry was not found"<<endl;
    }
    return 0;
}
/*
Step forward & write your name on the ground.
Have you found the tapestry [Yes or No]
No
Please turn left 90 degrees.
Are you facing a wall? [Yes or No]
Yes
Please turn right 90 degrees.
Are you facing a wall? [Yes or No]
Yes
Please turn right 90 degrees.
Are you facing a wall? [Yes or No]
No
Step forward & write your name on the ground.
Have you found the tapestry [Yes or No]
No
Please turn left 90 degrees.
Are you facing a wall? [Yes or No]
No
Step forward & write your name on the ground.
Have you found the tapestry [Yes or No]
Yes
Pick up the tapestry and take a step backward.
Please turn right 90 degrees.
take a step backward.
Please turn left 90 degrees.
take a step backward.
*/