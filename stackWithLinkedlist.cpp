#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int value){
        data = value;
        next = nullptr;
    }

    
};

class Stack{
    node *top;
    int size;

    public:

    Stack(){
        top = nullptr;
        size = 0;

    }

    void push(int value){
        node *temp = new node(value);
        if(temp == nullptr){
            cout<<"the Stack is overflow"<<endl;
        }
        temp->next = top;
        top = temp;
        size++;
        cout<<"pushed "<<value<<endl;
    }

    void pop(){
        node *temp = top;
        cout<<"popped "<<top->data<<endl;

        top =temp->next ;
        
        delete temp;
        size--;
        
    }

};

int main(){

    Stack st;
    st.push(3);
    st.push(32);
    st.push(2);
    st.push(5);
    st.push(7);
    st.pop();
    return 0;
    

}