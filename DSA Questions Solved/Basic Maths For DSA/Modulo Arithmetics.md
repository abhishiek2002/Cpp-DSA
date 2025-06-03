# 📘 Modulo Arithmetic – Complete Explanation

Modulo arithmetic is a system of arithmetic for integers, where numbers "wrap around" upon reaching a certain value called the **modulus**.

---

## 🔢 What is Modulo?

The modulo operation finds the **remainder** when one number is divided by another.

### 📌 Notation:

```
a mod m = r
```

This means: When `a` is divided by `m`, the remainder is `r`.

### 🧮 Examples:

```
10 mod 3 = 1      (because 10 = 3 * 3 + 1)  
25 mod 7 = 4      (because 25 = 7 * 3 + 4)  
-4 mod 3 = 2      (to keep the remainder positive)
```

---

## ➕ Modulo Properties

Let `a`, `b`, and `m` be integers and `m > 0`.

### 1. (a + b) mod m = ((a mod m) + (b mod m)) mod m

**Example**:

```
(17 + 23) mod 5 = 40 mod 5 = 0  
((17 mod 5) + (23 mod 5)) mod 5 = (2 + 3) mod 5 = 5 mod 5 = 0 ✅
```

---

### 2. (a - b) mod m = ((a mod m) - (b mod m) + m) mod m

**Example**:

```
(7 - 15) mod 5 = -8 mod 5 = 2  
((7 mod 5) - (15 mod 5) + 5) mod 5 = (2 - 0 + 5) mod 5 = 7 mod 5 = 2 ✅
```

---

### 3. (a × b) mod m = ((a mod m) × (b mod m)) mod m

**Example**:

```
(4 × 6) mod 5 = 24 mod 5 = 4  
((4 mod 5) × (6 mod 5)) mod 5 = (4 × 1) mod 5 = 4 ✅
```

---

### 4. (a^b) mod m

This is called **Modular Exponentiation**.

Efficient method in C++:

```cpp
int modPow(int a, int b, int m) {
    int res = 1;
    a = a % m;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}
```

---

## 🧠 Why Modulo is Important?

* Used in **hashing**
* Needed in **cryptography (RSA, Diffie-Hellman)**
* Used to **prevent integer overflows**
* Frequently appears in **competitive programming** and math problems

---

## 🚫 Modulo Division

Modulo division is **not directly possible** like addition or multiplication. To divide under modulo:

```
(a / b) mod m = (a * inverse(b)) mod m
```

Where `inverse(b)` is the **modular multiplicative inverse** of `b` modulo `m`.

### ➕ Fermat’s Little Theorem (when m is prime):

```
b^(-1) mod m = b^(m - 2) mod m
```

**Example:**

```
5 / 3 mod 7 = (5 * 3^(-1)) mod 7 = (5 * 5) mod 7 = 25 mod 7 = 4
```

---

## 📌 Summary Table

| Operation      | Rule                                                      |
| -------------- | --------------------------------------------------------- |
| Addition       | (a + b) mod m = ((a mod m) + (b mod m)) mod m             |
| Subtraction    | (a - b) mod m = ((a mod m) - (b mod m) + m) mod m         |
| Multiplication | (a × b) mod m = ((a mod m) × (b mod m)) mod m             |
| Exponentiation | a^b mod m using binary exponentiation                     |
| Division       | a / b mod m = a × b^(-1) mod m (only when inverse exists) |

---

## 🧮 Bonus Tip: Handling Negative Modulo

In many programming languages:

```
-4 % 3 = -1
```

But in modular arithmetic, we **always want a positive remainder**. So use:

```
((-4 % 3) + 3) % 3 = (2 + 3) % 3 = 2 ✅
```

---

## 📘 Applications of Modulo

* Cryptography (RSA, AES, etc.)
* Competitive programming
* Clock arithmetic (12-hour clock)
* Hash functions
* Random number generation
* Number theory problems

---
