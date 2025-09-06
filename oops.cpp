#include<bits/stdc++.h>
using namespace std;

class student{
    //access modifiers
    public:
     string name;
    
     float *cgpaptr;

     //parametarized constructor
     student(string name, float cgpa){
        this->name = name;
        
        cgpaptr = new float;
        *cgpaptr = cgpa;

     }

     //copy constructor
   //   student (student &obj){
   //      this->name = obj.name;
        
   //      this->cgpaptr = obj.cgpaptr
        
   //   }

     //method

     void getInfo(){
        cout<<"name:"<<name<<endl;
       
        
        cout<<"cgpa:"<<*cgpaptr<<endl;
     }

};

int main(){
    //first object

    student s1("joy",  6.4);
    // cout<<s1.cgpa;
    cout<<"before s1 value"<<endl;
    cout<<*(s1.cgpaptr)<<endl;

   
    student s2( s1);
    (*s1.cgpaptr )= 7.8;
     s1.name = "joydeb";
    cout<<"after assinging cgpa vlaue"<<endl;
    
   cout<< *(s1.cgpaptr);
   s1.getInfo();

    // s1.getInfo();
    return 0;

}