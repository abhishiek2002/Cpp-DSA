# 📖 C++ String Functions Table with Examples

| Function             | Description                                 | Example Code                                        | Output                |
|:--------------------|:--------------------------------------------|:---------------------------------------------------|:----------------------|
| `length()` / `size()` | Returns the length of the string             | `string s = "hello"; cout << s.length();`          | `5`                    |
| `empty()`             | Checks if string is empty                    | `string s = ""; cout << s.empty();`                | `1` (true)             |
| `clear()`             | Clears the string                            | `string s = "hello"; s.clear();`                   | `s = ""`               |
| `append()`            | Adds string at the end                        | `string s = "hello"; s.append(" world");`          | `s = "hello world"`    |
| `push_back()`         | Adds a character at the end                  | `string s = "hey"; s.push_back('!');`              | `s = "hey!"`           |
| `pop_back()`          | Removes last character                       | `string s = "hey!"; s.pop_back();`                 | `s = "hey"`            |
| `substr(pos, len)`    | Extracts substring starting at pos of len    | `string s = "hello"; cout << s.substr(1,3);`       | `ell`                  |
| `insert(pos, str)`    | Inserts str at given pos                      | `string s = "helo"; s.insert(3,"l");`              | `s = "hello"`          |
| `erase(pos, len)`     | Erases len characters from pos               | `string s = "hello"; s.erase(1,2);`                | `s = "hlo"`            |
| `replace(pos, len, str)`| Replaces len characters from pos with str | `string s = "hello"; s.replace(1,3,"ey");`         | `s = "heylo"`          |
| `find(str)`           | Finds first occurrence position of str      | `string s = "hello"; cout << s.find("lo");`        | `3`                    |
| `rfind(str)`          | Finds last occurrence position of str       | `string s = "hello hello"; cout << s.rfind("lo");` | `12`                   |
| `compare(str)`        | Compares two strings                         | `string a="abc", b="abd"; cout << a.compare(b);`   | `-1`                   |
| `c_str()`             | Converts to C-style null-terminated string  | `string s="hey"; const char* c=s.c_str();`         | `c = "hey"`            |
| `at(index)`           | Returns character at given index (safe)      | `string s="hello"; cout << s.at(1);`               | `e`                    |
| `front()`             | Returns first character                     | `string s="hello"; cout << s.front();`             | `h`                    |
| `back()`              | Returns last character                      | `string s="hello"; cout << s.back();`              | `o`                    |

---

## 📌 Notes:
- `length()` aur `size()` dono same kaam karte hain.
- `c_str()` ka use jab `const char*` chahiye hota hai.
- `find()` agar nahi mila toh `string::npos` return karta hai.

