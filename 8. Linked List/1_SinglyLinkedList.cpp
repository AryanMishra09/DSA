#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void insertAtHead(int data, Node* &head){   //maine reference isliye liya kuyki mai nhi chahta ki nayi copy banne aur usme changes ho, mai chahta hu ki jo original linked list hai usme changes ho
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(int data, Node* &tail){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    Node* temp = head;
    
    ///insert at start:
    if(position==1){
        insertAtHead(data, head);
        return;
    }

    for(int i=1; i<position-1; i++){
        temp = temp->next;
    }

    //inserting at last:
    if(temp->next == NULL){
        insertAtTail(data, tail);
        return;
    }

    //creating node for data:
    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head, int position){

    //deleting first node:
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    //deleting any other node:
    else{
        Node* current = head;
        Node* prev = NULL;
        for(int i=1; i<position; i++){
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

//Approach - 1 for reversing linked list
//iterative way:
Node* reverseList(Node* head) {
    // empty list or single element linked list
    if(head == NULL || head->next ==NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}


//Approach - 2 for reversing linked list 
//recursive way:
void recursiveReverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head= prev;
        return;
    }
    recursiveReverse(head, curr->next, curr);
    curr->next = prev;
    return;
}

Node* reverseListRecursion(Node* head) {
    if(head == NULL || head->next ==NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    recursiveReverse(head, curr, prev);
    return head;
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

// Sorting 0s, 1s, 2s by using method 1:
void sortMethod1(Node* &head){
    if(head == NULL){
        return;
    }
    int zeroNode = 0;
    int oneNode = 0;
    int twoNode = 0;
    Node* temp = head;
    while(temp!= NULL){
        if(temp->data == 0){
            zeroNode++;
        }else if(temp->data == 1){
            oneNode++;
        }else{
            twoNode++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp!=NULL){
        if(zeroNode != 0){
            temp->data = 0;
            zeroNode--;
        }else if(oneNode != 0){
            temp->data = 1;
            oneNode--;
        }else{
            temp->data = 2;
        }
        temp = temp->next;
    }
}

// Sorting 0s, 1s, 2s by using method 2:
void sortMethod2(Node* &head){
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;
    Node* twoTail = twoHead;
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0){
            Node* temp1 = new Node(0);
            insertAtTail(0, zeroTail);
        } else if(temp->data == 1){
            Node* temp1 = new Node(1);
            insertAtTail(1, oneTail);
        } else{
            Node* temp1 = new Node(2);
            insertAtTail(2, twoTail);
        }
        temp = temp->next;
    }

    if(oneHead->next == NULL && twoHead->next != NULL){
        zeroTail->next = twoHead->next;
    }else{
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

}

int main(){
    //created a new node:
    //Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head and tail pointed to new node:
    //Node* head = node1;
    //Node* tail = node1;
    // print(head);

    //inserting at head:
    //insertAtHead(12, head);
    // print(head);

    //insertAtHead(15, head);
    // print(head);

    //insertion at end:
    //insertAtTail(13, tail);
    // print(head);

    //insert at poition:
    //insertAtPosition(2, 20, head, tail);
    //print(head);
    //cout<<"Head: "<<head->data<<endl;
    //cout<<"Tail: "<<tail->data<<endl;

    //delete node
    //deleteNode(head, 4);
    // print(head);


    //sorted Linked List : 0s, 1s, 2s : 
    Node* head1 = new Node(1);
    Node* tail1 = head1;
    insertAtTail(0,tail1);
    insertAtTail(2,tail1);
    insertAtTail(1,tail1); 
    insertAtTail(2,tail1);
    print(head1);

    sortMethod2(head1);
    print(head1);
}