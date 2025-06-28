# Binary Tree in C++ (Complete Guide)

---

## 📘 Introduction

A **Binary Tree** is a hierarchical data structure in which each node has at most **two children**, referred to as the **left child** and the **right child**.

Binary trees are useful for representing structured data such as expressions, hierarchical data, and more.

---

## 🔑 Basic Terminologies

| Term            | Meaning                                                      |
| --------------- | ------------------------------------------------------------ |
| **Node**        | An element of the tree containing data and links to children |
| **Root**        | The topmost node of the tree                                 |
| **Leaf Node**   | A node with no children                                      |
| **Parent**      | A node that has children                                     |
| **Child**       | A node that descends from another node                       |
| **Subtree**     | A tree entirely contained within another tree                |
| **Height**      | Length of the longest path from a node to a leaf             |
| **Depth**       | Length of the path from root to the node                     |
| **Level**       | Root at level 0, its children at level 1, etc.               |
| **Binary Tree** | A tree where each node has at most 2 children                |

---

## 🏗️ Creation of Binary Tree in C++

We can create binary trees using classes in C++.

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* buildTree() {
    int x;
    cout << "Enter data (-1 for NULL): ";
    cin >> x;

    if (x == -1) return nullptr;

    Node* newNode = new Node(x);

    cout << "Enter left child of " << x << endl;
    newNode->left = buildTree();

    cout << "Enter right child of " << x << endl;
    newNode->right = buildTree();

    return newNode;
}
```

---

## 🌊 Level Order Traversal (Breadth First)

We use a **queue** for level order traversal.

```cpp
#include <queue>

void levelOrder(Node* root) {
    if (!root) return;
    
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}
```

---

## 🌀 Inorder Traversal (Left - Root - Right)

```cpp
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
```

---

## 🔼 Preorder Traversal (Root - Left - Right)

```cpp
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
```

---

## 🔽 Postorder Traversal (Left - Right - Root)

```cpp
void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
```

---

## 🏗️ Create Binary Tree from Level Order Input

You can build a tree from level order input using a queue.

```cpp
Node* buildFromLevelOrder() {
    int x;
    cout << "Enter root data: ";
    cin >> x;

    if (x == -1) return nullptr;

    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left child of " << temp->data << ": ";
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right child of " << temp->data << ": ";
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}
```

---

## 📝 Summary

* Binary tree is a hierarchical structure with max 2 children per node.
* Traversals:

  * Inorder: Left → Root → Right
  * Preorder: Root → Left → Right
  * Postorder: Left → Right → Root
  * Level Order: Top-down level-wise using queue
* Tree creation is recursive or level-based using queue

This concludes the basic and intermediate concepts of binary trees in C++.

---
