
/*

Author: Gary Lougheed
date: 3/3/2021

C_STYLE String library Helper

Program Description: Library designed to accomplish basic c_style string functions

*/


// Global Constants
const int MAX_STRING_SIZE = 256; 
const char END_LINE = '\n';
const char NULL_CHAR = '\0';


// Function Prototypes
bool concateStrings(char stringOne[MAX_STRING_SIZE], char stringTwo[MAX_STRING_SIZE], char resultantString[MAX_STRING_SIZE]); 

int stringLength(char src[MAX_STRING_SIZE]);

bool isNullStr(char src[MAX_STRING_SIZE]);

bool stringsEqual(char stringOne[MAX_STRING_SIZE], char stringTwo[MAX_STRING_SIZE]);

void printString(char myString[MAX_STRING_SIZE]);

bool stringReplace(char orginString[MAX_STRING_SIZE], char replacementString[MAX_STRING_SIZE]);













