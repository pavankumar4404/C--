#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}//1 2 -1 -1 3 -1 -1
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


// inorder : L N R
// preorder : N L R
// postorder : L R N

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root -> data <<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;    
    root = buildTree(root);

    cout<<"Inorder traversal : ";
    inorder(root);

    cout<<"Preorder Traversal : ";
    preorder(root);

    cout<<"Postorder Traversal : ";
    postorder(root);
    
    return 0;
}