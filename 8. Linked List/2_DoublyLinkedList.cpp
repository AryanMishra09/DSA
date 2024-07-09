#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(int d){
        this->data = d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"Deleted node : "<<val<<endl;
    }
};

void print(Node * head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

int getLength(Node* head){
    Node * temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int d){

    if(head==NULL){
        Node *temp = new Node(d);
        head=temp;
    }else{
        Node *temp = new Node(d);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    
}

void insertAtTail(Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }else{
        Node * temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
};

void insertAtPosition(Node * &head,Node * &tail, int d, int position){
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    Node * temp = head;
    for(int i=1; i<position-1; i++){
        temp = temp->next;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node * nodeToInsert = new Node(d);
    nodeToInsert->next =temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
     
}

void deleteNode(Node* &head, int position){
    
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    } else{
        Node* current = head;
        Node* previous = NULL;
        for(int i=1; i<position; i++){
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
        // current->next->prev = previous;
        current->next = NULL;
        current->prev = NULL;
        delete current;
    }
}

int main(){
    Node* node1 = new Node(4);
    Node* head = node1; 
    Node* tail = node1;
    print(head);
    
    insertAtHead(head, 5);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 8);
    print(head);

    insertAtTail(tail, 80);
    print(head);
    insertAtTail(tail, 3);
    print(head);

    insertAtPosition(head, tail, 45, 3);
    print(head);
    insertAtPosition(head, tail, 100, 1);
    print(head);
    insertAtPosition(head, tail, 101, 9);
    print(head);

    deleteNode(head, 3);
    print(head);
    
    cout<<"Length of node : "<<getLength(head)<<endl;
    cout<<"Head : "<<(head->data)<<endl;
    cout<<"Tail : "<<(tail->data)<<endl;

    return 0;
}