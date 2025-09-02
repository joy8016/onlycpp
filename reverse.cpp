#include<bits\stdc++.h>
#include<iostream>
#include<string>
using namespace std;
string reverse_str(string s){
    stack<char>str;
    for(int i =0; i<s.length(); i++){
        // cout<<s[i]<<" ";
      str.push(s[i]);
    }
    while(!str.empty()){
        cout<<"the string is:"<<str.top()<<" ";
        str.pop();
    }
  
    return s;
    
    
    
}

int main(){

    
    cout<<"\nafter reversing:"<<reverse_str("joydeb");
    

    return 0;

}