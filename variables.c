#include <stdio.h>
/*int - stores whole numbers (integers), such as 123 or -123
float - stores numbers with decimals, such as 19.99 or -19.99
char - stores a single character, such as 'a' or 'B'. Characters are surrounded by single quotes*/
int main()
{
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// before printing we need a place holder
// every place holder begind with %(percentage sign) 
// Print variables
printf("%d\n", myNum); /* This Outputs 15 */ //("%d" for integers)
printf("%f\n", myFloatNum);  /* This Outputs 5.99 */ //("%f" for decimals)
printf("%c\n", myLetter);  /* This Outputs 15 */ //("%c" for letters)
printf("My number is %d and my letter is %c\n", myNum, myLetter);
printf("My favorite number is: %d", 21); // this will print a value without a variable
printf("My favorite letter is: %c\n", 'A'); // this too will print a value without a variable

int x = 5,y = 10;
printf("%d\n", x + y); //this will initiate Addition
float z;
z = 3.9;
printf("%.2f\n", z);
int m = 0;
m =+ 1;
printf("%d\n", m);
return 0;
}