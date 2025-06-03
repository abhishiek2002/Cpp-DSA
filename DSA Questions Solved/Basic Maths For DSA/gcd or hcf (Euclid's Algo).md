# gcd or hcf (Euclid's Algo).md

## ✅ Key Idea (Recursive Insight):
If a > b, then:

```mathematica
GCD(a, b) = GCD(b, a % b)
```

👉 This is based on the fact:
  The GCD of two numbers also divides their difference.

ℹ️ Why?

Let’s say:

a = 60, b = 24

Then:

```mathematica
GCD(60, 24) = GCD(24, 60 % 24) = GCD(24, 12)
GCD(24, 12) = GCD(12, 0) = 12
```
When the remainder becomes 0, the divisor at that step is the GCD.

## 🧮 Euclid’s Algorithm (Iterative C++ Style):
```cpp
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// or
// int gcd(int a, int b){
//   while(b!=0 || a!=0){
//     if(b==0) return a;
//     if(a==0) return b;
    
//     if(a>b){
//       a = a-b;
//     } else {
//       b = b-a;
//     }
//   }
// }
```
## 🧮 Or Recursive Style:
```cpp
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
```

## ✨ Example:
Let's find GCD(48, 18)

```mathematica
Steps:
  1. GCD(48, 18) → GCD(18, 48 % 18) → GCD(18, 12)

  2. GCD(18, 12) → GCD(12, 18 % 12) → GCD(12, 6)

  3. GCD(12, 6) → GCD(6, 12 % 6) → GCD(6, 0)

  4. Answer = 6 ✅
```

## 🧠 Time Complexity:
```mathematica
O(log(min(a, b)))
Because in each step, the size of the number reduces significantly.
```

