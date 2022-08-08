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

## Public Access Specifier

With Public inheritance, derived classes can access and use public members of the base class, but the derived class can't directly access private members.

The same also applies to friends of the derived class. They have access to private members of derived, but don't have access to the base class.

## Private Access Specifier

They are inaccessible from the derived class and outside the class.

## Protected Access Specifier

Often you want the members of a base class to be accessible from within the derived class but nonetheless *protected* from outside interference.

