/*
An Array of Treasure by Gwen Virtue
IT-312-J1052 Software Development with C++.Net 21EW1
Southern New Hampshire University

This is a brief part of a game that has a player searching treasure boxes throughout the map.
Only the fifth and last box contains the token needed to level up.

This is an incredibly simplified version, but it first initializes the treasure boxes and 
a variable for the player to input which box they have found. It then requests user input
so that they can specify the box to open. After that, the program passes that choice onto a 
function that changes the value of the treasure box to open. 

An IF statement checks to see if the player is opening the fifth box, and if so declares
to them that they have leveled up. If not, it explains that they need to open more boxes
before opening them up.

To expand this, I would include a multidimensional array for a map that
contains the location of all the chests, and a loop that allows the 
player to move between rooms and checks for player location
in relation to each box. I would then write a loop that keeps allowing the player to 
continue unless they find the right box or quit out of the program.
*/


#include <iostream>

using namespace std;

//A function that updates the array value based on the user choice
void pickTreasure(bool treasure[5], int choice)
{
   //A pointer to the array to change its value
   *(treasure + choice) = true;
}

//Main function
int main()
{
    //Declares and intializes variables
    bool treasure[5] = {false, false, false, false, false};
    int choice = 0;
    
    //Request user input
    cout << "Which treasure box have you found? A number between 1 and 5: ";
    cin >> choice;
    
    //Pass user input to function to change value in array
    pickTreasure(treasure, choice);
    
    //Check to see if player entered box required to level up. Display output to user to inform them whether or not they leveled up.
    if (treasure[5] == true)
    {
        cout << "You have leveled up!" << endl;
    }
    else
    {
        cout << "You still need to find more treasure to level up." << endl;
    }
    
    return 0;
}