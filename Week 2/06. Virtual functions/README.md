# Polymorphism Cont'd

## Virtual Function with default arguments

Default argument values are dealt with at compile time, so you can get unexpected results when you use default argument values with virtual function parameters.

Default argurment in virtual function is bind by the compiler statically. It uses the **default argument in the base function**. As in:

```c++
class Base{
    public:
        Base();
        ~Base();

        virtual double add(double num1=5, double num2=10) const {
            std::cout << "Base::add() called" << std::endl;
            return (num1 + num2 + 1);
        }
}

class Derived : public Base {
    public:
        Derived();
        ~Derived();

        double add(double num1=5, double num2=10) const {
            std::cout << "Base::add() called" << std::endl;
            return (num1 + num2 + 1);
        }
}
```

* Default arguments are handled at compile time.
* Virtual functions are called at run time with polymorphism.
* If you use default arguments with virtual functions, you might get weird result with polymorphism.
* Default arguments with virtual functions can be very confusing. **They are best avoided.**


## Virtual destructors
To ensure that the correct destructor is always called for objects of derived classes that are allocated in the free store, you need virtual class destructors.

Specifying a destructor with `virtual` specifier will allow the compiler to called the destructor as expected. 

To implement a virtual destructor in a derived class, you just add the keyword virtual to the destructor declaration in the base class.

## Dynamic Cast

A dynamic cast is a conversion that’s performed at runtime. The `dynamic_cast<>()` operator performs a dynamic cast. You can only apply this operator to pointers and references to polymorphic class types, which are class types that contain at least one virtual function.

* Transforming from base class pointer or reference to derived class pointer or reference at run time.
* Makes it possible to call non polymorphic methods on derived objects.

## Polymorphic functions and destructor

**Note:** Never call virtual (polymorphic) function from constructor & destructor.
* Calling a virtual function from a constructor or destructor won't give a polymorphic result or dynamic binding.
* The call will never go to a more derived class than the currently executing constructor or destructor.
* In other words you will get static binding results.

## Pure virtual functions and abstract classes

Pure virtual functions indicate that the method is should not be implemented in the base class but rather implemented in the inherited class.

```cpp
 // pure virtual function syntax
 virtual double func() const = 0;
```

Hence the class with the method above will become an abstract class and instantiation of object will no longer be possible.

**NOTE:** 

- Once you set a pure virtual function in a class, the class will automatically become abstract class.
- You cn't create objects of an abstract class, unless you get a compilation error.
- Derived classes from an abstract class must explicitly override all the pure virtual functions from the abstract parent class, if they don't, they themselves become abstract.
- Pure virtual function don't have an implementation in the abstract class. They are meant to be implemented by deriving class.
- You can't call the pure virtual functions from the constructor of the abstract class.
- The constructor of the abstract class is used by deriving class to build up the base part of the object.