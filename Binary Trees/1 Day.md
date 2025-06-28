# Binary Tree

## Creation Of Binary Tree

```cpp
class Node{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* binaryTree(){
    int x;
    cout<<"Enter data (-1 for NULL) : ";
    cin>>x;
    cout<<x<<endl;
    
    // base case
    if( x == -1){
        return NULL;
    }
    
    Node* n1 = new Node(x);
    
    cout<<"Enter left child of node -> "<< x <<endl;
    n1->left = binaryTree();
    
    cout<<"Enter right child of node -> "<< x << endl;
    n1->right = binaryTree();
    
    return n1;
}
int main() {
    Node* root = binaryTree();
}
```

**Output**
```txt
Enter data (-1 for NULL) : 1
Enter left child of node -> 1
Enter data (-1 for NULL) : 2
Enter left child of node -> 2
Enter data (-1 for NULL) : 4
Enter left child of node -> 4
Enter data (-1 for NULL) : -1
Enter right child of node -> 4
Enter data (-1 for NULL) : -1
Enter right child of node -> 2
Enter data (-1 for NULL) : 5
Enter left child of node -> 5
Enter data (-1 for NULL) : -1
Enter right child of node -> 5
Enter data (-1 for NULL) : -1
Enter right child of node -> 1
Enter data (-1 for NULL) : 3
Enter left child of node -> 3
Enter data (-1 for NULL) : 6
Enter left child of node -> 6
Enter data (-1 for NULL) : -1
Enter right child of node -> 6
Enter data (-1 for NULL) : -1
Enter right child of node -> 3
Enter data (-1 for NULL) : -1
```

## preOrderTraversal

```cpp
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    
    // left
    preOrderTraversal(root->left);
    
    // right
    preOrderTraversal(root->right);
    
}
int main() {
    Node* root = binaryTree();
    
    cout<<"preOrderTraversal : \n";
    preOrderTraversal(root);
}
```

**Output**
```txt
preOrderTraversal : 
1 2 4 5 3 6 
```

## levelOrderTraversal

```cpp
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            // level comlete
            cout<<endl;
            
            // if queue still has child nodes 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }   
        }
        
        
    }
}

int main() {
    Node* root = binaryTree();

    cout<<"levelOrderTraversal : \n";
    levelOrderTraversal(root);
}
```

**Output**
```txt
levelOrderTraversal : 
1 
2 3 
4 5 6
```

## inOrderTraversal

```cpp
void inOrderTraversal(Node* root){
    Node* temp = root;
    
    // base case
    if(temp == NULL) return;
    
    // recursion call
    
    // left
    inOrderTraversal(temp->left);
    
    // node print
    cout<<temp->data<<" ";
    
    // right
    inOrderTraversal(temp->right);
}
```

## postOrderTraversal

```cpp
void postOrderTraversal(Node* root){
    Node* temp = root;
    
    // base case
    if(temp == NULL) return;
    
    // recursion call
    
    // left
    postOrderTraversal(temp->left);
    
    // right
    postOrderTraversal(temp->right);
    
    // node print
    cout<<temp->data<<" ";
}
```

# Complete Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1

class Node{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* binaryTree(){
    int x;
    cout<<"Enter data (-1 for NULL) : ";
    cin>>x;
    cout<<x<<endl;
    
    // base case
    if( x == -1){
        return NULL;
    }
    
    Node* n1 = new Node(x);
    
    cout<<"Enter left child of node -> "<< x <<endl;
    n1->left = binaryTree();
    
    cout<<"Enter right child of node -> "<< x << endl;
    n1->right = binaryTree();
    
    return n1;
}

void preOrderTraversal(Node* root){ // NLR (Node-Left-Right)
    if(root == NULL){
        return;
    }
    
    // recursion call
    
    // node print
    cout<<root->data<<" ";
    
    // left
    preOrderTraversal(root->left);
    
    // right
    preOrderTraversal(root->right);
    
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            // level comlete
            cout<<endl;
            
            // if queue still has child nodes 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }   
        }
        
        
    }
}

void inOrderTraversal(Node* root){
    Node* temp = root;
    
    // base case
    if(temp == NULL) return;
    
    // recursion call
    
    // left
    inOrderTraversal(temp->left);
    
    // node print
    cout<<temp->data<<" ";
    
    // right
    inOrderTraversal(temp->right);
}

void postOrderTraversal(Node* root){
    Node* temp = root;
    
    // base case
    if(temp == NULL) return;
    
    // recursion call
    
    // left
    postOrderTraversal(temp->left);
    
    // right
    postOrderTraversal(temp->right);
    
    // node print
    cout<<temp->data<<" ";
}

int main() {
    Node* root = binaryTree();
    
    cout<<"preOrderTraversal : \n";
    preOrderTraversal(root);
    
    cout<<endl;
    
    cout<<"levelOrderTraversal : \n";
    levelOrderTraversal(root);
    
    cout<<"\ninOrderTraversal : \n";
    inOrderTraversal(root);
    
    cout<<"\npostOrderTraversal : \n";
    postOrderTraversal(root);
}
```

**Your Output**

```txt
Enter data (-1 for NULL) : 1
Enter left child of node -> 1
Enter data (-1 for NULL) : 2
Enter left child of node -> 2
Enter data (-1 for NULL) : 4
Enter left child of node -> 4
Enter data (-1 for NULL) : -1
Enter right child of node -> 4
Enter data (-1 for NULL) : -1
Enter right child of node -> 2
Enter data (-1 for NULL) : 5
Enter left child of node -> 5
Enter data (-1 for NULL) : -1
Enter right child of node -> 5
Enter data (-1 for NULL) : -1
Enter right child of node -> 1
Enter data (-1 for NULL) : 3
Enter left child of node -> 3
Enter data (-1 for NULL) : 6
Enter left child of node -> 6
Enter data (-1 for NULL) : -1
Enter right child of node -> 6
Enter data (-1 for NULL) : -1
Enter right child of node -> 3
Enter data (-1 for NULL) : -1
preOrderTraversal : 
1 2 4 5 3 6 
levelOrderTraversal : 
1 
2 3 
4 5 6 

inOrderTraversal : 
4 2 5 1 6 3 
postOrderTraversal : 
4 5 2 6 3 1 
```
