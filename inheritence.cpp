#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    string name;
    int age;

    // person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    //non-paramerarized constructor

    person(){

    }

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;

    }


    

};

class Parent: public person{
    public:
    int weight;
    int height;


    Parent(){

    }

};


//child class

class child: public person,Parent{
    public:

    int roll_no ;


    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll_no:"<<roll_no<<endl;
        cout<<"weight:"<<weight<<endl;
        cout<<"height:"<<height<<endl;
    }

};

int main(){

    // person p1("joy", 23);
    // p1.getInfo();

    child c1;
    c1.name = "uma";
    c1.age = 20;
    c1.roll_no = 12;
    c1.getInfo();
    return 0;

}