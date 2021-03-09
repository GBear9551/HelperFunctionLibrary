/*

  Author: Gary Lougheed
  Date: 3/4/2021
  Program Description: Implementation file for HelperFunctions


*/

#include "HelperFunctions.h"

void debugCharacter(char character)
{
    cout << "Character from file: " << character; // Create Debug functions
    cout << "\n" << "Character digit truth: " << isdigit(character);
    pauseScreen();
}

// Sorting functions

// Useful Algorithms
int gcd(int a, int  b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}





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


void randomInitialArr(int* arr,const unsigned& seed, const int& currSize)
{
    // Declare and Initialize variables
      int index = 0;
      unsigned seedFunction = std::chrono::system_clock::now().time_since_epoch().count();

    // seed random engine
      std::minstd_rand0 generator(seedFunction);


    // loop through the array and fill it with random values
      for (index = 0; index < currSize; index++)
      {
          arr[index] =(int)generator();
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
        cout << '\n' << "Element " << index << "= " << arr[index];

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
          for (index = 0; index < sizeOne; index++)
              dest[index] = src[index];

          
          dest[index] = '\0';
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


/*

Test analysis: Uniform Distribution
 It is the maximum entropy probability distribution
 for a random variable X under no constraint other than that it is contained in the distribution's supporto

*/

void storeTestFiles(ifstream& fin, char fileNames[][MAX_CHAR_ARR_SIZE], int& numOfFiles)
{
    // Declare and Initialize variables
      int index = 0;
      int len = 0;
      char fileName[255];
      char orgFileName[255];
      
    // Request file to open
      cout << '\n' << "Please enter the name of the test file collection: ";
      cin >> fileName;

      len = strLen(fileName);
      strCopy(fileName, orgFileName, len, 255);

    // open file
      fin.open(fileName);

    // loop through file 
      while (fin.good())
      {
          // file insert each name into the 2-D character array
          fin.getline( fileName, MAX_CHAR_ARR_SIZE);

          cout << '\n' << "File name: " << fileName;
          len = strLen(fileName);
          strCopy(fileName, fileNames[index], len, MAX_CHAR_ARR_SIZE);
          cout << '\n' << "FileNames[" << index << "] : " << fileNames[index];
          index++;
      }

      // return the number of files by reference
        numOfFiles = index ;

        cout << '\n' << "Number of Files received from " << orgFileName << ": " << numOfFiles;

      // file close
        fin.close();



}

void runTestsOnFiles(ifstream& fin, char fileNames[][MAX_CHAR_ARR_SIZE])
{
   // Declare and Initialize variables
    int index = 0;
    int rowIndex = 0;
    int testResult = 0;
    int numberOfTestFiles = 0;


   // TODO: TEST RESULT FILE 

   // get files and store them into a 2-D character array
    storeTestFiles(fin, fileNames, numberOfTestFiles);

   // iterate through each test file and run the functions on the files
    for (index = 0; index < numberOfTestFiles; index++)
    {


       // run test function on file
        testResult = numOfPositiveIntegersInFile(fin, fileNames[index]);
          
       // print test result
        cout << '\n';
        cout << "Function: Number Of Postive Integers operated on file: " << fileNames[index] << " the following result: " << testResult;
     
       // How many english characters are in each file?
        testResult = countNumOfEnglishCharacters(fin, fileNames[index]);

        cout << '\n';
        cout << "Function: Number of English Characters operated on file: " << fileNames[index] << " the following result: " << testResult;



       // 


    }

    fin.close();


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

int countNumOfEnglishCharacters(ifstream& fin, const char fileName[])
{

    // Declare and Initialize variables
      int numOfCharactersInFile = 0;
      char characterFromFile = 'j';
    // open file
      fin.open(fileName);

    // loop through the file
      while (fin.good())
      {
          // get a character from the file
          fin.get(characterFromFile);

          cout << '\n' << "Character from file: " << characterFromFile;

          // is the character a valid character?
          if (isdigit(characterFromFile) == 0)
          {
              // count the character
                ++numOfCharactersInFile;
          }

          // return the number of characters in the file

      }

      fin.close();

      return numOfCharactersInFile;

}

int countNumOfCharacters(ifstream& fin, const char fileName[])
{
    // Declare and Initialize variables
      int numOfCharacters = 0;

    // open file
      fin.open(fileName);

    // loop through the file
      while (fin.good())
      {

          // get a character from the file
          fin.get();

          // is the character a valid character?

          // count the character
          ++numOfCharacters;
      }
   
      //
      fin.close();

      // return the number of characters in the file
        return numOfCharacters;
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

/*
int numOfPositiveIntegersInFile(ifstream& fin, char fileName[])
{
    // Declare and Initialize variables
      char getCharacter = 'i';
      bool spaceDetected = false;
      bool continuedDigit = false;
      int numOfPositiveIntegersDetected = 0;
      int numOfErrors = 0;
    // Assume file parameters  
      /*
        1 2 -2
        301 42 1
        13 15 -4009
      */
    // open file
 //     fin.open(fileName);

    // Prime loop, spaceDetected must be false, so that the function does not return a result that is one off.
 //     spaceDetected = false;
  //    continuedDigit = true;

    // loop through file while the file is good
   /*   while (fin.good())
      {
          //  update condition: check each character
            fin.get(getCharacter);

// DEBUG:
           /* cout << "Character from file: " << getCharacter; // Create Debug functions
            cout << "\n" << "Character digit truth: " << (isdigit(getCharacter) !=0 );
           // pauseScreen();
           */
/*
          // if a space is detected then allow us to continue detecting positive and negative integers. the flag preventing a digit detection.
            if (getCharacter == CONST_SPACE)
            {
                spaceDetected = false;
                continuedDigit = false;
                numOfPositiveIntegersDetected++;
            }
          // if character is "-" or negative, then skip until a space is detected
            else if ((getCharacter == CONST_NEGATIVE_CHAR) ||  (getCharacter == CONST_ENDLINE))
                spaceDetected = false;

          // As long as a space is not detected then we know the character is something other ' ' 
             // therefore the character could potentially lead us the detection of a positive integer.
              
          // if character is a digit, then only count the postive integer when the space detected flag goes true. 
            // Function: isdigit, returns an integer: Complete Function prototype: int isdigit(int c); 
            else if ((isdigit(getCharacter) != 0) && (spaceDetected == false) && (continuedDigit == true))
            {
                spaceDetected = false;
                continuedDigit = true;
            }
            else if((isdigit(getCharacter) != 0) && (spaceDetected == false) && (continuedDigit == false))
            {

                continuedDigit = true;
            }
            else
            {
                /*cout << '\n' << "Error: The character was not a space, was not '-', was not an endline char";
                cout << '\n' << " and was not a digit, therefore this character might be a decimal point or ";
                cout << '\n' << " a character to be used for an expanded verision of this function."; 
                cout << '\n' << " Number of errors detected: " << numOfErrors;
                numOfErrors++;
                
            }
            
      }

          // Now that the file stream has stopped we need to check to see
            // if the final character was still apart of the last integer.
      if ((isdigit(getCharacter) != 0) && (spaceDetected == false) && (continuedDigit == true))
          numOfPositiveIntegersDetected++;

    // function stub
    return numOfPositiveIntegersDetected;
}
*/

int numOfPositiveIntegersInFile(ifstream& fin, char fileName[])
{
 /* Assumption file format
    

     1 2 -3
     -13 -15 16
     17 18 19


     --------------
      -1 2 3 34
      a1bb-789x
      3401 23 41
      ..........
      43 24
    
    
    
    */


    // Declare and Initialize variables
      int positiveIntegerCounter = 0;
      int isDigit = 0;
      char charFromFile = 'h';
      bool previousDigit = false;
      // not necessary since positive = is the same as not negative, bool positive = false;
      bool negative = false;

    // open file
      fin.open(fileName);

    // Prime Loop

      // previousDigit = false
      
      // negative = false

      // isDigit = 0 

      // TODO: summation = 0, integer array position = 0, exponent = 1, multipler = 10, currentdigit = 0

    // loop through file finding all the positiveIntegers
      while (fin.good())
      {
          // get a character
            fin.get(charFromFile);

          // is the character a digit? store result 
            isDigit = isdigit(charFromFile);

             // case 1. the character is not a digit and no digit was detected before this one, is the character a negative character?
               // if the negative character was detected then set the negative flag to true. 1-1
            if ((isDigit == 0) && (charFromFile == '-'))
            {

               // this character could also terminate an integer sequence, therefore we must do clean up.
                 // this would only be true if previousDigit was true.
                if ((previousDigit == true) && (negative == false))
                {   
                  // sequence terminated, count the integer and move on
                    // increment the positive integer counter
                      positiveIntegerCounter++;
                      previousDigit = false;
                }

                // set negative flag
                  negative = true;

                // was the previous did

            }


             // case 2. the character is not a digit and there was a digit detected before this one, this means the
               // function is no longer detecting an integer within the file, therefore we reset flags, 
                 // increment the result, and store the results.
                        // complete the integer, it could be true that we are completing a negative int or positive int
            else if ((isDigit == 0) && (previousDigit == true))
            {
                // Was the negative flag set?
                if (negative == true)
                {

                    // then set the negative flag back to false
                    negative = false;

                    // set the continued digit flag to false
                    previousDigit = false;
                }

                else // else the positive flag was set
                {

                    // set the continued digit flag to false
                    previousDigit = false;

                    // increment the positive integer counter
                    positiveIntegerCounter++;

                    //TODO: increase the multipler by ten multiplier = pow(currentMultipler,10), then sum = sum + digit*multipler.

                }
            }
             // case 2. the character is not a digit but is a negative, we set the negative flag, and eat until no digit is detected

             // case 3. the character is a digit and no digit was detected before this one(continuedDigit was false)
                      // we have a digit and have to continue to getdigits, check the negative set flag.
            else if((isDigit !=0) && (previousDigit == false))
            {


                // set previousDigit to true
                  previousDigit = true;

                // TODO: add the digit to the int arr, however do this when the continuedDigit flag is false.
                  // TODO math: sum is zero, then add the digit, we track the position of the digit, such that we use
                    // scientific notation to add the new digit.

            }
             // case 4. the character is a digit and there was a digit before this one, we continue getting digits
               // for each continued digit we increase our exponent one, we multiply this to the current sum
                 // then we add the new digit to the current sum. ONLY IF THE POSITIVE FLAG IS SET


             // if yes then we are keeping track of a positive integer, unless there was a negative infront.
               // a negative flag does to false only we are done eating the current negative integer.

             // cases 

             // else we are no longer tracking an integer
      }
      // close file stream
        fin.close();


    if((previousDigit == true) && (negative == false))
      positiveIntegerCounter++;

    return positiveIntegerCounter;
}
int numOfPositiveIntegersInFile(ifstream& fin, char fileName[], int positiveIntegers[], const int& arrSize)
{

    /* Assumption file format
    

     1 2 -3
     -13 -15 16
     17 18 19


     --------------
      -1 2 3 34
      a1bb-789x
      3401 23 41
      ..........
      43 24
    
    
    
    */


    // Declare and Initialize variables

    // open file

    // loop through file finding all the positiveIntegers

      // get a character

      // is the character a digit? 


         // case 1. the character is not a digit and no digit was detected before this one, move on, do nothing

         // case 2. the character is not a digit and there was a digit detected before this one, reset flags, increment, and store.

         // case 2. the character is not a digit but is a negative, we set the negative flag, and eat until no digit is detected

         // case 2. the character is a digit and no digit was detected before this one, we have a digit and have to continue to getdigits

         // case 3. the character is a digit and there was a digit before this one, we continue getting digits
           // for each continued digit we increase our multipler (10 in this case) by one, we multiply this to the current sum
             // then we add the new digit to the current sum.


         // if yes then we are keeping track of a positive integer, unless there was a negative infront.
           // a negative flag does to false only we are done eating the current negative integer.

         // cases 

         // else we are no longer tracking an integer






    // close file



    return 0;
}




int numOfNegativeIntegersInFile(ifstream& fin, char fileName[])
{

    return 0;
}

int numOfIntegersInFile(ifstream& fin, char fileName[])
{

    return 0;
}

int numOfDigitsInFile(ifstream& fin, char fileName[])
{
    return 0;
}

int countNumOfVectorsInFile(ifstream& fin, char fileName[])
{
    return 0;
}



