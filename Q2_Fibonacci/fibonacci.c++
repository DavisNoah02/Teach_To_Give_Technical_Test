// Q2.Write a program to generate the Fibonacci sequence up to 100.

#include <iostream>
using namespace std;

int main() {
    int n = 100, num1 = 0, num2 = 1, nextTerm = 0;

    cout << "Fibonacci Series up to " << n << " terms: ";

// while loop for checking condition: if nextterm is < 100
    while (nextTerm <= n) {
        cout << nextTerm << ", ";
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }

    return 0;
}
