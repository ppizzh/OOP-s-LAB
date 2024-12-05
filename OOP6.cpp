#include <iostream>
using namespace std;

class Employee {
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee myobj;
    myobj.setSalary(70000);
    cout << myobj.getSalary();
    return 0;
}
//Expected Output:
//70000
