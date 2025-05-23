```cpp
#include <iostream>
using namespace std;

void test_label(int x) {

    if (x == 1){
        goto label1;
    }
    goto label2;

label1:
    cout << "in label1" << endl;
    return;

label2:
    cout << "in label2" << endl;
    return;
}

int main() {
    test_label(1);  // in label1
    test_label(2);  // in label2
}
```

```cpp
#include <iostream>
using namespace std;

void test_label(int x){
  if(x==1){
    goto label1;
  }
  goto label2;
  
  label1:
    cout<<"X is 1"<<endl;
    return;
  
  label2:
    cout<<"X is not 1"<<endl;
    return;
}

int main() 
{
  int x;
  start:
    cout<<"Enter an integer\n";
    cin>>x;
  
  test_label(x);
  
  char trying;
  cout<<"Want to try again\n";
  cout<<"y/n only\n";
  
  cin>>trying;
  
  if(trying == 'y') goto start;
   
  
  return 0;
}
```
