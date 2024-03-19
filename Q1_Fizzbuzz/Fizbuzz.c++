//  Q1. Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
// multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
// "FizzBuzz"

#include <iostream>
using namespace std;

int main() {
    // iterates from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // if divisible by both 3 and 5 = print Fizzbuzz 
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        // if disvible by 3 = print Fizz
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        // if disvible by 5 = print Buzz
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}