#include<iostream>
using namespace std;
class Marks{
    private:
    int rno;
    float perc;
    public:
    Marks(){
         rno = 0;
         perc = 0.0f;
    }
    Marks(int r, float p){
        rno = r;
        perc = p;
    }
    void printDetails() {
        cout<<"Roll Number:"<<rno<<endl;
         cout<<"Percentage:"<<perc<<endl;
    }
};
class Student{
    private:
    Marks objm;
    string name;
    public:
    void setName(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<endl;
    }
    void printResult(Marks obj) {
        objm = obj;
        cout<<"Name:"<<name<<endl;
        objm.printDetails();
    }  
};
int main()
{
    Marks mks[5]={Marks(3001,90),Marks(3002,77), Marks(3003,82), Marks(3004,63), Marks(3005,80)};
    Student std[5];
    for(int i=0; i<5;i++){
        std[i].setName();
    }
    for(int i=0; i<5;i++){
        std[i].printResult(mks[i]);
    }
    return 0;

}
//Expected Output:
//Enter Name:Piyush

//Enter Name:Tarun

//Enter Name:Rakesh

//Enter Name:Ram

//Enter Name:Kunal

//Name:Piyush
//Roll Number:1001
//Percentage:100
//Name:Tarun
//Roll Number:1002
//Percentage:65
//Name:Rakesh
//Roll Number:1003
//Percentage:77
//Name:Ram
//Roll Number:1004
//Percentage:87
//Name:Kunal
//Roll Number:1005
//Percentage:80
