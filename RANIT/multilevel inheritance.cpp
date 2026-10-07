#include<iostream>
#include <iostream>
#include <string>
using namespace std;
class Student 
{
protected:
    int rollNo;
    string name;
public:
    void getStudentDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    void displayStudentDetails() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
    }
};
class Exam : public Student {
protected:
    float marks[6];
public:
    void getMarks() {
        cout << "\nEnter marks for 6 subjects:\n";

        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void displayMarks() {
        cout << "\nMarks obtained:";
        for (int i = 0; i < 6; i++) {
            cout << "\nSubject " << i + 1 << ": " << marks[i];
        }
    }
};
class Result : public Exam {
private:
    float totalMarks;
    float percentage;
public:
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }
        percentage = totalMarks / 6;
    }
    void displayResult() {
        cout << "\n\n----- STUDENT RESULT -----";
        displayStudentDetails();
        displayMarks();
        cout << "\n\nTotal Marks: " << totalMarks;
        cout << "\nPercentage: " << percentage << "%";
        if (percentage >= 40)
            cout << "\nResult: PASS";
        else
            cout << "\nResult: FAIL";
    }
};
int main() {
    Result r;
    cout << "Enter Student Details\n";
    r.getStudentDetails();
    r.getMarks();
    r.calculateResult();
    r.displayResult();
    return 0;
}

