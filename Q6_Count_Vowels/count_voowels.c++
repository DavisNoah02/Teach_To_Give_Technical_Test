// Write a program that counts the number of vowels in a sentence.
// eg " Hello World " => returns 2

#include <iostream>
#include <string>

using namespace std;

int count_vowels(const std::string& sentence) {
    int count = 0;
    string vowels = "aeiouAEIOU";

    //loop through charcter in the input string = sentence
    for (size_t i = 0; i < sentence.length(); i++) {
        // check each charcter is present in vowels string var 
        if (vowels.find(sentence[i]) != string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence = "Teach To Give";
    cout << count_vowels(sentence) << std::endl;
    return 0;
}