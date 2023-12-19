#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Function to calculate the height of a tree
int calculateHeight(TreeNode* node) {
    if (node == nullptr)
        return -1;

    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);

    return 1 + max(leftHeight, rightHeight);
}


int main(){

    // Example of creating a binary tree
    TreeNode* root = new TreeNode();
    root->data = 10;

    root->left = new TreeNode();
    root->left->data = 5;
    root->left->left = new TreeNode();
    root->left->left->data = 1;
    root->left->right = nullptr;

    root->right = new TreeNode();
    root->right->data = 15;
    root->right->left = nullptr;
    root->right->right = nullptr;

    int h = calculateHeight(root);
    cout<<h;

    return 0;
}