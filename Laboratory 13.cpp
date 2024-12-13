/*
* Program: Laboratory 13.cpp
* Author: Aanika Mishra
* Date: 12-12-2024
* Description: This program reads in a text file and displays the frequency of each letter.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void pressEnterToContinue(void);
bool readFromFile(string filename);


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
    double characters = 0;
    double A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0,
        N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;

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
                char character = words[i];
               
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
                default: characters--; break;
                }

            }
        }
    }
    double frqA = (A / characters) * 100, frqB = (B / characters) * 100, frqC = (C / characters) * 100, frqD = (D / characters) * 100, 
        frqE = (E / characters) * 100, frqF = (F / characters) * 100, frqG = (G / characters) * 100, frqH = (H / characters) * 100, 
        frqI = (I / characters) * 100, frqJ = (J / characters) * 100, frqK = (K / characters) * 100, frqL = (L / characters) * 100, frqM = (M / characters) * 100,
        frqN = (N / characters) * 100, frqO = (O / characters) * 100, frqP = (P / characters) * 100, frqQ = (Q / characters) * 100, frqR = (R / characters) * 100, 
        frqS = (S / characters) * 100, frqT = (T / characters) * 100, frqU = (U / characters) * 100, frqV = (V / characters) * 100, frqW = (W / characters) * 100, 
        frqX = (X / characters) * 100, frqY = (Y / characters) * 100, frqZ = (Z / characters) * 100;
    //Close file and return
    inFile.close();
    cout << "Characters: " << characters << endl;
    cout << "Frequency:\n";
    cout << "'A': " << fixed << setprecision(3) << right << setw(6) << frqA << endl;
    cout << "'B': " << fixed << setprecision(3) << right << setw(6) << frqB << endl;
    cout << "'C': " << fixed << setprecision(3) << right << setw(6) << frqC << endl;
    cout << "'D': " << fixed << setprecision(3) << right << setw(6) << frqD << endl;
    cout << "'E': " << fixed << setprecision(3) << right << setw(6) << frqE << endl;
    cout << "'F': " << fixed << setprecision(3) << right << setw(6) << frqF << endl;
    cout << "'G': " << fixed << setprecision(3) << right << setw(6) << frqG << endl;
    cout << "'I': " << fixed << setprecision(3) << right << setw(6) << frqI << endl;
    cout << "'J': " << fixed << setprecision(3) << right << setw(6) << frqJ << endl;
    cout << "'K': " << fixed << setprecision(3) << right << setw(6) << frqK << endl;
    cout << "'L': " << fixed << setprecision(3) << right << setw(6) << frqL << endl;
    cout << "'M': " << fixed << setprecision(3) << right << setw(6) << frqM << endl;
    cout << "'N': " << fixed << setprecision(3) << right << setw(6) << frqN << endl;
    cout << "'O': " << fixed << setprecision(3) << right << setw(6) << frqO << endl;
    cout << "'P': " << fixed << setprecision(3) << right << setw(6) << frqP << endl;
    cout << "'Q': " << fixed << setprecision(3) << right << setw(6) << frqQ << endl;
    cout << "'R': " << fixed << setprecision(3) << right << setw(6) << frqR << endl;
    cout << "'S': " << fixed << setprecision(3) << right << setw(6) << frqS << endl;
    cout << "'T': " << fixed << setprecision(3) << right << setw(6) << frqT << endl;
    cout << "'U': " << fixed << setprecision(3) << right << setw(6) << frqU << endl;
    cout << "'V': " << fixed << setprecision(3) << right << setw(6) << frqV << endl;
    cout << "'W': " << fixed << setprecision(3) << right << setw(6) << frqW << endl;
    cout << "'X': " << fixed << setprecision(3) << right << setw(6) << frqX << endl;
    cout << "'Y': " << fixed << setprecision(3) << right << setw(6) << frqY << endl;
    cout << "'Z': " << fixed << setprecision(3) << right << setw(6) << frqZ << endl;
    return true;
}
