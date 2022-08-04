# Pointers and Reference
## Pointers

A pointer is a variable that contains the memory address of another variable or object, called the *pointee*. Each object in memory has its type and an address.

*Syntax:*
```c++
int* ptr {};
```

**Note:** 
1. Integer pointer stores integer variable address. Same as other types.
2. To declare a pointer that points to a char (object) we declare a pointer of type char*.
3. You can explicitly initialize a null pointer.
   
```c++
int* ptr {nullptr};
```
4. A pointer has the same size as the variable (8 bytes) in the memory.
5. Augumented variable declaration for pointer and an integer type.
 ```c++
 int *ptr {}, var_int {};
``` 
6. Assign address to a pointer. `&` - address operator

### Dereferencing of Pointer
To access a value stored in an object pointed to by a pointer, we need to dereference a pointer. Dereferencing is done by prepending a pointer (variable) name with a dereferencing `*` operator.

### Pointer to Character
Pointer to character can be initialized with a string literal: `C-string`.