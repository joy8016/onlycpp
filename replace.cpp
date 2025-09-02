#include<bits\stdc++.h>
using namespace std;

string replace_str(string s){
    //get a variable for store ascii value of character
    int char_value ;

    for(int i = 0; i<s.length(); i++){
        int char_value = int (s[i]);

        //check for big Z to convert big A 
        if(char_value == 90){
            s[i] = char(65);
        }
        else if(char_value == 122){
            s[i] = char(97);
        }
        else if(char_value>=90 && char_value <=65 || char_value>=97 && char_value<=122){
            s[i] = char(char_value+1);
        }
    }
    return s;
}

int main(){

    cout<<"the string :"<<replace_str("joydeb");
    return 0;

}