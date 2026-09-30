#include <iostream>
#include <iomanip>
#include <cstring> 

using namespace std;

class Person {
    char name[64];
    int age;
    char address[64];
    float basic;
    float hra;
    float da;
    float pf;
    float gross;
    float net;

public:
    Person(const char n[], int a, const char addr[], float b) {

        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
        
        strncpy(address, addr, sizeof(address) - 1);
        address[sizeof(address) - 1] = '\0';
        
        age = a;
        basic = b;
        hra = basic * 0.20f;
        da = basic * 0.10f;
        pf = basic * 0.12f;
        gross = basic + hra + da;
        net = gross - pf;
    }

    void display() {
        cout << "\n         SALARY SLIP          ";
        cout << "\nName         : " << name;
        cout << "\nAge          : " << age;
        cout << "\nAddress      : " << address;
        cout << fixed << setprecision(2);
        cout << "\nBasic Salary : Rs. " << basic;
        cout << "\nHRA (20%)    : Rs. " << hra;
        cout << "\nDA (10%)     : Rs. " << da;
        cout << "\nGross Salary : Rs. " << gross;
        cout << "\nPF (12%)     : Rs. " << pf;
        cout << "\nNet Salary   : Rs. " << net;
    }
};
int main() {
    Person *p[10];
    char name[64];
    char address[64];
    int age;
    float basic;
    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        cout << "Name: ";
        cin >> ws; 
        cin.getline(name, sizeof(name));
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> ws;
        cin.getline(address, sizeof(address));
        cout << "Basic Salary: ";
        cin >> basic;
        p[i] = new Person(name, age, address, basic);
    }
    cout << "\n\nSALARY SLIPS OF EMPLOYEES\n";
    for (int i = 0; i < 2; i++) {
        p[i]->display();
        delete p[i]; 
    }
    return 0;
}

