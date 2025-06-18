# Stack in C++ - Detailed Explanation and Implementations

---

## 📌 What is a Stack?

- Stack is a linear data structure which follows **LIFO (Last In First Out)** principle.
- The element inserted last is the one to be removed first.

### Stack Operations:
- `push(x)`: Add element `x` to the top.
- `pop()`: Remove the top element.
- `top()`: Access the top element.
- `isEmpty()`: Check if the stack is empty.
- `size()`: Returns the number of elements in the stack.

### Use Cases:
- Function call stack
- Expression evaluation (infix/postfix)
- Undo operations
- Browser history

---

## ✅ Stack using STL

```cpp
#include <iostream>
#include <stack>
using namespace std;

void stackUsingSTL() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30
    s.pop();
    cout << "After pop, Top element: " << s.top() << endl; // 20
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    cout << "Size of stack: " << s.size() << endl;
}
```

---

## ✅ Stack using Arrays (Static Stack)

```cpp
#define MAX 100
class StackArray {
    int top;
    int arr[MAX];
public:
    StackArray() { top = -1; }

    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() { return top < 0; }
    int size() { return top + 1; }
};
```

---

## ✅ Stack using Linked List (Dynamic Stack)

```cpp
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class StackLinkedList {
    Node* top;
public:
    StackLinkedList() { top = NULL; }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (!top) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }

    int peek() {
        if (!top) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() { return top == NULL; }
};
```

---

## ✅ Main Function to Test All

```cpp
int main() {
    cout << "--- Stack using STL ---\n";
    stackUsingSTL();

    cout << "\n--- Stack using Array ---\n";
    StackArray sa;
    sa.push(1);
    sa.push(2);
    cout << "Top: " << sa.peek() << endl;
    sa.pop();
    cout << "Top after pop: " << sa.peek() << endl;

    cout << "\n--- Stack using Linked List ---\n";
    StackLinkedList sl;
    sl.push(100);
    sl.push(200);
    cout << "Top: " << sl.peek() << endl;
    sl.pop();
    cout << "Top after pop: " << sl.peek() << endl;

    return 0;
}
```
