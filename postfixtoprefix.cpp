#include<bits/stdc++.h>
using namespace std;

bool isOperator(char x){
    switch (x)
    {
    case '+':
        
       
    case '-':
       
    case '*':
       
    case '/':
       
    
   
       

        return true;
    }
    return false;

}

string postToPrfix(string postfix){

    //take a stack
    stack<string>s;

    for(int i =0; i<postfix.size(); i++){

        //check if not any operator

        if(isOperator(postfix[i])){
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            //take a temporary variable

            string temp = postfix[i] + op2 + op1;

            //again push this temp in stack

            s.push(temp);
        }
        else{
            s.push(string(1, postfix[i]));
        }
    }

    string ans = " ";
    while (!s.empty()){
        ans +=s.top();
        s.pop();
    }
    return ans;
 
    
}

int main(){

    cout<<"prefix: "<<postToPrfix("ab+cd-*");
    return 0;

}