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

## Dynamic binding with Virtual functions