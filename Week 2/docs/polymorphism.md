# Polymorphism

In C++, polymorphism always involves the use of a pointer or a reference to an object to call a member function. Polymorphism only operates with classes that share a common base class.

## Pasing base pointers or references to functions

```c++
void draw_shape(Shape* shape_ptr){
    shape_ptr-> draw();
}

void draw_shape(const Shape& shape){
    shape->draw();
}
```

### Static binding with base class pointer and reference

The static binding is due to the class inhertance hierarchy. The compiler will determine the pointer to know which method to call in inheritance hierarchy.

### Why Polymorphism
* To avoid repetitive method on an objects.
```c++
// pointer
void draw_shape(Shape* shape_ptr){
    shape_ptr -> draw();
}

// reference
void draw_shape(const Shape& shape_ptr){
    shape_ptr -> draw();
}
```
* To store collection of objects of the same class in array.

```c++
Shape shape1("shape1");
Oval oval1(2.0,3.5,"oval1");
Circle circle1(3.3, "circle1")

Shape* shape_collection[]{&shape1, &oval1, &circle};

for (Shape* s_ptr : shape_collection){
    s_ptr -> draw();
}
```

## Dynamic binding

When you specify a function as virtual in a base class you indicate to the compiler that you want dynamic binding for function calls in any class that’s derived from this base class. A virtual function is declared in a base class by using the keyword `virtual`.

However, the compiler will not be considering the type pointer but rather the value (address) assigned to it. You make virtual function calls using a variable whose type is a pointer or a reference to a base class object. 

The virtual keyword applied to the function in the base class is sufficient to determine that all definitions of the function in derived classes will also be virtual. You can optionally usethe virtual keyword for your derived class functions as well.

## Size of Polymorphism

The use of dynamic binding is great but it has a setback in terms of the memory it takes. With dynamic binding, object will be much larger. 

**Slicing:** When you try to assign object of an derived class which has additional parameter to base class, `slicing` occurs whereby the derived member variable or method is stripe off.

![slicing](slicing.png)

## Storing Polymorphic objects in collections 