/*


  Author: Gary Lougheed
  Date: 3/5/2021
  Program Description: This program shows off the capabilities for the Helper Function library. 
                       Functions are primierly focused on c_style strings and file analysis,
                              such as, detecting and counting words or numbers.



  ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/


// Header Files

#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include "HelperFunctions.h"
using std::cout;
using std::cin;


/*
name: displayMenu
description: Displays the menu for the user, i.e. test conditions for each function.
input: none
output: a stream of characters from cout
dependancies: iostream
*/
void displayMenu();


int main()
{
   // Declare Variables
    int userInput = 0;
    int stringLength = 0;
    int secondStrLen = 0;
    int resultSize = MAX_CSTRING_SIZE;
    int numOfWordsInFile = 0;
    int numOfCharactersInFile = 0;
    char pause = 'a';
    char charToDetect = '\n';
    bool mainLoopValid = true;
    bool isEqual = false;
    char fileName[MAX_CSTRING_SIZE];
    char lengthTestString[] = "Test Length";
    char copyStringOne[] = " Copy Test String One";
    char copyStringTwo[] = " Copy Test String Two";
    char equalTestString[] = " Is Equal";
    char stringOne[] = " String 1 ";
    char stringTwo[] = " String Two ";
    char concateTestStringOne[] = " con";
    char concateTestStringTwo[] = "cate";
    char resultString[MAX_CSTRING_SIZE];

    ifstream fin; 

   
    //char concateTestResultString[MAX_CSTRING_SIZE];
    

    // Main loop
      while(mainLoopValid)
      {

       // Display Menu
         // Program called Helper Function Program
           // function: displayMenu()
             displayMenu();

       // Get user input
        cin >> userInput;

        // Switch menu
        switch (userInput)
        {
        case 1:
            // function: String Length
            stringLength = strLen(lengthTestString);
            clearScreen();
            cout << '\n' << "String length for test string, Test Length  : " << stringLength;
            break;

        case 2:
            // function: String Copy
            stringLength = strLen(copyStringOne);
            secondStrLen = strLen(copyStringTwo);
            cout << '\n' << "First String: " << copyStringOne;
            cout << '\n' << "Second String: " << copyStringTwo;
            cout << '\n' << "Copy string function copied the first string into the second string, the second string is now: ";
            strCopy(copyStringOne, copyStringTwo, stringLength, secondStrLen);
            cout << copyStringTwo;
            pauseScreen();
            break;

        case 3:
            // function: String is equal
            stringLength = strLen(stringOne);
            secondStrLen = strLen(stringTwo);
            cout << '\n' << "First string: " << stringOne;
            cout << '\n' << "Second string: " << stringTwo;
            isEqual = strIsEqual(stringOne, stringTwo, stringLength, secondStrLen);
            cout << '\n' << "The truth to whether or not the First string is equal to the Second string is as follows: " << isEqual;
            pauseScreen();
            break;

        case 4:
            // function: string concatenate 
            stringLength = strLen(stringOne);
            secondStrLen = strLen(stringTwo);
            cout << '\n' << "String One and String two are to be concatenated into a resulting string.";
            cout << '\n' << "String One: " << stringOne;
            cout << '\n' << "String Two: " << stringTwo;
            cout << '\n' << "String One's Length: " << stringLength;
            cout << '\n' << "string Two's Length: " << secondStrLen;
            
            strConcate(stringOne, stringTwo, resultString, stringLength, secondStrLen, resultSize);
            cout << '\n' << "Result String: " << resultString; 
            pauseScreen();
            break;

        case 5:
            // function: count words in a file
            cout << '\n' << " Please enter a file name: ";
            cin >> fileName;
            cout << '\n' << "File name entered: " << fileName;
            numOfWordsInFile = countWords(fin, fileName);
            cout << '\n' << "Number of strings in file: " << numOfWordsInFile;
            pauseScreen();
            break;

        case 6:
            // function: count a specific character in a file 
            cout << '\n' << "Please enter a file name: ";
            cin >> fileName;
            cout <<'\n' << "File name entered: " << fileName;
            numOfCharactersInFile = countNumOfCharacter(fin, fileName, charToDetect);
            cout << '\n' << "Number of " << charToDetect << " characters in file " << fileName << ": " << numOfCharactersInFile;
            pauseScreen();
            break;

        case 7:
            // function: count number of integers in a file
            break;

        case 8:
            // function: count number of negative integers in a file
            break;

        case 9:
            // function: count number of floats and doubles in a file
            break;

        case 10:
            // function: count number of total numbers in a file
            break;

        case 11:
            mainLoopValid = false;
            break;


        }
      }

    // Exit Program
    clearScreen();
    
    cout << '\n' << " Program Exited";

    return 0;

}



void displayMenu()
{
   // Declare and Initialize Variables

   // clear screen
    clearScreen();

   // Display Title
    cout << " HelperFunction Practice Program" << '\n';
    cout << "---------------------------------" << '\n';
    cout << " 1. String Length " << '\n';
    cout << " 2. String Copy " << '\n';
    cout << " 3. String is Equal " << '\n';
    cout << " 4. String concatenate " << '\n';
    cout << " 5. Count words in a file " << '\n';
    cout << " 6. Count a specific character in a file " << '\n';
    cout << " 7. Count number of integers in a file " << '\n';
    cout << " 8. Count the number of negative integers in a file " << '\n';
    cout << " 9. Count the number of floats/doubles in a file " << '\n';
    cout << " 10. Count number of numbers in a file floats included" << '\n';
    cout << " 11. Exit program." << '\n';
    cout << " User Input: ";


}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
