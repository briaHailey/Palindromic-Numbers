/* Name: Bria Weisblat
Date: 10/24/2022
Section: 4
Assignment: Homework 4 Extra Credit Problem - Palindromic Numbers
Due Date: 10/24/2022
About this project: This program prints all the even palindromic numbers of
a user-entered number of digits that are also multiples of a user-entered number.
Assumptions: Assume that the user will only enter the proper type of data.

All work below was performed by Bria Weisblat */

#include <iostream>
using namespace std;

// Function Declarations
double reverseDiff(int userNum);
void printPalin(int numDigits, int userFactor);

//Main function
int main() {

    int numDigits;
    int userFactor;


    cout << "Enter the number of digits: ";
    cin >> numDigits;
    // Ensures that numDigits is in range
    if (numDigits < 1 || numDigits > 9 )
    {
        cout << "The number is not in the expected range (1-9)" << endl;
    }
    cout << "Enter the factor: ";

    cin >> userFactor;
   // Ensures that userFactor is in range
    if (userFactor <= 1)
    {
        cout << "The number is not in the expected range (2 or higher)" << endl;
    }

    else {
        // Prints even palindromic numbers that are multiples of the user-entered factor
        cout << "The even " << numDigits << " digit palindrome numbers that are multiples of " << userFactor << " are:"
             << endl;
        printPalin(numDigits, userFactor);
    }

    return 0;
}

// Function Definitions

// Reverses a number
double reverseDiff(int userNum) {
    int lastDigit;
    int reverse = 0;

    int newNumber = userNum;
    while (newNumber > 0) {
        lastDigit = newNumber % 10;
        reverse = (reverse * 10) + lastDigit;
        newNumber = newNumber / 10;
    }

    return reverse;

}

// Loops through all numbers with the given number of digits that are also multiples of the given factor
void printPalin (int numDigits, int userFactor) {
     int num;

    switch (numDigits) {
        case 2:
            num = 10;
            break;
        case 3:
            num = 100;
            break;
        case 4:
            num = 1000;
            break;
        case 5:
            num = 10000;
            break;
        case 6:
            num = 100000;
            break;
        case 7:
            num = 1000000;
            break;
        case 8:
            num = 10000000;
            break;
        case 9:
            num = 100000000;
            break;
     }

    // Creates a range
     for (int currentNumber = num; currentNumber < num * 10; currentNumber++)
    {
       // Prints palidromes that adhere to the requirements
         if ((currentNumber % userFactor == 0) && (currentNumber % 2 == 0) && (currentNumber == reverseDiff(currentNumber))) {
            cout << currentNumber << endl;
       }
    }



}