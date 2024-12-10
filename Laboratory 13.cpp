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

void pressEnterToContinue(void);
bool readFromFile(string filename);
int letterCount(char character);


int main()
{
	string datafile;
	cout << "Enter filename: ";
	getline(cin, datafile);
	readFromFile(datafile);
	pressEnterToContinue();
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

bool readFromFile(string filename)
{
    ifstream inFile;        //Input filestream to read in data
    string words;
    int characters = 0;
    inFile.open(filename); //Attempts to open specified file
    if (inFile.fail()) //In case a problem occurs
    {
        cout << "Read error - sorry\n";
        return false;
    }

    //Here it reads data until done
    while (true)
    {
        inFile >> words;
        if (inFile.fail())
        {
            break; //No more data to read
        }

        for (int i = 0; i < words.length(); i++) //Character count
        {
            if ((words[i] > 64 && words[i] < 91) || (words[i] > 60 && words[i] < 123))
            {
                characters++;
            }
        }
    }

    //Close file and return
    inFile.close();
    cout << "Characters: " << characters << endl;
    return true;
}

int letterCount(char character)
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;
    int I = 0;
    int J = 0;
    int K = 0;
    int L = 0;
    int M = 0;
    int N = 0;
    int O = 0;
    int P = 0;
    int Q = 0;
    int R = 0;
    int S = 0;
    int T = 0;
    int U = 0;
    int V = 0;
    int W = 0;
    int X = 0;
    int Y = 0;
    int Z = 0;
    switch (character)
    {
    case(65): A++; break;
    }

}