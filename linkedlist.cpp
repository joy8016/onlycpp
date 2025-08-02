#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
   


    Node(int value){
        val = value;
        next = nullptr;
        
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

// void deletenode(Node* head){
//     Node* temp = head;
    

// }



void display(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
// void deletealternatenode(Node* &head){
//     Node* curr_node = head;
//     while(curr_node!=nullptr && curr_node->next!=nullptr){
//         Node* temp = curr_node->next;
//         curr_node->next = curr_node->next->next;
//         free(temp);
//         curr_node = curr_node->next;
//     }
// }


//reverse the linked list

Node* reversell(Node* &head){
    Node* prev = nullptr;
    Node* curr = head;
    
    while(curr!=nullptr){
        Node* next = curr->next;

        curr->next = prev;
        
        prev= curr;
        curr = next;
       
    }
    Node* newhead = prev;
   
    return newhead;
}

void reverse(Node* &head){
    if(head==nullptr){
        return;
    } 

    
        reverse(head->next);
        cout<<head->val<<"->"<<endl;

    
}


Node* reverselinkedlist(Node* &head){

    //base case

    if(head==nullptr || head->next==nullptr){
        return head;
    }

    Node* new_node = reverselinkedlist(head->next);

    head->next->next = head;
    head->next = nullptr;
    return new_node;
}

int main(){
    Node* head = nullptr;
    
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,9);
    display(head);
    
    // reverse(head);
    // display(head);
    // head = reversell(head);
    // display(head);

    head = reverselinkedlist(head);
    display(head);
    

    return 0;
}