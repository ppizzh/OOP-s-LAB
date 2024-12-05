#include <iostream>
using namespace std;

class Person {
    char name[30];

public:
    void setName() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {  
        cout << "Name: " << name << endl;
    }
};

class SportPerson : public Person {
    string spname="Cricket";

public:
    void displaySport() {
        cout << "Sport Name: " <<spname << endl;
    }
};

class Student : public SportPerson {
public:
    void display() {
        Person::display();  
        displaySport();   
    }
};

int main() {
    Student st;
    st.setName();  
    st.display();
    return 0;
}
//Expected Output:
//Enter Name: Shresth 
//Name: Shresth
//Sport Name: Cricket
