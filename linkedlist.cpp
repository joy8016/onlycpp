#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* tail;


    Node(int value){
        val = value;
        next = nullptr;
        tail = nullptr;
    }

};

void insertAtHead(Node* &head, int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void insertAtTail(Node* &head, int data ){
    Node* newnode = new Node(data);
    Node*temp =head;
    while(temp->next!=nullptr){
        temp= temp->next;
    }

    temp->next = newnode;
    newnode->next = nullptr; 
    
}

void deletenode(Node* head){
    Node* temp = head;
    

}

void display(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = nullptr;
    
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    display(head);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtTail(head, 8);
    display(head);
    

    return 0;
}