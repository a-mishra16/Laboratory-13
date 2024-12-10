/*
* Program: Laboratory 13.cpp
* Author: Aanika Mishra
* Date: 12-12-2024
* Description: This program reads in a text file and displays the frequency of each letter.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void pressEnterToContue(void);

int main()
{

}


// pressEnterToContinue: used to keep the console window open long enough to see your program's output
void pressEnterToContinue(void) 
{
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}