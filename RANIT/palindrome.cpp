#include <iostream>
using namespace std;
int main() 
{
    int num, originalNum, remainder;
    long long reversedNum = 0; 
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum && originalNum >= 0) 
    {
        cout << originalNum << " is a palindrome number." << endl;
    } 
    else 
    {
        cout << originalNum << " is not a palindrome number." << endl;
    }
    return 0;
}
