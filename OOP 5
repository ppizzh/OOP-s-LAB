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
//Enter Name:Shresth

//Enter Name:Tejas

//Enter Name:Anubhav

//Enter Name:Siddharth

//Enter Name:Aditya

//Name:Shresth
//Roll Number:3001
//Percentage:100
//Name:Tejas
//Roll Number:3002
//Percentage:77
//Name:Anubhav
//Roll Number:3003
//Percentage:82
//Name:Siddharth
//Roll Number:3004
//Percentage:63
//Name:Aditya
//Roll Number:3005
//Percentage:80
