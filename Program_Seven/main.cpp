/*
 
 DESCRIPTION:    PROGRAM SEVEN
 
 CLASS:          COSC 1436.3S1
 
 AUTHOR:         FRED TRINH
 
 DATE:           29 JUNE 2017
 
 */

#include <iostream>

using namespace std;

int main ()

{
    return 0;
}

/*

Write a program to implement the simulation of life as described in Scientific American by Martin Gardner.
The program will be implemented on a two dimensional surface of size 60 by 60 visible elements.
The rules of the simulation are as follows:

1) An initial set of cells are marked as “alive” by the user.This is generation 0.
   Your program will ask the user to input a set of row and column values to let the user determine which cells are “alive”.
   Display this generation.
 
2) Cells change for each succeeding generation by the following rules:
 
 a. A living cell dies of overcrowding in the next generation if it currently has
 4 or more living neighbors.
 
 b. A living cell dies of loneliness in the next generation if it currently has
 only 0 or 1 living neighbors.
 
 c. An empty cell becomes a “birth” cell (becomes alive) in the next
 generation if it has exactly 3 living neighbors.
 
 d. All other cells remain unchanged.
 
3) The new generation becomes the current generation and is displayed.
 
4) After displaying each new generation, ask the user if they wish to continue to the
   next generation or stop at this point.

1) An electronic copy of the .cpp file in the project folder as created by Visual Studio.
   This will be emailed to the instructor with the subject line “COSC 1436.3S1 – Lab 7”.
2) If you wish any feedback on your work, turn in a printed listing of the .cpp file that you created.

*/
