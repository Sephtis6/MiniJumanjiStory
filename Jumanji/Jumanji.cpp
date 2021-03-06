// Jumanji.cpp : Defines the entry point for the console application.
//Jumanji
// A Personalized Adventure

//The following is telling the program to include stdafx.h, iostream, and strings.
#include "stdafx.h"
#include <iostream>
#include <string>

//The following tells the program it is using cout, cin, endl, and strings
using std::cout;
using std::cin;
using std::endl;
using std::string;

//this is the main purpose of the program and code
int main()
{
	//it is creating a constant integer of gold pieces equal to 900
	const int GOLD_PIECES = 900;
	//creating variable integers for adventurers, killed and survivors
	int adventurers, killed, survivors;
	//creates a string for leader 
	string leader;

	//types the below out in order to asks the player to enter a number for both adventurers and the amount killed
	cout << "Enter a number: ";
	cout << "Please enter the following for your personalized adventure\n";
	
	//types the below out in order to asks the player to enter a number for both adventurers and the amount killed
	cout << "Enter a number: ";
	cin >> adventurers;

	//types the below out in order to asks the player to enter a number for both adventurers and the amount killed
	cout << "Enter a number: ";
	cin >> killed;

	//calculates the amount of survivors based on the number of adventurers minus killed from plugged in numbers
	survivors = adventurers - killed;

	//asks to enter last name for your the leaders name
	cout << "Enter your last name: ";
	cin >> leader;

	//this is the lines that type out the story for the code about what happens
	cout << "\nA group of " << adventurers << "students get sent to clean out the basement for detention. ";
	cout << "The group included a student called " << leader << ".\n";
	cout << "While cleaning it up the found a courious video game called Jumanji. ";
	cout << "The description for the game was A game for those who seek to find a way to leave their world behind. ";
	cout << "All the students including  " << leader << " thought that it would be interesting to play ";
	cout << ", so they started up the game this resulted i  mysterious vortex opening up. ";
	cout << "Of the students only, " << killed << " were sucked in, ";
	cout << "leaving just" << survivors << "in the basement. \n";

	//this is the lines that type out the story for the code about what happens
	cout << "\nThe students that were transported into Jumanji had no idea whta was going on. ";
	cout << "As they talked among themselves one was suprised and getting eaten by a hippopotomus. ";
	cout << "The others freaked out about him getting eaten but eventually rescued him. ";
	cout << "So the students looted the corpes and found " << GOLD_PIECES << " gold pieces. ";
	cout << "Where we leave of is the students discussing what happened and how they are going to survive and leave Jumanji. \n";

	//this will pause the system so you can see the output
	system("pause");

	//thi causes the execution to leave the current subrutine
	return 0;
}

