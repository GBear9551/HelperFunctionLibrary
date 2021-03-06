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
const int MAX_INTEGER_ARR_SIZE = 10000;
const int MAX_FLOAT_ARR_SIZE = 10000;
const int MAX_DOUBLE_ARR_SIZE = 10000;
const int MAX_CHAR_ARR_SIZE = 10000;
const int MAX_NUM_COLS = 100000; 
const char CONST_NULL_CHAR = '\0';
const char CONST_ENDLINE = '\n';
const char CONST_SPACE = ' ';
const char CONST_NEGATIVE_CHAR = '-';
const int MAX_CSTRING_SIZE= 255;

// Prints an iostream dialouge about the character, such that the character is either a digit or not, and prints the character. 
  // Useful for file stream debugging.
void debugCharacter(char character);

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