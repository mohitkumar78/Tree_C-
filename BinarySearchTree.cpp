#include<iostream>
using namespace std;

struct Node{
  Node* right;
  Node* left;
  int data;

  Node(int val){
    data = val;
    right=left=nullptr;
  }
};

Node* insert(Node* root,int value){

    if(root == nullptr){
        return new Node(value);
    }
    if( value < root->data){
        root->left = insert(root->left,value);
    }
    else if(value > root->data){
        root->right = insert(root->right,value);
    }
    return root;
}

int main(){
    Node* root = nullptr;
    root = insert(root,50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout<<"bst is created";
    return 0;
}