#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *root = nullptr, *temp = nullptr, *ttemp = nullptr;

void CreateNode(int x){
    Node* node = new Node;
    node -> data = x;
    node -> left = node -> right = nullptr;
    if (root == nullptr){
        root = node;
        return;
    }
    temp = root;
    while (temp != nullptr){
        ttemp = temp;
        if (temp -> data < x)
            temp = temp -> right;
        else
            temp = temp -> left;
    }
    if (ttemp -> data < x)
        ttemp -> right = node;
    else
        ttemp -> left = node;
}

void Inorder(Node* node){
    if (node == nullptr)
        return;
    Inorder(node -> left);
    cout << node -> data << " -> ";
    Inorder(node -> right);
}

void Preorder(Node* node){
    if (node == nullptr)
        return;
    cout << node -> data << " -> ";
    Preorder(node -> left);
    Preorder(node -> right);
}

void Postorder(Node* node){
    if (node == nullptr)
        return;
    Postorder(node -> left);
    Postorder(node -> right);
    cout << node -> data << " -> ";
}

void DeleteTree(Node* node){
    if (node == nullptr)
        return;
    DeleteTree(node -> left);
    DeleteTree(node -> right);
    delete node;
}

int main() {
    int choice = 0;
    while (choice != 5) {
        cout << "\nChoose an operation:\n"
             << "1. Insert\n"
             << "2. Inorder Traversal\n"
             << "3. Preorder Traversal\n"
             << "4. Postorder Traversal\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                int value;
                cout << "Enter value to insert: ";
                cin >> value;
                CreateNode(value);
                break;
            case 2:
                cout << "Inorder Traversal: ";
                Inorder(root);
                cout << "nullptr" << endl;
                break;
            case 3:
                cout << "Preorder Traversal: ";
                Preorder(root);
                cout << "nullptr" << endl;
                break;
            case 4:
                cout << "Postorder Traversal: ";
                Postorder(root);
                cout << "nullptr" << endl;
                break;
            case 5:
                DeleteTree(root);
                root = nullptr;
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
    return 0;
}