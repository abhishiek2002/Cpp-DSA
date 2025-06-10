# OOPs ( Day 1 )
---

## Size Of Class & Object:

```txt
Class does not have any size or space.
Memory is required only when object is created.
```

```txt
In this following example, size of h1 object will be 8 byte because only int health & char level is present in class that require memory size of 5.
Then what about another 5 bytes 
```

`👉 Homework :- Read padding & greedy alignment`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero {
    
    // properties or data member
    int health;
    char level;
};

int main() {
    
    Hero h1;
    
    cout<<sizeof(h1)<<endl;  

	
    return 0;
}
```

### For Empty Class Case

```txt
In case of empty class , object will have size of 1 byte for the identification or to track.
```
```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero {
    
    // properties or data member

};

int main() {
    
    Hero h1;
    
    cout<<sizeof(h1)<<endl;
    //  if case of empty class , object will have size of 1 byte for the identification or to track.

	
    return 0;
}
```
---

## Define Class In Other File And Import It In Another File

### Defining class in another file
```cpp
// Hero.cpp file name

class Hero {

  //properties
  char name[100];
  int health;
  char level;
};
```
### Import/Including class in main file

```cpp
// main.cpp

#include<iostream>
#include "Hero.cpp"
using namespace std;

int main(){
    
    // creation of object
    Hero ramesh;
    
    cout<<sizeof(h1)<<endl;
    //  if case of empty class , object will have size of 1 byte for the identification or to track.

	
    return 0;
}
```
---

## Accessing Data Members/Properties

Using dot (.) operator, but it can be accessed outside the class by only if data members are public.

```
Hero ramesh;

cout<<"health is : "<< ramesh.health << endl;
cout<<"level is : "<< ramesh.level << endl;
```
---

## Access Modifiers

### 1. Private (by default):
Private data member and methods can be accessible only inside the class itself.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
    char level;
public:
    int health;
    
    void printLevel() {
        cout<<"Level is : "<< level << endl;  // level data member is accessible only in class because it is private
    }
};


int main() {
    
    // creation of object
    Hero ramesh;
    
    cout<< "health is : "<< ramesh.health << endl;  // accessible
    
    cout<< "level is : "<< ramesh.level << endl;  // not accessible outside the class , throw error

	
    return 0;
}
```
### 2. Public:
Public data member and methods can be accessed outside the class means anywhere you can access them.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
    char level;
public:
    int health;
};


int main() {
    
    // creation of object
    Hero ramesh;
    
    cout<< "health is : "<< ramesh.health << endl;  // accessible
    
    cout<< "level is : "<< ramesh.level << endl;  // not accessible outside the class , throw error

	
    return 0;
}
```
### 3. Protected:

```cpp
```

---

## Set values of public data members

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
public:
    char level;
    int health;
    
    void printLevel() {
        cout<<"Level is : "<< level << endl;  
    }
};


int main() {
    
    // creation of object
    Hero ramesh;
    
    ramesh.health = 70;
    ramesh.level = 'A';
    
    cout<< "health is : "<< ramesh.health << endl;  
    
    cout<< "level is : "<< ramesh.level << endl;  

	
    return 0;
}
```
---
## Getter and Setter:

Because we can not directly access the private data mambers. 
That's why we access them using functions.

👉 We can make condition who can access these private data members in functions using if-else

```cpp
  int getHealth() {
        if(health <= 70){
        return health;
        } else {
            return ;
        }
  }
```

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    void printLevel() {
        cout<<"Level is : "<< level << endl;  
    }
    
    // getter of data members either if it is private or public
    int getHealth() {
        return health;
    }
    
    char getLevel() {
        return level;
    }
    
    // setter
    void setHealth(int h){
        health = h;
    }
    
    void setLevel(char l){
        level = l;
    }
};


int main() {
    
    // creation of object
    Hero ramesh;
    
    cout<< "Ramesh health is : "<< ramesh.getHealth() << endl;  
    
    // setting the health
    
    setHealth(89);
    
    cout<< "Ramesh health is : "<< ramesh.getHealth() << endl;

	
    return 0;
}
```
---
## Static vs Dynamic Allocation

### Static Allocation

In previous examples, we have allocate object statistically

```cpp
Hero ramesh;

//access
cout<< ramesh.level() << endl;
```

### Dynamic Allocation

```cpp
// previously study already
int *i = new int;
```

👉 Now dynamically object implementation
```cpp
Hero *ramesh = new Hero;

//access 

cout<< (*ramesh).level << endl;
cout<< ramesh->level <<endl;
```

---
## Constructor

Whenever we create a object then a constructor is called or invoke automatically behind the scene.
If constructor is not provided by the user then compiler automatically invoke default constructor.

```
Hero ramesh;  // behind the scene it will called ramesh.Hero() if no constructor is provided by default.
```
It has no return type and input parameter.

---
## Default Constructor (own default constructor)

👉 If you create your own constructor then default constructor generate or called by compiler will became vanish.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    // create our own default constructor
    
    Hero() {
        cout << "Constructor Called" << endl;
    }
    
};


int main() {
    
    cout<<"Hi"<<endl;
    
    // creation of object statically
    Hero ramesh;
    
    // dynamically creation of object
    Hero *h = new Hero;  // same constructor will called same as above
    

	
    return 0;
}
```

**Output:**
```txt
Hi
Constructor Called
Constructor Called
```
---

## Parameterised Constructor:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    // create parameterized constructor
    
    Hero( int health) {
        this->health = health;
    }

    Hero( int health, char level) {
	this->health = health;
	this->level = level;
    }
    
    int getHealth(){
        return this->health;
    }

    int getLevel(){
        return this->level;
    }
    
};


int main() {
    
    cout<<"Hi"<<endl;
    
    // creation of object statically
    Hero ramesh(89);
    
    cout<< ramesh.getHealth() <<endl; // 89
    
    // dynamically creation of object
    Hero *h = new Hero(70, 'S');  // same constructor will called same as above
    
    cout<< h->getHealth() <<endl; // 70
    cout<< h->getLevel() <<endl; // S
	
    return 0;
}
```

**Output:**
```txt
Hi
89
70
```
---

## **this* keyword:


**this** keyword is point toward the object itself.

When **input parameter** and the **data member** have the same name then you will get confused.

That means **this** is same as **&ramesh** because both are point toward same object

So that means address of current object is stored in **this**

```cpp
Hero( int health) {
	this->health = health;
}
```
```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    // create our own default constructor
    
    Hero( int health) {
        cout<<"this -> "<< this <<endl;
        this->health = health;
    }
    
    int getHealth(){
        return this->health;
    }
    
};


int main() {
    
    cout<<"Hi"<<endl;
    
    // creation of object statically
    Hero ramesh(89);
    
    cout<<"Address of ramesh "<< &ramesh <<endl;
    cout<< ramesh.getHealth() <<endl; // 89
    
	
    return 0;
}
```

**Output**
```txt
Hi
this -> 0x7ffd0f60ac68
Address of ramesh 0x7ffd0f60ac68
89
```
---

## Copy Constructor:

If you have not created any copy constructor then compiler will automatically generate it.

Or you can also create your own constructor.

```
Constructor -> Object creation
Copy -> Object Copy
```

### Default copy constructor

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    // create our own default constructor
    
    Hero() {
        cout<< "Constructor called" <<endl;
    }
    
    // parameterised constructor
    
    Hero( int health) {
        this->health = health;
    }
    
    Hero( int health, char level) {
        this->health = health;
        this->level = level;
    }
    
    int getHealth(){
        return this->health;
    }
    
    int getLevel(){
        return this->health;
    }
    
    void setHealth(int health){
        this->health = health;
    }
    
    void setLevel(char level){
        this->level = level;
    }
    
    void print(){
        cout<<"health "<< this->health <<endl;
        cout<<"level "<< this->level <<endl;
    }
    
};


int main() {
    
    Hero suresh(70, 'C');
    
    // Hero R;
    // R.setHealth(suresh.getHealth());
    // R.setLevel(suresh.getLevel());
    
    Hero R(suresh);  // same as above
    R.print();
    
    
	
    return 0;
}
```

### Generate Own Copy Constructor
#### 🔁 What Happens Internally?
A copy constructor is used to copy one object into another. Its signature is typically:

```cpp
ClassName(const ClassName &obj);  // Correct way: pass by reference
```
Now, if you mistakenly do:

```cpp
ClassName(ClassName obj);  // ❌ Wrong: pass by value
```
Then when this constructor is called, it tries to copy the object obj into the function parameter (because it's pass-by-value), which again calls the copy constructor to copy it… and so on infinitely.

#### **Example:**
```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    char level;
    
    // create our own default constructor
    
    Hero() {
        cout<< "Constructor called" <<endl;
    }
    
    // parameterised constructor
    
    Hero( int health) {
        this->health = health;
    }
    
    Hero( int health, char level) {
        this->health = health;
        this->level = level;
    }
    
    // copy constructor
    
    // must be pass by reference
    Hero(Hero& temp){
	cout<<" Copy Constructor Called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    
    int getHealth(){
        return this->health;
    }
    
    int getLevel(){
        return this->health;
    }
    
    void setHealth(int health){
        this->health = health;
    }
    
    void setLevel(char level){
        this->level = level;
    }
    
    void print(){
        cout<<"health "<< this->health <<endl;
        cout<<"level "<< this->level <<endl;
    }
    
};


int main() {
    
    Hero suresh(70, 'C');
    suresh.print();
    
    // Hero R;
    // R.setHealth(suresh.getHealth());
    // R.setLevel(suresh.getLevel());
    
    // copy constructor
    Hero R(suresh);  // same as above
    R.print();
    
    
	
    return 0;
}
```

**Output**
```txt
Copy Constructor Called
health 70
level C
health 70
level C
```
---

## Shallow & Deep Copy:

- 👉 **Default copy constructor** generate **shallow copy**
- **Shallow Copy**: Copies object’s pointer values (both point to same memory). Remember only pointer values.
- **Deep Copy**: Allocates separate memory and copies actual data.

### Shallow Copy

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    // char name[100]; // not good practice
    char *name;
    char level;
    
    
    // create our own default constructor
    
    Hero() {
        cout<< "Simple Constructor called" <<endl;
        name = new char[100];
    }
    
    // parameterised constructor
    
    Hero( int health) {
        this->health = health;
    }
    
    Hero( int health, char level) {
        this->health = health;
        this->level = level;
    }
    
    int getHealth(){
        return this->health;
    }
    
    int getLevel(){
        return this->health;
    }
    
    void setHealth(int health){
        this->health = health;
    }
    
    void setLevel(char level){
        this->level = level;
    }
    
    void setName(char name[]){
        strcpy(this->name, name);
    }
    
    void print(){
        cout<<endl;
        cout<<"[ Name: "<< this->name <<" ,";
        cout<<"health: "<< this->health <<", ";
        cout<<"level: "<< this->level <<" ]";
        cout<<endl<<endl;
    }
    
};


int main() {
    
    Hero hero1;
    
    hero1.setHealth(92);
    hero1.setLevel('S');
    
    char name[] = "Abhishek";
    
    hero1.setName(name);
    
    hero1.print();
    
    // use default copy constructor 
    
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();
    
    hero1.name[0] = '!';
    hero1.setHealth(90);
    hero1.print();
    
    hero2.print();
	
    return 0;
}
```

**Output**
```txt
Simple Constructor called

[ Name: Abhishek ,health: 92, level: S ]

Copy constructor called

[ Name: Abhishek ,health: 92, level: S ]


[ Name: !bhishek ,health: 90, level: S ]


[ Name: !bhishek ,health: 92, level: S ]
```

### Deep Copy

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    // char name[100]; // not good practice
    char *name;
    char level;
    
    
    // create our own default constructor
    
    Hero() {
        cout<< "Simple Constructor called" <<endl;
        name = new char[100];
    }
    
    // parameterised constructor
    
    Hero( int health) {
        this->health = health;
    }
    
    Hero( int health, char level) {
        this->health = health;
        this->level = level;
    }
    
    // copy constructor
    
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];  // deep copy
        strcpy(ch, temp.name);
        this->name = ch;
        
        cout<< "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    
    int getHealth(){
        return this->health;
    }
    
    int getLevel(){
        return this->health;
    }
    
    void setHealth(int health){
        this->health = health;
    }
    
    void setLevel(char level){
        this->level = level;
    }
    
    void setName(char name[]){
        strcpy(this->name, name);
    }
    
    void print(){
        cout<<endl;
        cout<<"[ Name: "<< this->name <<" ,";
        cout<<"health: "<< this->health <<", ";
        cout<<"level: "<< this->level <<" ]";
        cout<<endl<<endl;
    }
    
};


int main() {
    
    Hero hero1;
    
    hero1.setHealth(92);
    hero1.setLevel('S');
    
    char name[] = "Abhishek";
    
    hero1.setName(name);
    
    hero1.print();
    
    // use own copy constructor 
    
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();
    
    hero1.name[0] = '!';
    hero1.setHealth(90);
    hero1.print();
    
    hero2.print();
	
    return 0;
}
```

**Output**
```txt
Simple Constructor called

[ Name: Abhishek ,health: 92, level: S ]

Copy constructor called

[ Name: Abhishek ,health: 92, level: S ]


[ Name: !bhishek ,health: 90, level: S ]


[ Name: Abhishek ,health: 92, level: S ]
```
---

## Copy Assignment Operator

- Let's suppose two objects are already created.
- If we want to copy an object to another then we will use copy assignment operator.
- It work same as **default copy constructor** means create **shallow copy**

```cpp
int main() {
    
    Hero hero1;
    
    hero1.setHealth(92);
    hero1.setLevel('S');
    
    char name[] = "Abhishek";
    
    hero1.setName(name);

    
    Hero hero2;
    
    // copy using assignment operator
    hero2 = hero1;
    
    hero1.print();
    
    hero2.print();
    
	
    return 0;
}
```
---

## Destructor

Called when an object goes out of scope or is explicitly deleted. Used for cleanup.
If object is created using static allocation then **destructor** will called automatically after object goes out of scope.
If object is created using dynamic allocation then **destructor** will not called automatically after object goes out of scope , we need to delete object explicitly.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Hero{
    
private:
    int health;
public:
    // char name[100]; // not good practice
    char *name;
    char level;
    
    
    // create our own default constructor
    
    Hero() {
        cout<< "Simple Constructor called" <<endl;
        name = new char[100];
    }
    
    
    // our own destructor
    ~Hero(){
        cout<< "Destructor called" << endl;
    }
    
};


int main() {
    
    // static
    Hero a;
    
    // dynamic
    Hero *b = new Hero;
    
    delete b; // need to delete explicitly
    
    return 0;
}
```

**Output**
```txt
Simple Constructor called
Simple Constructor called
Destructor called
Destructor called
```
---

## 📌 Static Keyword
- Used to create members shared by all objects.
- Belongs to class
- No need of object to access

```cpp
class Hero {
public:
    static int count;
};

// initialize static data member
int Hero::count = 5;


int main() {
    
    cout<< Hero::count << endl;

    Hero a;
    cout<< a.count << endl; // not recommended
    
    return 0;
}
```

**Output**
```txt
5
```

---

## 🔁 Static Functions
- Can be called using class name. They can only access static members.
- No need of object to call them.
- Does not have **this** keyword because **this** is pointer to object but there is no need of object in static functions.

```cpp
class Hero {
public:
    static int count;
    static int random() {
        return count;
    }
};

// initialize static data member
int Hero::count = 5;


int main() {
    
    cout<< Hero::random() << endl;
    
    Hero a;
    
    cout<< a.random() << endl; // not recommended
    
}
```
---

# What have we study in this 

- class
- object
- data member
- behaviour / function
- access modifiers
- static allocation
- dynamic allocation
- simple constructor
- default constructor
- parameterised constructor
- copy constructor
- copt assignment operator
- static destructor
- dynamic case destructor
- shallow copy
- deep copy
- static data members
- static functions

---
