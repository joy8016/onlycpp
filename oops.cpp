#include <bits/stdc++.h>
using namespace std;

class student
{
   // access modifiers
public:
   string name;

   float *cgpaptr;

   // parametarized constructor
   student(string name, float cgpa)
   {
      this->name = name;

      cgpaptr = new float;
      *cgpaptr = cgpa;
   }

   //destructor
   ~student(){
      cout<<"hi i delete everything"<<endl;
      delete cgpaptr;
   }

   // copy constructor
   // student(student &obj)
   // {
   //    this->name = obj.name;
   //    // this->cgpaptr = obj.cgpaptr;
   //    cgpaptr = new float;

   //    *cgpaptr = *obj.cgpaptr;
   // }

   // method

   void getInfo()
   {
      cout << "name:" << name << endl;

      cout << "cgpa:" << *cgpaptr << endl;
   }
};

int main()
{
   // first object

   student s1("joy", 6.4);
   // cout<<s1.cgpa;
   s1.getInfo();











   // // (*s1.cgpaptr) = 7.8;
   // s1.getInfo();
   
   // cout << "after assinging cgpa vlaue" << endl;
   // student s2(s1);
   // *(s2.cgpaptr)=9.3;

   
   // s2.name = "joydeb";
   // cout<<"s2 information"<<endl;

   // s2.getInfo();
   // cout<<"s1 information:"<<endl;
   // s1.getInfo();

   // s1.getInfo();
   return 0;
}