#include<bits\stdc++.h>
using namespace std;

string capitalize_str(string s){
    
    for(int i = 0; i<s.length(); i++){
          if(i==0 || i-1==' '){
            s[i]=toupper(s[i]);
          }
    }
    return s;
}

int main(){
    cout<<"this is the text:"<<capitalize_str("hi i am joydeb");
    return 0;

}