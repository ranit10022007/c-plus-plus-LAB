#include <iostream>
using namespace std;
void modifyValue(int num) {
    cout << "\n[Inside Function] Original copy received: " << num << endl;

    num = num + 100; 
    cout << "[Inside Function] After adding 100: " << num << endl;
}
int main() {
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;
    cout << "\n[Main] Value before calling function: " << userInput << endl;
    modifyValue(userInput);
    cout << "\n[Main] Value after function call: " << userInput << endl;
    cout << "Notice that the original input remains unchanged!" << endl;

    return 0;
}

