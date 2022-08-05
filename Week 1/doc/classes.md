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