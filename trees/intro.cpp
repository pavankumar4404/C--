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

Node* createTree(Node* root){
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);  
    root->left->right = new Node(5);
    return root;
}

// Breadth First Search
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp -> data <<" ";

            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp->right);
            }
        }
    }
}

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left node for : "<<temp->data<<endl;
        int lData;
        cin>>lData;

        if(lData!=-1){
            temp->left=new Node(lData);
            q.push(temp->left);
        }

        cout<<"Enter right node for : "<<temp->data<<endl;
        int rData;
        cin>>rData;

        if(rData!=-1){
            temp->right=new Node(rData);
            q.push(temp->right);
        }
    }
}

int main(){

    Node* root = NULL;
    
    // root = buildTree(root);
    // root = createTree(root);

    buildFromLevelOrder(root);
    cout<<"Level order traversal : "<<endl;
    levelOrderTraversal(root);

    return 0;
}