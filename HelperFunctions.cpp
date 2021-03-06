/*

  Author: Gary Lougheed
  Date: 3/4/2021
  Program Description: Implementation file for HelperFunctions


*/

#include "HelperFunctions.h"


void initializeArr(int arr[MAX_INTEGER_ARR_SIZE], const int& currSize)
{
  // Declare and Initialize Variables
	int index = 0;

  // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
      // set each element to zero
        arr[index] = 0;
    }
}

void initializeArr(float arr[MAX_FLOAT_ARR_SIZE], const int& currSize)
{
  // Declare and Initialize Variables
	int index = 0;

  // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // set each element to zero
        arr[index] = 0;
    }
}

void initializeArr(double arr[MAX_DOUBLE_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // set each element to zero
        arr[index] = 0.0f;
    }
}

void initializeArr(char arr[MAX_CHAR_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // set each element to zero
        arr[index] = 'z';

    }
}

void initializeArr(int** arr, const int& currRowSize, const int& currColSize)
{
   // Declare and Initialize Array
    int rowIndex = 0;
    int colIndex = 0;
    int rowSize = currRowSize;
    int colSize = currColSize;

   // iterate through rows

    // iterate through cols

}
void printArray(int arr[MAX_INTEGER_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // print each element 
        cout << arr[index];

    }
}

void printArray(float arr[MAX_FLOAT_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // print each element 
        cout << arr[index];

    }
}


void printArray(double arr[MAX_DOUBLE_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // print each element 
        cout << arr[index];

    }
}

void printArray(char arr[MAX_CHAR_ARR_SIZE], const int& currSize)
{
    // Declare and Initialize Variables
    int index = 0;

    // Iterate through integer array and fill the array with zeros
    for (index = 0; index < currSize; index++)
    {
        // print each element 
        cout << arr[index];

    }
}

void printPrompt(char print[])
{
  
  cout << print << CONST_ENDLINE;

}


int strLen(const char stringOne[])
{
    // declare and initialize variables
    int length = 0;
    int index = 0;

    // loop through the string until the null character is detected.
    while (stringOne[index] != CONST_NULL_CHAR)
    {
       // if the character is not a null character then increase the length by one
        length = length + 1;

       // Update the loop
        index++;

    }

    // return the length of the string

    return length;
}
void strCopy(const char src[], char dest[], const int& sizeOne, const int& sizeTwo)
{
    // Declare and Initialize variables
      int index = 0;

    // if the destination string can fit the source string, then copy
      if (sizeTwo >= sizeOne)
      {

         // Iterate through the source string and place each character in the dest string
          for (index = 0; index < sizeTwo; index++)
              dest[index] = src[index];
      }

}


bool strIsEqual(const char stringOne[], const char stringTwo[], const int& sizeOne, const int& sizeTwo)
{
    // Declare and Initialize variables
    int index = 0;

    // check if the two strings have equal length
      // if they don't then return false
      if (sizeOne != sizeTwo)
      {
          return false;
      }



    // else the two strings have equal length
      else
      {

          // iterate through each character, short circuit when the characters aren't equivalent.
          for (index = 0; index < sizeOne; index++)
          {
              if (stringOne[index] != stringTwo[index])
                  return false;
          }

      }
    // return true, since all characters have been compared along with the strings lengths
    return true;
}

void strConcate(const char stringOne[], const char stringTwo[], char result[], const int& sizeOne, const int& sizeTwo, const int& resultSize)
{
   // Declare and Initialize variables
    int index = 0;
    int resultsIndex = 0;
    int newSize = sizeOne + sizeTwo;

   // can the result string contain both strings?
    if (newSize > resultSize)
    {
        cout << "Result string can not contain both string, the concated string when result in truncation. ERROR";
    }

    else
    {
      // iterate through the first string and place the characters into the result string
        for (index = 0; index < sizeOne; index++)
        {
            result[resultsIndex] = stringOne[index];
            resultsIndex++;

        }
        for (index = 0; index < sizeTwo; index++)
        {
            result[resultsIndex] = stringTwo[index];
            resultsIndex++;
        }

        // add null character
        result[resultsIndex] = CONST_NULL_CHAR;


    }
     


}



void clearScreen()
{
  // Declare and Initialize variables
    int index = 0;

  // iterate 80 lines, the typical number for a console, and print an endline character.
    for (index = 0; index < 80; index++)
        cout << CONST_ENDLINE;

}

void pauseScreen()
{
  // Declare and Initialize variables.
    char userInput = 'a';

  // Tell the user how to continue.
    cout << '\n' << "Type a single character and then enter to continue back to main menu.";
 
  // Accept the user input.
    cin >> userInput;

}

int countWords(ifstream& fin,char fileName[])
{

  // Declare and initialize variables
    int result = 0;
    int count = 0;
    char word[255];
  // open file
    fin.open(fileName);
    
  // if the file is good continue, else report false, and return 0 counted end lines.
    /*if( !fin.good())
    {
      printPrompt("Error!");

    }*/


  // While the file input steam is good
    while(fin.good())
    {
      fin >> word;
      count++;

    }

  // in order to posion the stream or to get a fin.good error we have to use the fin command one more time than necessary, this throws the count off.
    count = count - 1; // correct the count.
      
  // close file stream
    fin.close();



  return count;
}

int countEndLines(ifstream& fin, char fileName[] )
{
    // Declare and initialize variablesa
    int result = 0;


    result = countNumOfCharacter(fin, fileName, CONST_ENDLINE) - 1;

    return result;
}


int countNumOfCharacter(ifstream& fin, char fileName[], const char& characterToBeCounted)
{
    // Declare and Initialize variables
      int numOfCharacters = 0;
      char compareChar = characterToBeCounted;

    // open file
      fin.open(fileName);

    // parse through file
      while (fin.good())
      {
          fin.get(compareChar);

          if(compareChar == characterToBeCounted)
            numOfCharacters++;
      }

    // close file
      fin.close();

    return numOfCharacters;

}




