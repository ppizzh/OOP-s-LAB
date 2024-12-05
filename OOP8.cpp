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

class Sport {
    string spname="Basketball";

public:
    void display() {
        cout << "Sport Name: " <<spname<< endl;
    }
};

class Student : public Person, public Sport {
public:
    void display() {
        Person::display();  
        Sport::display();   
    }
};

int main() {
    Student st;
    st.setName();  
    st.display();
    return 0;
}
//Expected Output:
//Enter Name: Piyush
//Name: Piyush
//Sport Name: Basketball
