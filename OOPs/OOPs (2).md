# Object-Oriented Programming (OOP) in C++

Object-Oriented Programming (OOP) is a programming paradigm centered around **objects** rather than functions and logic. C++ supports OOP, which allows for modular, reusable, and scalable code.

---

## **Key Principles of OOP**

### 1. **Class and Object**
- **Class**: A user-defined blueprint from which objects are created.
- **Object**: An instance of a class.

```cpp
class Car {
public:
    string brand;
    int year;
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;
}
```

---

### 2. **Encapsulation**
- Binding data and methods that operate on the data into a single unit (class).
- Access specifiers: `private`, `public`, `protected`

```cpp
class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
};
```

---

### 3. **Abstraction**
- Hiding internal implementation and showing only essential features.
- Achieved using **abstract classes** or **interfaces (pure virtual functions)**.

```cpp
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof";
    }
};
```

---

### 4. **Inheritance**
- Acquiring properties and behaviors of a parent class in a child class.
- Promotes **code reusability**.

Types of Inheritance:
- Single
- Multiple
- Multilevel
- Hierarchical
- Hybrid

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating...";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking...";
    }
};
```

---

### 5. **Polymorphism**
- "Many forms" — ability to take more than one form.
- **Compile-time polymorphism**: Function overloading and Operator overloading.
- **Run-time polymorphism**: Function overriding using virtual functions.

```cpp
// Compile-time polymorphism
class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(double b) {
        cout << "Double: " << b << endl;
    }
};

// Run-time polymorphism
class Base {
public:
    virtual void print() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "Derived class" << endl;
    }
};
```

---

## **Benefits of OOP in C++**
- **Modularity**: Code is easier to maintain and debug.
- **Reusability**: Code can be reused through inheritance.
- **Scalability**: Large systems can be easily managed.
- **Data Security**: Encapsulation hides internal data.

---

## **Conclusion**
OOP in C++ enables the modeling of real-world systems with cleaner and more structured code. Mastering the principles of OOP helps write modular, reusable, and maintainable software.

---

## Summary Table
| Concept        | Description                        |
|----------------|------------------------------------|
| Class & Object | Blueprint and Instance             |
| Encapsulation  | Data hiding using access specifiers|
| Abstraction    | Hiding complex implementation      |
| Inheritance    | Reusing existing class features    |
| Polymorphism   | Many forms (overloading/overriding)|
