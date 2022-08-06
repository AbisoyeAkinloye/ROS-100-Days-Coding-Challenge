# Classes and OOP
## Object Oriented Programming

The essence of object-oriented programming (commonly abbreviated to OOP) is that you write programs in terms of objects in the domain of the problem you are trying to solve, so part of the program development process involves designing a set of types to suit the problem context. 

If you’re writing a program to keep track of your bank account, you’ll probably need to have data types such as Account and Transaction.

Object-oriented programming is a programming style based on the idea of defining your own data types as classes. It involves the ideas of encapsulation, data hiding, class inheritance, and polymorphism.

## Classes

They are mechanism in C++ to build own type (user defined types). The class is a blueprint and `objects` are then created. Variables of a class type store objects. Objects are sometimes called instances of the class. Defining an instance of a class is referred to as instantiation.

Class has member variables and behaviour or functions. **Members of a class are `private` by default.**

```c++
class Classname {
    // variables and behaviours
};
```

**Note:**
* Member variables in a class can only be a `stack` variable or `pointer`. 
* It cannot be a <strike>reference</strike>. Because reference can't be left un-initialized.
* Private members of classes (variables and functions) aren't accessible from the outside of the class definition.

### Constructor

It is a special kind of method that is called when an instance of a class is created. How to create a constructor:
* No return type
* Same name as the class name
* Can have parameter or not
* Usually used to initialize member variables of a class
* Declare in `public` specifier

####  Default Constructor

A constructor without parameters or with default parameters set is called a default constructor. It is a constructor which can be called without arguments. When you have an empty constructor, you don't have to declare it. C++ will create a default constructor.

Instantiate a class with default constructor as follows: `Classname variablename;` but `Classname variablename(arg1, arg2,...);` if it has a parameter.

You can also set default constructor: `Constructor_name() = default;`

#### Setters and Getters

These are methods in class to read or modify member variables of a class.

#### Manage Class Object through  pointers
Instead of dereferencing before call a method pointing to an object with (.)dot notation, you can use an -> `arrow notation`. 

* pointer to a stack object
* pointer to a heap object

### Destructors

They are special methods that are called when an object dies. They are needed when the objects needs to release some dynamic memory, or for some kind of clean up. `destructor = ~constructor` You can create dynamic memory in the constructor and release it in the destructor.

when are destructor called:

* When an object is passed by value to a function
* When a local object is returned from a function (for some compiliers)
* When a local stack object goes out of scope (dies)
* When a heap object is released with `delete`

**NOTE:** 
* Destructor will always don't have parameters.
* If there are many instantiation, the constructor is called orderly but the destructor is called in reversed other.
* The object that was constructed first will be destroy last and vice-versa.

```c++
    Dog dog1("Doggy1", "Shepherd",4);
    Dog dog2("Doggy2", "Shepherd",6);
    Dog dog3("Doggy3", "Shepherd",4);
    Dog dog4("Doggy4", "Shepherd",2);
```
Order of constructor and destructor call are: Constructor; dog1, 2 ... 4, destructor; dog4, 3 ... 1. 

### The `this` pointer
Each class member fuction contains a hidden pointer called `this`. That pointer contains the address of the current object, for which the method is being executed. This also applies to constructors and destructors.

**Uses**

* To print out object address
* To resolve conflict names
  ```c++
  void set_name(const std::string& name){
    // name = name  
    // member variable = param
    this->name = name
  }
  ```
* Calling chained function or method
```c++
  // chained call with pointer
  Student* set_name(const std::string& name){
    this->name = name;
    return this; 
  }

  Student* set_department(const std::string& department){
    this->department = department;
    return this; 
  }

  Student* set_level(const std::string& level){
    this->level = level;
    return this; 
  }

  Student* student1 = new Student("Abisoye", "Mechanical", 500);
  student1 -> get_student_info();
  
  // pointer version
  student1.set_name("Abisoye")->set_department("Mechanical")->set_level(500);
  ```
* Chained calls using reference
  ```c++
    // chained call with pointer
    Student& set_name(const std::string& name){
        this->name = name;
        return *this; 
    }

    Student& set_department(const std::string& department){
        this->department = department;
        return *this; 
    }

    Student& set_level(const std::string& level){
        this->level = level;
        return *this; 
    }

    // reference version
    student1.set_name("Abisoye").set_department("Mechanical").set_level(500);
  ```

## Struct

Struct is also a way to create user defined type. Unlike classes whose members are `private` by default, members of structs are `public` by default.

```c++
struct Student {
    std::string name;
}
```

## Size of an object

The size of an object is going to the sum of member variables. 