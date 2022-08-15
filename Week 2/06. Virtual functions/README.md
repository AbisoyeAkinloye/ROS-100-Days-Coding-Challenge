# Polymorphism Cont'd

## Virtual Function with default arguments

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

Specifying a destructor with `virtual` specifier will allow the compiler to called the destructor as expected.

## Dynamic Cast
`Dynamic_cast<>()`