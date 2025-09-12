#include<bits/stdc++.h>
using namespace std;

//single inheritence

//parent class

class parent{
    public:
    int age;
    string name;

    //constructor

    // parent(int age, string name){
    //    this->age = age;
    //    this->name = name;
    //    cout<<"this is the parent class..\n";
    // }
};


//child class

class child: public parent, public parent2{
    public:

    int roll_no;

    //constructor

    // child(string name, int age, int roll_no): parent(age, name){
    //    this->roll_no = roll_no;
    //    cout<<"this is the child class..\n";
    // }

    void getInfo(){
        cout<<"child name: "<<name<<endl;
        cout<<"child age: "<<age<<endl<<"\t";
        cout<<"child roll_no: "<<roll_no<<endl;
       
    }

};

//multilevel inheritence


//parent class

class parent{
    public:
    int age;
    string name;

    //constructor

    // parent(int age, string name){
    //    this->age = age;
    //    this->name = name;
    //    cout<<"this is the parent class..\n";
    // }
};

//second parent class

class parent2: public parent{
    public:
    string color;

};
//child class

class child: public parent2{
    public:

    int roll_no;

    //constructor

    // child(string name, int age, int roll_no): parent(age, name){
    //    this->roll_no = roll_no;
    //    cout<<"this is the child class..\n";
    // }

    void getInfo(){
        cout<<"child name: "<<name<<endl;
        cout<<"child age: "<<age<<endl<<"\t";
        cout<<"child roll_no: "<<roll_no<<endl;
        cout<<"child color: "<<color;
    }

};

//multiple inheritence

//parent class

class parent{
    public:
    int age;
    string name;

    //constructor

    // parent(int age, string name){
    //    this->age = age;
    //    this->name = name;
    //    cout<<"this is the parent class..\n";
    // }
};

//second parent class

class parent2{
    public:
    string color;

};
//child class

class child: public parent, public parent2{
    public:

    int roll_no;

    //constructor

    // child(string name, int age, int roll_no): parent(age, name){
    //    this->roll_no = roll_no;
    //    cout<<"this is the child class..\n";
    // }

    void getInfo(){
        cout<<"child name: "<<name<<endl;
        cout<<"child age: "<<age<<endl<<"\t";
        cout<<"child roll_no: "<<roll_no<<endl;
        cout<<"child color: "<<color;
    }

};

int main(){

   
   child c1;
   c1.name = "joy";
   c1.age =45;
   c1.color = "white";
   c1.roll_no = 2334;

   c1.getInfo();
   
    return 0;

}