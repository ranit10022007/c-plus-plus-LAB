#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}
int main() {
    string userInput;
    cout << "Enter a string (single word): ";
    cin >> userInput;
    if (isPalindrome(userInput)) {
        cout << "\"" << userInput << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << userInput << "\" is not a palindrome." << endl;
    }
    return 0;
}

