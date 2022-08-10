# Inheritance

Inheritance is the means by which you can create new classes by reusing and expanding on existing class definitions. Hierarchy of a class that depends of other class. 

Myself as Prospective Mechanical Engineer, which is a branch of Engineering disciple. The order of hierarchy is: `Person > Enginer > Mechanical`. Inheritance helps to reuse a class and improve on it.

Given a class A, suppose you create a new class B that is a specialized version of A. Class A is the `base class`, and class B is the `derived
class`. You can think of A as being the *“parent”* and B as being the *“child.”*

**Syntax:**

```c++
// Base Class
class Person {
    public:
        // constructor
        Person() = default;
        // public variables and methods
    private:
        // private variables
};

// Derived Class
class Student : public Person {
    public:
        // constructor
        Student() = default;
        // public variables and methods
    private:
        // private variables
}
```

## Inheritance Vs Aggregation

Inheritance passes `is a/an` test while Aggregation passes `has a/an` test. For example, A Dog is an Animal. An Animal can be the base class while Dog will be the derived class. On the other hand, An Automobile has an engine. This is called `Aggregation`. 

If the child object contained in a parent object cannot exist independently of its parent, their relation is called `Composition` instead of aggregation. An example of composition would be the relation between a House and a Room, if Rooms cannot exist without a House. If you delete a House, all its Rooms are typically deleted as well. 

## Member Access Specifier
### Public 

With Public inheritance, derived classes can access and use public members of the base class, but the derived class can't directly access private members.

The same also applies to friends of the derived class. They have access to private members of derived, but don't have access to the base class.

### Private 

They are inaccessible from the derived class and outside the class.

### Protected

Often you want the members of a base class to be accessible from within the derived class but nonetheless *protected* from outside interference.

## Base class access specifiers
```c++
    class Dog : public Animal{

    };
```
The `public` keyword is the base class access specifier. If `public` anything or any member public, protected, private in base class will be the same specifier in the derived class.

If `protected` as in:

```c++
class Person {
    public:
        m1;
    protected:                  
        m2;
    private:
        m3;
};

class Student : protected Person {
    m1 will be protected;
    m2 will be protected;
    m2 will be private;
}
```

If `private` base access specifiers, every members (be it public, protected, and private) will be in the base class will be `private` in the derived class. 

**NOTE:**
* Through the base class access specifier, we can control how relaxed or constrained is the acees of base class members from the derived class.
* Regardless of the access specifier, private members of base class are never accessile from the derived class.
* If you omit the base class access specifier in a class definition, the default is private (in a struct definition, the default is public).

![base access specifier](../doc/images/base%20access.png)

## Resurrecting members in scope.

If a private base access specifier is used and another sub class inherit from it, no member variable will be accessible. Resurrecting members is done using the `using` keyword. 
```c++
    class Engineer : private Person{
        public:
            Engineer();
            ~Engineer();

        protected:
            using Person::get_full_name;
            using Person::get_age;
            using Person::get_address;

        public:
            using Person::full_name;

        protected:
            int contract_count {0};
    }
```
**Note:** You cannot resurrect a private member inherited with private base access specifier.

## Default Constructor

Always provide a default constructor for your classes, especially if they will be part of an inheritance hierarchy. Compiler will not supply a default no-arg constructor if you define one or more constructors for a class. 

If the compiler supplies the no-arg constructor in a derived class, a non-private no-arg constructor must exist in the base class. If it doesn’t, the code will not compile.

## Custom constructor with Inheritance

It is needed to forward parameter from base class to derived class. Hence, the base contructor will be called in the initializer list of the derived constructor.

Use the list initializer to inherit the the base constructor. As in:

```c++
    class Dog : public Animal {
        Dog(std::string name, std::string color, std::string breed) :
            Animal(name, color), breed {breed}{
                std::cout << "Inherited Animal constructor in Dog" <<std::endl;
            }
    }
```

Any other methods to create custom constructor different as state above is not ideal because most often, the *private member in the base will not be accessible* in the derived. 

## Copy Constructors with Inheritance
This helps to create a copy constructor when dymanically allocating memory.
```c++
    Engineer::Engineer(const Engineer& source): 
        Person(source), contract_count {source.contract_count}{
            std::cout << "Engineer copy constructor called..." << std::endl;
        }
```
Otherwise, you can copy as following and compiler will automatically create a copy constructor.

```c++
    Engineer engr("Abisoye Akinloye", 22, "Oyo State, Nigeria", 5);

    Engineer engr2(engr);
```

## Inherit Base Constructor
To tell the compiler to generate a base like constructor in the derived class. All constructor (default, custom, destructor) will be inherited except *copy* constructor which is not inheritable.

**Syntax:**
```c++
    using BaseConstructor::BaseConstructor;
```

**Note:**

* Copy constructors are not inherited. But you won't usually notice this as the complier will insert an automatic copy constructor.
* Inherited constructors are base constructors. They have no knowledge of the derived class. Any member from the derived class will just contain junk or whatever default value it's initialized with.
* Constructors are inherited with whatever access specifier they had in the base class.
* On top of derived constructors, you can add your own that possibly properly initialize derived member variables.
* Inheriting constructors adds a level of confusion to your code. It's not clear which constructor is building your object. It is recommended to avoid them and only use this features if no other option is available.

## Reused symbols in Inheritance

If we have the same member variable or function in both the parent and child class, it is valid in c++. That is, It is possible to use the same name in both parent and child class.

```c++
class Parent{
    public:
        void print_var(){...};
    private:
        int m_var{...};
}

class Child : public Parent {
    public:
        void print_var(){...};
    private:
        int m_var{...};
}

#include <iostream>
#include "child.h"

int main(int argc, char ** argv){
    Child child(33);
    child.print_var(); // calls the in Child
    // Calls the method in Parent
    child.Parent::print_var(); 
}
```