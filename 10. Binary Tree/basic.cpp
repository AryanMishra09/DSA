#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


node* buildTree(node* root){
    int data;
    cout<<"Enter data: ";
    cin>> data;
    
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for left node of "<<data<<": ";
    root->left = buildTree(root->left);
    cout<<"Enter data for right node of "<<data<<": ";
    root->right = buildTree(root->right);
    return root; 
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);  //for new line after every level we are using NULL as an seperator

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else{
            cout<< temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){       //LNR
    //base case:
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){       //NLR
    //base case:
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){       //LRN
    //base case:
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* & root){
    int data;
    cout<<"Enter root data: ";
    cin>>data;
    root = new node(data);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int left;
        int right;
        cout<<"Enter left node data of "<<temp->data<<": ";
        cin>>left;

        if(left != -1){
            temp->left = new node(left);
            q.push(temp->left);
        }

        cout<<"Enter right node data of "<<temp->data<<": ";
        cin>>right;
        if(right != 1){
            temp->right = new node(right);
            q.push(temp->right);
        }

    }
}

int main() {

    node* root = NULL;
    // root = buildTree(root);
    // levelOrderTraversal(root);
    // cout<<endl<<"Inorder: ";
    // inorder(root);
    // cout<<endl<<"Preorder: ";
    // preorder(root);
    // cout<<endl<<"Postorder: ";
    // postorder(root);

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}