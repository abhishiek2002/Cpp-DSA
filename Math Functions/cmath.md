# Math Functions in C++ (`<cmath>`)

C++ provides a variety of built-in math functions through the `<cmath>` header. These functions help perform operations such as square roots, powers, trigonometry, rounding, etc.

---

## 🔢 Commonly Used Math Functions

### 1. Power and Root Functions

| Function      | Description                     | Example             |
| ------------- | ------------------------------- | ------------------- |
| `pow(x, y)`   | Returns `x` raised to power `y` | `pow(2, 3)` → `8`   |
| `sqrt(x)`     | Returns square root of `x`      | `sqrt(16)` → `4`    |
| `cbrt(x)`     | Returns cube root of `x`        | `cbrt(27)` → `3`    |
| `hypot(x, y)` | Returns `sqrt(x² + y²)`         | `hypot(3, 4)` → `5` |

### 2. Trigonometric Functions (in Radians)

| Function      | Description             |
| ------------- | ----------------------- |
| `sin(x)`      | Sine of `x`             |
| `cos(x)`      | Cosine of `x`           |
| `tan(x)`      | Tangent of `x`          |
| `asin(x)`     | Arcsine (returns angle) |
| `acos(x)`     | Arccosine               |
| `atan(x)`     | Arctangent              |
| `atan2(y, x)` | Arctangent of `y/x`     |

### 3. Logarithmic and Exponential Functions

| Function   | Description                 | Example              |
| ---------- | --------------------------- | -------------------- |
| `log(x)`   | Natural log (base `e`)      | `log(2.718)` → `1`   |
| `log10(x)` | Logarithm base 10           | `log10(100)` → `2`   |
| `exp(x)`   | `e` raised to the power `x` | `exp(1)` → `2.71828` |

### 4. Rounding Functions

| Function   | Description                    | Example              |
| ---------- | ------------------------------ | -------------------- |
| `ceil(x)`  | Rounds up to nearest integer   | `ceil(2.3)` → `3`    |
| `floor(x)` | Rounds down to nearest integer | `floor(2.8)` → `2`   |
| `round(x)` | Rounds to nearest integer      | `round(2.5)` → `3`   |
| `trunc(x)` | Removes decimal (towards zero) | `trunc(-3.7)` → `-3` |

### 5. Absolute and Sign Functions

| Function         | Description                               | Example                  |
| ---------------- | ----------------------------------------- | ------------------------ |
| `abs(x)`         | Absolute value of integer                 | `abs(-4)` → `4`          |
| `fabs(x)`        | Absolute value of float/double            | `fabs(-4.5)` → `4.5`     |
| `copysign(x, y)` | Combines magnitude of `x` and sign of `y` | `copysign(3, -1)` → `-3` |

### 6. Min, Max, Modulo

| Function         | Description                       |
| ---------------- | --------------------------------- |
| `fmod(x, y)`     | Floating-point remainder of `x/y` |
| `remainder(x,y)` | IEEE remainder                    |
| `min(x, y)`      | Minimum of two values             |
| `max(x, y)`      | Maximum of two values             |

---

## ✅ Example Code in C++

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 9.0;
    double b = 2.0;

    cout << "Square Root of a: " << sqrt(a) << endl;
    cout << "Power (a^b): " << pow(a, b) << endl;
    cout << "Sine of 90 degrees: " << sin(90 * M_PI / 180) << endl;
    cout << "Log base e: " << log(a) << endl;
    cout << "Ceil of 2.3: " << ceil(2.3) << endl;
    cout << "Absolute value of -5: " << abs(-5) << endl;

    return 0;
}
```

---

## 🧠 Tip

Use `#define _USE_MATH_DEFINES` before including `<cmath>` to use constants like `M_PI` (π).

---
