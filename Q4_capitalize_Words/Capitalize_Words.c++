//Q4. Write a program that accepts a string as input, capitalizes the first letter of each word in the 
// string, and then returns the result string.
// Examples: 
// "hi"=> returns "Hi"
// "i love programming"=> returns "I Love Programming"


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//function to  capitalize first letter of each word
string capitalizeFirstLetter(string str) {
    // iterate over each  character
    for (int i = 0; i < str.length(); i++) {
        // if its 1st charcter 
        if (i == 0 || str[i - 1] == ' ') {
            // capitalize
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

// Call the 'capitalizeFirstLetter' function with 'input' as the argument
    string result = capitalizeFirstLetter(input);

    cout << "Capitalized String: " << result << endl;

    return 0;
}
