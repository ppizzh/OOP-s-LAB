#include <iostream>
using namespace std;

class Person {
protected:
    char name[50];
public:
    void read() {
        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

class Sport : public Person {
    int m = 50;
public:
    void display() {
        Person::display();
        cout << "Sport Score: " << m << endl; 
    }
};

class Student : public Person {
    int n = 100;
public:
    void display() {
        Person::display();
        cout << "Student Score: " << n << endl;
    }
};

class Result : public Student, public Sport {
    float average;
public:
    void calculateAverage() {
        average = (100 + 50) / 2.0;
    }
    
    void display() {
        Student::display(); 
        Sport::display();   
        cout << "Average Score: " << average << endl;
    }
};

int main() {
    Result res;
    res.Student::read(); 
    res.Sport::read();   
    res.calculateAverage(); 
    res.display(); 
    return 0;
}
//Expected Output:
//Enter Name: Piyush
//Enter Name: Kunal
//Name: Piyush
//Student Score: 100
//Name: Kunal
//Sport Score: 50
//Average Score: 75
