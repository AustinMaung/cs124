// CS124-03
// FILE: maze.h
// PROVIDES: A toolkit of useful functions for lab 1. 
//
// FUNCTIONS in this toolkit:                  
//
//   bool dead_end( )
//     Postcondition: Up to next newline has been read and discarded from cin.
//
//   bool traverse_maze()
//      Precondition: the user in front of the entrance of the maze, walking in
//      once the function is first called
//      Postcondition: the maze has been completely traversed, going in to either
//      find or not find the tapestry and going back out by using tracebacks 
//      from recursion. Returns true if the tapestry is found and false if
//      walls were found to the user's right, left, and forward directions
//      Lastly, opposite actions are used to return back to the entrance. For 
//      example, if move, left, move, forward, move gets the tapestry,
//      then back, back, back, right, back will get the user to the entrance.

#ifndef MAZE_H// Prevent duplicate definition
#define MAZE_H 

    bool dead_end();
    bool traverse_maze();

#endif