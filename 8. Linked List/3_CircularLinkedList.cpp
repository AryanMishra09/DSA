#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Deleted node: "<<val<<endl;
    }
};

void insertNode(Node* &tail ,int element, int d ){
    //assuming that the element is present in the list:

    //empty list
    if(tail == NULL){
        Node * newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    } else{             //non-empty list
        Node * newNode = new Node(d);
        Node * temp = tail;
        while(temp->data != element){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode; 
    }
}

void print(Node * tail){
    Node* temp = tail;
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout<<endl;
};

void deleteNode(Node * &tail, int value){
    if(tail == NULL){
        cout<<"List is empty";
        return;
    } else{
        Node * prev = tail;
        Node * curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        //1 element linked list
        if(curr == prev){
            tail= NULL;
        }

        // >=2 element linked list
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }
}

bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }
    Node * temp = head->next;
    while(temp != NULL && temp!=head){
        temp = temp->next;
    }
    if(temp == head ){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!=NULL){

        if(visited[temp] == true){
            cout<<"Loop in node: "<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetetionAlgo(Node * &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<"Loop detected at : "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartPointOfLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetetionAlgo(head);
    if(intersection==NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow==intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartPointOfLoop(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
    return;
}

int main(){

    Node * tail = NULL;

    insertNode(tail, 4, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 10);
    print(tail);
    insertNode(tail, 9, 1);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    cout<<"Is circular Linked List: "<<isCircularList(tail)<<endl;
    cout<<"Is loop present: "<<detectLoop(tail)<<endl;
    cout<<"Is loop present: "<<floydDetetionAlgo(tail);
    Node* startPoint = getStartPointOfLoop(tail);
    if(startPoint == NULL){
        cout<<"No loop present"<<endl;
    }else{
        cout<<"Loop present at(by getStartPoint function): "<<startPoint->data;
    }
    return 0;
}