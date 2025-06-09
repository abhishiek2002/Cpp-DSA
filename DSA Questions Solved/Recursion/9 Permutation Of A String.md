# 9 Permutation Of A String

👉 <a href="https://www.naukri.com/code360/problems/permutations-of-a-string_985254">Coding Ninja Problem Statement</a>

---

## My Solution:

---

### Graph:

<img src="/DSA Questions Solved/Recursion/9 Permutation Of A String Solution Graph1( My Graph).jpg" width="300px" />

<img src="/DSA Questions Solved/Recursion/9 Permutations Of A String Solution Graph1.png" />

---

### Code:

```cpp
#include<algorithm>
void solve(string str, string output, vector<string>& permutations){
    // base condition
    if(str.length() == 1){
        output += str;
        permutations.push_back(output);
        return ;
    }

    // recurrence relation and processing
    for(int i=0; i<str.length(); i++){
        string cpyStr = str;
        output.push_back(str[i]);
        cpyStr.erase(i, 1);
        solve(cpyStr, output, permutations);
        output.pop_back();
    }

}
vector<string> generatePermutations(string &str)
{
    vector<string> permutations;

    string output;

    solve(str, output, permutations);

    sort(permutations.begin(), permutations.end());
    return permutations;
}
```
---

## Another Solution ( Swap Solution ):

---

### Graph:

<img src="/DSA Questions Solved/Recursion/9 Permutation Of A String Solution Swap Graph( My Graph).jpg" width="300px" />

<img src="/DSA Questions Solved/Recursion/9 Permutation Of A String Solution Graph(swap).png" />

---

### Code:

```cpp
#include<algorithm>
void solve(string str, int index, vector<string>& permutations){
    // base condition
    if(index == str.length()){
        permutations.push_back(str);
        return ;
    }

    // recurrence relation and processing
    for(int i=index; i<str.length(); i++){
        string cpyStr = str;
        swap(cpyStr[i], cpyStr[index]);
        solve(cpyStr, index + 1, permutations);
    }

}
vector<string> generatePermutations(string &str)
{
    vector<string> permutations;

    string output;

    solve(str, 0, permutations);

    sort(permutations.begin(), permutations.end());
    return permutations;
}
```
---

## Input:
```txt
abc
bc
c
```

## Output:
```txt
abc acb bac bca cab cba 
bc cb 
c
```
---
