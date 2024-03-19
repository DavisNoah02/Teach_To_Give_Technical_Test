// Q5. Reverse Integer : 
// Write a program that takes an integer as input and returns an integer with reversed digit 
// ordering.


#include <iostream>
using namespace std;

// function to reverse 
int reverseDigits(int num) {
    // Initializing a variable to store the reversed digit
    int reversed = 0;
    while (num != 0) {
        // Extract the last digit of the number
        int digit = num % 10;
        // Append the extracted digit to the reversed number
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    // Return the reversed number
    return reversed;
}


int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    // function call with num as the argument
    int reversedNum = reverseDigits(num);
    cout << "Reversed number: " << reversedNum << endl;
    
    return 0;
}
