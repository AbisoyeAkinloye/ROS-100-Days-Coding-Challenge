# Revise Modern C++

**Core features | Standard library | STL**

_Topics to cover:_

1. Data types
2. Control flow
3. Function
4. Pointers
5. Classes
6. Inheritance
7. Polymorphism

## Data Types
| Data type | Alias | Memory |
|-----------|-------|--------|
|Integer    | `int` | 4 bytes|

### Variables

**Variable:** It is used to name piece of memory that stores specific data types.

Types of Variable initialization

* Braced initialization
  ```c
  int number {};
  ```
* Functional initialization
  ```c
  int number();
  ```
* Assignment initialization
  ```c
  int number = 0;
  ```
**NB:** Braced initialization doesn't support narrowing conversion.