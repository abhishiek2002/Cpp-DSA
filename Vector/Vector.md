# 📚 C++ Vector Functions — Complete Table

| Category   | Function               | Description                                                   |
|:-----------|:------------------------|:---------------------------------------------------------------|
| Modifiers  | `push_back()`            | Adds an element to the end of the vector                        |
|            | `pop_back()`             | Removes the last element of the vector                          |
|            | `clear()`                | Removes all elements from the vector                            |
|            | `insert()`               | Inserts elements at specified position                          |
|            | `erase()`                | Removes single or range of elements                             |
|            | `swap()`                 | Swaps the contents of two vectors                               |
|            | `assign()`               | Assigns new contents to the vector, replacing current contents   |
| Iterators  | `begin()`                | Returns an iterator pointing to the first element               |
|            | `end()`                  | Returns an iterator pointing past the last element              |
|            | `rbegin()`               | Returns a reverse iterator to the last element                  |
|            | `rend()`                 | Returns a reverse iterator to the element before first          |
|            | `cbegin()`               | Returns a constant iterator to the first element                |
|            | `cend()`                 | Returns a constant iterator past the last element               |
|            | `crbegin()`              | Returns a constant reverse iterator to the last element         |
|            | `crend()`                | Returns a constant reverse iterator before the first element    |
| Capacity   | `size()`                 | Returns the number of elements in the vector                    |
|            | `max_size()`             | Returns the maximum number of elements the vector can hold      |
|            | `resize()`               | Changes the size of the vector                                   |
|            | `capacity()`             | Returns the size of the storage space currently allocated        |
|            | `empty()`                | Checks whether the vector is empty                               |
|            | `shrink_to_fit()`        | Reduces capacity to fit its size                                 |
| Element Access | `at()`               | Returns reference to element at specified position (with bounds check) |
|            | `front()`                | Returns reference to the first element                           |
|            | `back()`                 | Returns reference to the last element                            |
|            | `data()`                 | Returns direct pointer to the memory array used internally       |
