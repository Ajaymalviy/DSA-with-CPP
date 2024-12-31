#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int totalcountofnodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + totalcountofnodes(root->left) + totalcountofnodes(root->right);
}



bool is_CBT(Node* root, int index, int totalcount){
    if (root ==nullptr){
        return true;
    }
    if(index >= totalcount){
        return false;
    }
    else{

        bool left= is_CBT(root->left, 2*index+1, totalcount);
        bool right= is_CBT(root->right, 2*index+2, totalcount);
        return(left && right);

    } 


}

bool is_Maxorder(Node* root) {
    if (root == nullptr) {
        return true;  // An empty tree is trivially a Max Heap
    }

    bool left = true, right = true;
    
    // Check if the current node is greater than the left child
    if (root->left) {
        left = root->data >= root->left->data;
    }

    // Check if the current node is greater than the right child
    if (root->right) {
        right = root->data >= root->right->data;
    }

    // Now recursively check the left and right subtrees
    return left && right && is_Maxorder(root->left) && is_Maxorder(root->right);
}



int main(){

      // Create the tree nodes
    Node* root = new Node(12);
    root->left = new Node(5);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    
    // Calculate the total number of nodes in the tree
    int totalcount = totalcountofnodes(root);
    
    // Check if the tree is a Complete Binary Tree (CBT)
    bool isCBT = is_CBT(root, 0, totalcount);
    
    // Check if the tree satisfies Max Heap property
    bool isMaxHeap = is_Maxorder(root);
    
    // Check if the tree is a heap (CBT and Max Heap)
    if (isCBT && isMaxHeap) {
        cout << "The tree is a Complete Binary Tree and satisfies Max Heap property." << endl;
    } else {
        cout << "The tree is NOT a Complete Binary Tree or does not satisfy Max Heap property." << endl;
    }

    // Clean up dynamically allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
  