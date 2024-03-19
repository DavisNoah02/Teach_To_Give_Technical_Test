// Q3.Write a program that takes an integer as input and returns true if the input is a power of two.
// Examples: 
// 8=> returns true
// 6=> returns false

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    return 0;
}
