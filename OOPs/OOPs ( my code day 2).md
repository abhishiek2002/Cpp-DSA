# Day 2 ( 4 Pillars Of OOPs)

---

## **What we will study:**

- Encapsulation
    - Full Encapsulation
    - Implementation
    - Why Encapsulation
- Inheritance
    - Syntax
    - Implementation
    - Access Modifier (Modes Of Inheritance)
    - Types of Inheritance
    - Single Inheritance
    - Multi-level Inheritance
    - Multiple Inheritance
    - Hierarchical Inheritance
    - Hybrid Inheritance
    - Inheritance Ambiguity && Scope Resolution
- Polymorphism
    - Compile time Polymorphism
        - Function Overloading
        - Operator Overloading
    - Run time Polymorphism
        - Function Overloading
- Abstraction
    - Implementation
---

# 1. Encapsulation

- Encapsulation is wrapping up data members and functions in one entity.
- It is **Information Hiding** or **Data Hiding**

## Fully Encapsulated Class:
- If all data members are private means all data members can be access only in class itself then it is called fully encapsulated class.

```cpp
class Hero{
private:
  int *name;
  int health;
  char level;
};
```

## Why ?

*Why we use encapsulation*

- Data hide (Using **Access Modifiers**) -> Security.
- If we want, we can make class **Read Only**.
- Code reusability, maintainability.
- Ease in seperate unit testing

## Example:

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

# 2. Inheritance

### Syntax:

```cpp
class parent_class 
{    
//Body of parent class
};

class child_class: access_modifier parent_class 
{    
//Body of child class
};
```

## *Modes of Inheritance*
 
- Public mode: If we derive a subclass from a public base class. Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.
- Protected mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
- Private mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

<img src="/OOPs/Modes Of Inheritance Photo.png" />

### Example:

```cpp
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Human{
public:
    int height;
    int weight;
    int age;
    
    int getAge() {
        return this->age;
    }
    
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping";
    }
};

int main() {
    
    Male m1;
    
    // we can access age, height, weight and color for the object of Male class because it inherit the Human class with public mode
    cout<< "Age " << m1.age << endl;
    cout<< "height " << m1.height << endl;
    cout<< "weight " << m1.weight << endl;
    
    cout<< "color " << m1.color << endl;
    m1.setWeight(65);
    cout<< "weight " << m1.weight << endl;
    m1.sleep();
    
    

    return 0;
}
```

#### Your Output:
```txt
Age -104
height 4607
weight 0
color 
weight 65
Male sleeping
```

## *Types Of Inheritance:*

C++  supports five types of inheritance they are as follows:

### 1. Single inheritance

In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.

![Single inheritance](https://github.com/user-attachments/assets/be011bfe-ac12-46dc-8795-91c9499156a6)


```cpp
class Human{
public:
    int height;
    int weight;
    int age;
    
    int getAge() {
        return this->age;
    }
    
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping";
    }
};
```

### 2. Multilevel inheritance

When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.

![Multiple inheritance](https://github.com/user-attachments/assets/ee188fe6-c477-42d6-a878-dc172b85a309)

```cpp
class Human{
public:
    int height;
    int weight;
    int age;
    
    int getAge() {
        return this->age;
    }
    
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping";
    }
};

class Boy : public Male {
    public:
    
    void sleep(){
        cout<<"Boy sleeping";
    }
};

int main() {
  Boy b1;
  b1.sleep();  // Boy sleeping
}
```


### 3. Multiple inheritance

In multiple inheritance, a class can inherit more than one class. This means that a single child class can have multiple parent classes in this type of inheritance.

![Multiple inheritance](https://github.com/user-attachments/assets/53ecb866-d59b-406d-965a-8b747db95600)

```cpp
class Animal {
public:
    int age;
    int weight;
    
    void bark() {
        cout<<"Barking "<<endl;
    }
};

class Human{
public:
    string color;
    
    void speak() {
        cout<<"Speaking "<<endl;
    }
    
};

// Multiple Inheritance

class Multiple: public Animal, public Human {
    
};


int main() {
    Multiple obj1;
    
    obj1.bark();
    obj1.speak();
    return 0;
}
```

### 4. Hierarchical inheritance

In hierarchical inheritance, one class is a base class for more than one derived class.

![Hierarchical inheritance](https://github.com/user-attachments/assets/b2a3de6d-2d84-492e-ad7d-50f010ed8215)

```cpp
class A {
public:
    int age;
    int weight;
    
    void bark() {
        cout<<"Barking "<<endl;
    }
};

class B: public A{
public:
    string color;
    
    void speak() {
        cout<<"Speaking "<<endl;
    }
    
};

class C: public A {
public:
    void funC() {
        cout<<"Inside Function 3";
    }
};
```

### 5. Hybrid inheritance

Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.

![Hybrid inheritance](https://github.com/user-attachments/assets/16459615-c456-4d26-97a8-256d628e0f68)

```cpp
class A {
public:
    int age;
    int weight;
    
    void bark() {
        cout<<"Barking "<<endl;
    }
};

class F {
public:
    void funF() {
        cout<<"Inside Function F";
    }
};

class B: public A{
public:
    string color;
    
    void speak() {
        cout<<"Speaking "<<endl;
    }
    
};

class C: public A, public F {
public:
    void funC() {
        cout<<"Inside Function C";
    }
};
```

## *Inheritance Ambiguity* && Scope Resolution ( :: ) 

Inheritance ambiguity occurs when a derived class inherits from multiple base classes and those base classes contain functions or members with the same name. The compiler gets confused about which function/member to call or access.

```cpp
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class A {
public:
    int age;
    int weight;
    
    void nothing() {
        cout<<"Inside Function A "<<endl;
    }
};

class B{
public:
    string color;
    
    void nothing() {
        cout<<"Inside Function B "<<endl;
    }
    
};

class C: public A, public B {
public:
    
};


int main() {
    C obj1;
    
    // obj1.nothing(); // because 'nothing' function present in both base classes then compiler get confuse which to choose and gives error
    
    // Use scope resolution to remove ambiguity or confusion
    
    obj1.A::nothing();
    
    obj1.B::nothing();
    
    return 0;
}
```

**Output**
```txt
Inside Function A 
Inside Function B
```

# 🧠 Polymorphism in C++

## 🔷 What is Polymorphism?

**Polymorphism** means "many forms". In C++, polymorphism allows the **same function or operator** to behave **differently** based on the context. It enables **code reusability** and **flexibility** in object-oriented programming.

> In simple terms: **One interface, multiple implementations.**

---

## ✅ Types of Polymorphism

C++ supports **two main types** of polymorphism:

### 1. **Compile-Time Polymorphism** (Static Binding / Early Binding)
### 2. **Run-Time Polymorphism** (Dynamic Binding / Late Binding)

---

# 🔹 1. Compile-Time Polymorphism

Achieved using:
- **Function Overloading**
- **Operator Overloading**

### 🔸 Function Overloading
Same function name with **different parameters** (type or number).

```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(double x) {
        cout << "Double: " << x << endl;
    }
    void show(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Print obj;
    obj.show(10);
    obj.show(3.14);
    obj.show("Hello");
    return 0;
}
```

### 🔸 Operator Overloading
Same operator behaves differently based on operands.

List of operators that can be overloaded in C++:

![image](https://github.com/user-attachments/assets/2a036c75-972c-4f80-9eb9-99688f22a528)


List of operators that cannot be overloaded in C++:

![image](https://github.com/user-attachments/assets/16151d2b-dba9-489f-8c92-dca1585cee65)

#### ✅ Syntax of Operator Overloading
```cpp
return_type class_name::operator op (parameter_list) {
    // implementation
}
```
Where:
- `op` is the operator being overloaded (e.g., `+`, `-`, `*`, etc.)
- Must be either a member function or a friend function

#### Example 1:
```cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0): real(r), imag(i) {}

    // Overload '+' operator
    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
```

#### Example 2: change functioning of + operator to *subtract* 

```
class A {
public:
    int a, b;
    
    int add() {
        return a+b;
    }
    
    void operator+ (A &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        
        cout << "Output " << value2 - value1 << endl;
    }
    
    void operator() () {
        cout<<"I am bracket "<<endl;
    }
};




int main() {
    
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    
    obj1 + obj2;
    
    obj1();
    
    return 0;
}
```

**Output**
```txt
Output 3
I am bracket 
```

---

# 🔹 2. Run-Time Polymorphism

Achieved using:
- **Function Overriding** with **virtual functions**

### 🔸 Function Overriding
Same function name in base and derived class. The derived class overrides the base class function.

### 🔸 Rules for method overriding

- The parent class method and the method of the child class must have the same name.
- The parent class method and the method of the child class must have the same parameters.
- It is possible through inheritance only.

#### Example:
```cpp
class Animal {
public:
    void speak() {
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal {
public:
    void speak() {
        cout<<"Barking "<<endl;
    }
};




int main() {
    
    Dog d1;
    d1.speak();
    
    return 0;
}
```
**Output**
```txt
Barking 
```

#### ✅ Without Virtual Function (No Polymorphism)
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->show();  // Calls Base's show() because no virtual function
    return 0;
}
```

#### ✅ With Virtual Function (Run-Time Polymorphism)
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->show();  // Calls Derived's show()
    return 0;
}
```

### 🔸 Notes:
- Virtual functions are resolved **at runtime** using **vtable** (virtual table).
- If a base class has a virtual function and it's overridden in the derived class, the call to that function via a base class pointer will invoke the **derived class's version**.

---

## 📌 Summary Table

| Type                 | Method                    | Binding Time | Example                         |
|----------------------|----------------------------|---------------|----------------------------------|
| Compile-Time         | Function/Operator Overload | Early         | `show(int)` vs `show(double)`   |
| Run-Time             | Virtual Functions          | Late          | Base pointer to Derived object  |

---

## 🔚 Conclusion
- **Polymorphism** increases **code reusability** and **flexibility**.
- **Compile-Time Polymorphism** is faster but less flexible.
- **Run-Time Polymorphism** is powerful and supports dynamic behavior.

Let me know if you want **flowcharts, diagrams**, or **interview MCQs** on polymorphism!

# Abstraction in OOPs - C++

## 🧠 What is Abstraction?

Abstraction is one of the fundamental concepts of Object-Oriented Programming (OOP). It means **hiding the internal implementation details** and **showing only the essential features** of an object.

In simpler words:

> "Abstraction lets you focus on *what* an object does instead of *how* it does it."

## 📌 Example in Real Life:

Consider a car:

* When you drive a car, you use the **steering wheel**, **accelerator**, and **brakes**.
* You don’t need to know **how the engine works** internally or **how fuel gets ignited**.
* This is *abstraction* — you interact with the car without knowing all the inner details.

## 🎯 Purpose of Abstraction:

* To **reduce complexity** of code
* To **enhance code reusability**
* To **protect implementation logic** from outside interference
* To **focus only on relevant data and functions**

## 🛠️ How to Achieve Abstraction in C++?

C++ provides abstraction using two main tools:

1. **Abstract Classes**
2. **Interfaces (Pure Virtual Functions)**

### ✅ Abstract Class

* A class that has **at least one pure virtual function**.
* It **cannot be instantiated** (you cannot create objects of it).
* Used as a **base class** for other classes.

```cpp
#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Animal a; ❌ Not allowed - Animal is abstract
    Dog d;
    d.sound();
    return 0;
}
```

### ✅ Pure Virtual Function

A function that is declared in a base class and **must be overridden** in the derived class.

```cpp
virtual void sound() = 0;
```

This makes the class **abstract**, and no object of it can be created.

## 🔐 Abstraction vs Encapsulation

| Feature        | Abstraction                    | Encapsulation                         |
| -------------- | ------------------------------ | ------------------------------------- |
| Focus          | Hiding complexity              | Hiding data                           |
| Achieved using | Abstract classes, interfaces   | Classes and access modifiers          |
| Purpose        | Show only relevant information | Protect data from unauthorized access |

## 📌 Key Points

* Abstract classes **must contain at least one pure virtual function**.
* Cannot instantiate abstract class objects.
* Forces derived classes to **implement the core behavior**.
* Helps achieve **loose coupling** in design.

## ✅ Benefits of Abstraction

* Makes programs easier to understand and manage
* Reduces code duplication
* Provides a clear structure to the code
* Improves maintainability and flexibility

## 🧾 Summary

* **Abstraction** is a powerful tool to hide complexities.
* Achieved using **abstract classes** and **pure virtual functions**.
* Promotes cleaner, modular, and flexible code.

> "Show only what is necessary, hide the rest. That’s the magic of abstraction!"

---

