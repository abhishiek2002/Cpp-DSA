# Day 2 ( 4 Pillars Of OOPs)

---

## 1. Encapsulation

- Encapsulation is wrapping up data members and functions in one entity.
- It is **Information Hiding** or **Data Hiding**

### Fully Encapsulated Class:
- If all data members are private means all data members can be access only in class itself then it is called fully encapsulated class.

```cpp
class Hero{
private:
  int *name;
  int health;
  char level;
};
```

### Why ?

*Why we use encapsulation*

- Data hide (Using **Access Modifiers**) -> Security.
- If we want, we can make class **Read Only**.
- Code reusability, maintainability.
- Ease in seperate unit testing

### Example:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student{
    
private:
    string name;
    int age;
    int height;
    
public:
    int getAge() {
        return age;
    }
    
};

// encapsulation achieved -> There is nothing extra in encapsulation that we did not study.

int main() {
    
    Student first;
    
    return 0;
}
```
---

## 2. Inheritance

### Syntax:

```cpp
class parent_class {
