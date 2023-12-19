#include <iostream>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Function to create a new node
TreeNode* createNode(int data) {
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new node into the BST
TreeNode* insert(TreeNode* node, int data) {
    if (node == nullptr) {
        node = createNode(data);
    } else if (data < node->data) {
        node->left = insert(node->left, data);
    } else {
        node->right = insert(node->right, data);
    }
    return node;
}

// Function to construct the binary search tree
TreeNode* constructBST() {
    TreeNode* root = nullptr;
    int elements[] = {14, 10, 17, 12, 11, 20, 18, 27, 25, 8, 22, 23};
    int numElements = sizeof(elements) / sizeof(elements[0]);

    for (int i = 0; i < numElements; ++i) {
        root = insert(root, elements[i]);
    }

    return root;
}

// Function to perform an inorder traversal of the BST (for testing)
void inorderTraversal(TreeNode* node) {
    if (node != nullptr) {
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
}

int main() {
    TreeNode* root = constructBST();

    cout << "Binary Search Tree (Inorder Traversal): ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
