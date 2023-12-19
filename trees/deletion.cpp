#include <iostream>

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

// Function to perform an inorder traversal of the BST
void inorderTraversal(TreeNode* node) {
    if (node != nullptr) {
        inorderTraversal(node->left);
        std::cout << node->data << " ";
        inorderTraversal(node->right);
    }
}

// Function to find the node with the minimum value in a BST
TreeNode* findMin(TreeNode* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

// Function to delete a node with the given key from the BST
TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr) {
        return root;
    } else if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        TreeNode* temp = findMin(root->right);

        // Copy the inorder successor's data to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    TreeNode* root = nullptr;
    int elements[] = {14, 10, 17, 12, 11, 20, 18, 27, 25, 8, 22, 23};
    int numElements = sizeof(elements) / sizeof(elements[0]);

    for (int i = 0; i < numElements; ++i) {
        root = insert(root, elements[i]);
    }

    std::cout << "Binary Search Tree (Inorder Traversal - Before deletions): ";
    inorderTraversal(root);
    std::cout << std::endl;

    // Deleting keys one after another
    root = deleteNode(root, 23);
    std::cout << "Binary Search Tree (Inorder Traversal - After deleting 23): ";
    inorderTraversal(root);
    std::cout << std::endl;

    root = deleteNode(root, 12);
    std::cout << "Binary Search Tree (Inorder Traversal - After deleting 12): ";
    inorderTraversal(root);
    std::cout << std::endl;

    root = deleteNode(root, 20);
    std::cout << "Binary Search Tree (Inorder Traversal - After deleting 20): ";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
