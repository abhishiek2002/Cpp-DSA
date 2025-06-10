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


## Constructor

Whenever we create a object then a constructor is called or invoke automatically behind the scene.
