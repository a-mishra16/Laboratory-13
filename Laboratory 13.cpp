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
    case(97): A++; break;
    case(66): B++; break;
    case(98): B++; break;
    case(67): C++; break;
    case(99): C++; break;
    case(68): D++; break;
    case(100): D++; break;
    case(69): E++; break;
    case(101): E++; break;
    case(70): F++; break;
    case(102): F++; break;
    case(71): G++; break;
    case(103): G++; break;
    case(72): H++; break;
    case(104):H++; break;
    case(73): I++; break;
    case(105): I++; break;
    case(74): J++; break;
    case(106): J++; break;
    case(75): K++; break;
    case(107): K++; break;
    case(76): L++; break;
    case(108): L++; break;
    case(77): M++; break;
    case(109): M++; break;
    case(78): N++; break;
    case(110): N++; break;
    case(79): O++; break;
    case(111): O++; break;
    case(80): P++; break;
    case(112): P++; break;
    case(81): Q++; break;
    case(113): Q++; break;
    case(82): R++; break;
    case(114): R++; break;
    case(83): S++; break;
    case(115): S++; break;
    case(84): T++; break;
    case(116): T++; break;
    case(85): U++; break;
    case(117): U++; break;
    case(86): V++; break;
    case(118): V++; break;
    case(87): W++; break;
    case(119): W++; break;
    case(88): X++; break;
    case(120):X++; break;
    case(89): Y++; break;
    case(121): Y++; break;
    case(90): Z++; break;
    case(122): Z++; break;
    }

}