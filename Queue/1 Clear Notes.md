# Queue in C++

---

## 1. What is Queue?
Queue is a linear data structure that follows **FIFO (First In First Out)** principle.

- **Insertion (enqueue)** happens at the **rear**.
- **Deletion (dequeue)** happens at the **front**.

**Applications:**
- CPU scheduling
- Printer queue
- BFS (Breadth First Search)

---

## 2. Operations in Queue
- `enqueue(x)`: Insert element `x` at rear
- `dequeue()`: Remove element from front
- `front()`: Get front element
- `rear()`: Get last element
- `isEmpty()`: Check if queue is empty
- `isFull()`: (array-based) Check if queue is full

---

## 3. STL Queue
Header file: `#include<queue>`

**Operations:**
```cpp
std::queue<int> q;
q.push(x);      // Enqueue
q.pop();        // Dequeue
q.front();      // Access front element
q.back();       // Access rear element
q.empty();      // Check if empty
q.size();       // Get size
```

---

## 4. STL Queue Example Code
```cpp
#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;
    q.pop();
    cout << "After pop, Front: " << q.front() << endl;
    return 0;
}
```

---

## 5. Implementing Queue Using Array
```cpp
class Queue {
    int *arr;
    int front, rear, size, capacity;

public:
    Queue(int cap) {
        arr = new int[cap];
        capacity = cap;
        front = 0;
        rear = -1;
        size = 0;
    }

    void enqueue(int x) {
        if (size == capacity) {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int getFront() {
        if (size == 0) return -1;
        return arr[front];
    }
};
```

---

## 6. Circular Queue
Circular queue allows the rear to wrap around to the beginning.

```cpp
class CircularQueue {
    int *arr;
    int front, rear, capacity;

public:
    CircularQueue(int cap) {
        arr = new int[cap];
        capacity = cap;
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % capacity == front) {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        if (front == rear) front = rear = -1;
        else front = (front + 1) % capacity;
    }
};
```

---

## 7. Input Restricted Queue
- Insert only at rear
- Delete from both front or rear

---

## 8. Output Restricted Queue
- Insert from front or rear
- Delete only from front

---

## 9. Doubly Ended Queue (Deque)
Deque allows insertion and deletion from both ends.

**STL:**
```cpp
#include<deque>
deque<int> dq;

dq.push_back(x);   // Insert at rear
dq.push_front(x);  // Insert at front
dq.pop_back();     // Remove from rear
dq.pop_front();    // Remove from front
dq.front();
dq.back();
```

**Code:**
```cpp
#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    cout << "Front: " << dq.front() << ", Rear: " << dq.back() << endl;
    dq.pop_back();
    dq.pop_front();
    return 0;
}
```

---

## 10. Implementing Deque (Using Array)
```cpp
class Deque {
    int *arr, size, front, rear, cap;
public:
    Deque(int c) {
        cap = c;
        arr = new int[cap];
        front = -1;
        rear = 0;
        size = 0;
    }

    void insertFront(int x) {
        if (isFull()) return;
        if (front == -1) front = rear = 0;
        else if (front == 0) front = cap - 1;
        else front--;
        arr[front] = x;
        size++;
    }

    void insertRear(int x) {
        if (isFull()) return;
        if (front == -1) front = rear = 0;
        else if (rear == cap - 1) rear = 0;
        else rear++;
        arr[rear] = x;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) return;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % cap;
        size--;
    }

    void deleteRear() {
        if (isEmpty()) return;
        if (front == rear) front = rear = -1;
        else if (rear == 0) rear = cap - 1;
        else rear--;
        size--;
    }

    bool isFull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }
};
```
