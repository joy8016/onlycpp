#include<bits/stdc++.h>
using namespace std;

class student{
    //access modifiers
    public:
     string name;
     int roll_no;
     string className;
     double cgpa;

     //parametarized constructor
     student(string name, int roll_no, string className, double cgpa){
        this->name = name;
        this->roll_no = roll_no;
        this->cgpa = cgpa;
        this->className = className;
     }

     //copy constructor
     student (Student &obj){
        this->name = obj.name;
        this->roll_no = obj.roll_no;
        this->cgpa = 
     }

     //method

     void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"roll-no:"<<roll_no<<endl;
        cout<<"className:"<<className<<endl;
        cout<<"cgpa:"<<cgpa;
     }

};

int main(){
    //first object

    student s1("joy", 3, "two", 6.4);
    // cout<<s1.cgpa;

   
    student s2( s1));
    s2.getInfo();
    // s1.getInfo();
    return 0;

}