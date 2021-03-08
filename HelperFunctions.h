/*

   Author: Gary Lougheed
   Date: 3/4/2021

   Library description: This library contains array function helpers and basic user input and output functions.



*/

// Header files
#include <iostream>
#include <fstream>
using namespace std;

// Global Constants
const int MAX_INTEGER_ARR_SIZE = 1000;
const int MAX_FLOAT_ARR_SIZE = 1000;
const int MAX_DOUBLE_ARR_SIZE = 1000;
const int MAX_CHAR_ARR_SIZE = 1000;
const int MAX_NUM_COLS = 10000; 
const char CONST_NULL_CHAR = '\0';
const char CONST_ENDLINE = '\n';
const char CONST_SPACE = ' ';
const char CONST_NEGATIVE_CHAR = '-';
const int MAX_CSTRING_SIZE= 255;
const char MAX_NUM_FILES = 100;


// Prints an iostream dialouge about the character, such that the character is either a digit or not, and prints the character. 
  // Useful for file stream debugging.
void debugCharacter(char character);

/*
name: run tests on a group of files
input: a filename listing the  files to be tested.
  Assumed Format:
     test01.txt
     test02.txt
     test03.txt
output: prints the results for each file, print: FileName, Results: 
           and returns a 2D-character array with the name of each test file.
process: iterate through the 2-D cstyle array file each entry from file output stream. Then run the test functions on 
           each file.
dependancies: iostream fstream
*/
void runTestsOnFiles(ifstream& fin, char fileNames[][MAX_CHAR_ARR_SIZE]);

void storeTestFiles(ifstream& fin, char fileNames[][MAX_CHAR_ARR_SIZE], int& numOfFiles);


void initializeArr(int arr[MAX_INTEGER_ARR_SIZE], const int& currSize);

void initializeArr(float arr[MAX_FLOAT_ARR_SIZE], const int& currSize);

void initializeArr(double arr[MAX_DOUBLE_ARR_SIZE], const int& currSize);

void initializeArr(char arr[MAX_CHAR_ARR_SIZE], const int& currSize);

void initializeArr(int** arr, const int& currRowSize, const int& currColSize);

void printArray(int arr[MAX_INTEGER_ARR_SIZE], const int& currSize);

void printArray(float arr[MAX_FLOAT_ARR_SIZE], const int& currSize);

void printArray(double arr[MAX_DOUBLE_ARR_SIZE], const int& currSize);

void printArray(char arr[MAX_CHAR_ARR_SIZE], const int& currSize);

void clearScreen();

void pauseScreen();

void printPrompt(char print[]);


void strCopy(const char src[], char dest[], const int& sizeOne, const int& sizeTwo);

int strLen(const char stringOne[]);

bool strIsEqual(const char stringOne[], const char stringTwo[], const int& sizeOne, const int& sizeTwo);

void strConcate(const char stringOne[], const char stringTwo[], char result[], const int& sizeOne, const int& sizeTwo, const int& resultSize);





int countWords(ifstream& fin,char fileName[]);

int countEndLines(ifstream& fin,char fileName[] );

int countNumOfCharacter(ifstream& fin, char fileName[],const char& characterToBeCounted);

/*
name:
input:
output:
process:
dependancies:
*/
int numOfPositiveIntegersInFile(ifstream& fin, char fileName[]);

int numOfPositiveIntegersInFile(ifstream& fin, char fileName[], int positiveIntegers[], const int& arrSize);

int numOfPositiveIntegersInFile(ifstream& fin, char fileName[], int positiveIntegers[][MAX_NUM_COLS]);

int numOfNegativeIntegersInFile(ifstream& fin, char fileName[]);

int numOfIntegersInFile(ifstream& fin, char fileName[]);

int numOfDigitsInFile(ifstream& fin, char fileName[]);

int countNumOfVectorsInFile(ifstream& fin, char fileName[]);



#pragma once 