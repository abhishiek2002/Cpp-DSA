# Object-Oriented Programming (OOP) in C++

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of **objects**. These objects can contain data, in the form of **fields** (also known as attributes or properties), and code, in the form of **methods** (functions associated with the object).

---

## 📌 What is OOP?
OOP is a method of structuring a program by bundling related properties and behaviors into individual objects. It promotes:
- Modularity
- Reusability
- Scalability
- Security

---

## 🧱 Class and Object
### Class:
A class is a user-defined data type that acts as a blueprint for creating objects.

```cpp
class Car {
public:
    string brand;
    int year;
};
```

### Object:
An object is an instance of a class.

```cpp
Car myCar;
myCar.brand = "Toyota";
myCar.year = 2020;
```

---

## 🔍 Empty Class
An empty class has no data members or member functions, but it still occupies 1 byte in memory (to ensure unique addresses).

```cpp
class Empty {};
```

---

## 🔐 Access Modifiers
There are three types:
- `public`: Accessible from outside the class
- `private`: Accessible only within the class
- `protected`: Accessible within the class and derived classes

```cpp
class Demo {
private:
    int x;
public:
    int y;
};
```

---

## ⚙️ Getters and Setters
Used to access and modify private data.

```cpp
class Person {
private:
    int age;
public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
```

---

## 🔍 Behind the Scene of Objects
Each object has its own copy of non-static data members. Static members are shared among all instances.

---

## 🆚 Static vs Dynamic Allocation
- **Static Allocation**: Memory allocated at compile time.
- **Dynamic Allocation**: Memory allocated at runtime using `new` and deallocated using `delete`.

```cpp
Car car1;                   // Static
Car* car2 = new Car();      // Dynamic
```

---

## 🏗️ Constructors
Special functions called automatically when an object is created. They initialize the object.

### 1. Default Constructor
No parameters.
```cpp
class A {
public:
    A() {
        cout << "Default Constructor";
    }
};
```

### 2. Parameterized Constructor
Takes parameters.
```cpp
class A {
public:
    int x;
    A(int val) {
        x = val;
    }
};
```

### 🔎 Behind the Scene
Compiler adds a default constructor if none is defined. Once a parameterized constructor is defined, default is not auto-added.

### 3. Copy Constructor
Creates a new object as a copy of an existing object.
```cpp
class A {
public:
    int x;
    A(int a) { x = a; }
    A(const A &obj) { x = obj.x; }
};
```

---

## 📄 this Keyword
`this` is a pointer that points to the current object.
```cpp
class A {
    int x;
public:
    void setX(int x) {
        this->x = x;
    }
};
```

---

## 📤 Assignment Operator vs Copy Constructor
- **Copy Constructor**: Used during object creation.
- **Assignment Operator**: Used after the object is already created.

```cpp
A a1(5);
A a2 = a1;      // Copy constructor
A a3;
a3 = a1;       // Assignment operator
```

---

## 🌊 Shallow vs Deep Copy
- **Shallow Copy**: Copies object’s pointer values (both point to same memory).
- **Deep Copy**: Allocates separate memory and copies actual data.

```cpp
class A {
    int* ptr;
public:
    A(int val) {
        ptr = new int(val);
    }
    A(const A &obj) {
        ptr = new int(*obj.ptr); // Deep copy
    }
};
```

---

## 💣 Destructor
Called when an object goes out of scope or is explicitly deleted. Used for cleanup.

```cpp
class A {
public:
    ~A() {
        cout << "Destructor called";
    }
};
```

---

## 📌 Static Keyword
Used to create members shared by all objects.

```cpp
class A {
public:
    static int count;
};
int A::count = 0;
```

---

## 🔁 Static Functions
Can be called using class name. They can only access static members.

```cpp
class A {
public:
    static void show() {
        cout << "Static function";
    }
};
```

---

## 🎯 Summary Table
| Concept               | Description                                             |
|----------------------|---------------------------------------------------------|
| Class/Object          | Blueprint and instance                                 |
| Empty Class           | Occupies 1 byte, useful for advanced patterns          |
| Access Modifiers      | public, private, protected                             |
| Getter/Setter         | Methods to access and modify private data              |
| Static vs Dynamic     | Compile-time vs Runtime allocation                     |
| Constructor           | Initializes objects automatically                      |
| Copy Constructor      | Creates object as a copy of another                    |
| this Keyword          | Pointer to current object                              |
| Assignment vs Copy    | After vs During creation                               |
| Shallow vs Deep Copy  | Same vs Separate memory                                |
| Destructor            | Cleans up memory                                       |
| Static Keyword        | Shared data among all instances                        |
| Static Function       | Accessed via class, only uses static data              |

---

Now you're equipped with a deep and complete understanding of OOP in C++!
