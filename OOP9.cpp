#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<<"\nEnter name:";
        cin>>name;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
    }
};
class sport:public Person{
    int m =50;
    public:
    void display(){
        Person::display();
        cout<<m;
    }
};
class Student:public Person{
    int n =100;
    public:
    void display(){
        Person::display();
        cout<<n;
    }
};
int main(){
    sport sp;
    Student st;
    sp.read();
    sp.display();
    st.read();
    st.display();
    return 0;
}
//Expected Output:
//Enter name:Piyush
//Name:Piyush
//50
//Enter name:Rakesh
//Name:Rakesh
//100
