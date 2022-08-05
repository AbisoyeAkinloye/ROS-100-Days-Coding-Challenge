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
6. Assign address to a pointer. `&` - address operator.
7. Writing to an uninitialize or null pointer through dereferencing is a bad practice.
8. `const` pointer variable not pointer-to-const.
```c++
    int* const ptr {};

    // not
    const int* ptr {}; 
```

### Dereferencing of Pointer
To access a value stored in an object pointed to by a pointer, we need to dereference a pointer. Dereferencing is done by prepending a pointer (variable) name with a dereferencing `*` operator.

### Pointer to Character
Pointer to character can be initialized with a string literal: `C-string`.
```c++
const char* message {"Hello World"};
```

## Dynamic Memory Allocation
Dynamic memory allocation is allocating the memory you need to store the data you’re working with at runtime, rather than having the amount of memory predefined when the program is compiled.

### Stack Vs Heap
An automatic variable is created when its definition is executed. The space for an automatic variable is allocated in a memory area called the **Stack**. Local variables are stored in the memory section called Stack.

Memory that is not occupied by the operating system or other programs that are currently loaded is called the **Heap**. You can request that space be allocated within the free store at runtime for a new variable of any type.
Use `new` keyword to use heap and `delete` to delete variable in heap memory.

| Stack     | Heap      |
|:---------:|:---------:|
|Memory is finite|Memory is finite|
|Dev not in full controll of memory lifestyle| Dev in full control of memory lifestyle|
|Lifetime is controlled by scope mechanism| Life style is controlled explicitly through `new` and `delete` operators|

```c++
// Memory location contains junk value
int* ptr {new int};

// Use direct initialization
int* ptr {new int(2022)};

// Use uniform initialization
int* ptr {new int{2022}};
```

*A pointer that doesn't point to valid memory address. Trying to dereference and use a **dangling pointer** will result in undefined behavior.* Examples of dangling pointers are: 

* Uninitialized pointer
* Deleted pointer
* Multiple pointers pointing to same memory

To avoid dangling pointer:

* Initialize your pointers immediately upon declaration.
* Check for `nullptr` before use.
* Right after a pointer is deleted, remember to assign nullptr to indicate that it points nowhere.

#### If `new` fails
Check for failed memory allocations:

1. Through the exception mechanism
2. The `std::nothrow` setting

### Memory Leak
When we loose access to memory that is dynamically allocated. As a C++ developer, a significant portion of the more serious bugs you deal with often boil down to mismanagement of dynamic memory. It is caused by the followings:
1. Reassigning of stack address to active dynamic address pointer
2. Double allocation
3. Pointer in local scope

## References
A reference is a name that can be used as an alias for another variable. It is the same as pointer to point to something in the memory.

Unlike a pointer, you cannot declare a reference and not initialize it. Also, once a reference is initialized as an alias for some variable, it keeps referring to that same variable for the remainder of its lifetime.

Reference points to a variable while pointer to an address of a variable.

```c++
int& rdata {23};
```

The ampersand following the type name indicates that the variable being defined, `rdata`, is a reference to a variable of type integer. Dereferencing is not necessary in reference.

**Reference Vs Pointer**
|Reference             |Pointer                  |
|----------------------|-------------------------|
|No need to dereference|Need to be dereferenced  |
|Must be initialized at declaration|Can be declared un-initialized (will contain garbage addresses)|
|Cant be change to reference something else|Can be changed to point somewhere else|