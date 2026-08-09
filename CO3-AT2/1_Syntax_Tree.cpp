#include <iostream>
#include <string>
using namespace std;

struct Node {
    string value;
    Node* left;
    Node* right;

    Node(string val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main() {

    // Syntax tree for: a + b * c

    Node* root = new Node("+");
    root->left = new Node("a");
    root->right = new Node("*");

    root->right->left = new Node("b");
    root->right->right = new Node("c");

    cout << "Expression: a + b * c" << endl;

    cout << "Preorder traversal: ";
    preorder(root);

    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);

    cout << endl;

    return 0;
}