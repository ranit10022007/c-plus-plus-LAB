#include <iostream>
using namespace std;
class Person 
{
    char name[64];
    int age;
    char address[64];
    float salary;
public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    int getAge() { 
        return age; 
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nAddress: " << address;
        cout << "\nSalary: " << salary << endl;
    }
    static int youngest(Person p[], int n) {
        if (n <= 0) return 0;
        int minAge = p[0].age;
        for (int i = 1; i < n; i++) {
            if (p[i].age < minAge) minAge = p[i].age;
        }
        return minAge;
    }
    static int eldest(Person p[], int n) {
        if (n <= 0) return 0;
        int maxAge = p[0].age;
        for (int i = 1; i < n; i++) {
            if (p[i].age > maxAge) maxAge = p[i].age;
        }
        return maxAge;
    }
};
int main() {
    Person p[10];
    int count = 2; 
    cout << "Enter details of " << count << " persons:\n";
    for (int i = 0; i < count; i++) {
        cout << "\nPerson " << i + 1 << endl;
        p[i].input();
    }
    cout << "\nYoungest Age = " << Person::youngest(p, count);
    cout << "\nEldest Age = " << Person::eldest(p, count) << endl;
    return 0;
}

