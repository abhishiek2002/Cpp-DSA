# getMin() Stack Implementation

## Approach 1 (getMin() wiith time complexity 1 & space complexity O(n) )

```cpp

```

## Approch 2 ( getMin() with time & space complexity 1)
```cpp
#include <bits/stdc++.h> 
using namespace std;

class Stack{
    int *arr;
    int top;
    int minEl;
    int size;

public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        minEl = INT_MAX;
    }
    
    void push(int x){
        if(top == -1){
            top++;
            arr[top] = x;
            minEl = x;
        }
        else{
            if(top == size){
               cout<<"Stack Overflow\n"; 
            }
            else{
                if(x < minEl){
                    int value = 2*x - minEl;
                    top++;
                    arr[top] = value;
                    minEl = x;
                }
                else{
                    top++;
                    arr[top] = x;
                }
            }
        }
    }
    
    int pop() {
        if(top == -1){
            cout<<"Stack underflow\n";
            return -1;
        }
        else {
            if(arr[top] < minEl){
                int peek = minEl;
                minEl = 2*minEl - arr[top];
                top--;
                return peek;
            }
            else{
                int peek = arr[top];
                top--;
                return peek;
            }
        }
    }
    
    int getMin() {
        return minEl;
    }
};

int main() {
    Stack *obj = new Stack(5);
    
    obj->push(5);
    cout<<obj->getMin();
    cout<<endl;
    
    obj->push(3);
    cout<<obj->getMin();
    cout<<endl;
    
    obj->push(8);
    cout<<obj->getMin();
    cout<<endl;
    
    obj->push(2);
    cout<<obj->getMin();
    cout<<endl;
    
    obj->push(4);
    cout<<obj->getMin();
    cout<<endl;
    
    
    obj->pop();
    cout<<obj->getMin();
    cout<<endl;
    
    obj->pop();
    cout<<obj->getMin();
    cout<<endl;
    
    obj->pop();
    cout<<obj->getMin();
    cout<<endl;
    
    obj->pop();
    cout<<obj->getMin();
    cout<<endl;
    
    obj->pop();
    cout<<obj->getMin();
    cout<<endl;
    
}
```
**Your Output**
```txt
5
3
3
2
2
2
3
3
5
5
```
