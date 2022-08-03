# Functions

A function is a reusable piece of code that can take a number of optional inputs and produce some desired output.

**Syntax:**
```c++
return_type function_name(param1, param2,...){
    // operation

    return return_type
}
```

A function is expected to be unique and each function has signature. Function signature is the function name and function parameters.

**Calling a function**
```c++
    result_var = function_name(arg1, arg2);
```

## Parameter Vs Argument

When you are defining a fuction you pass in `parameters`, but you pass in `argument` when you are calling the function.

## Function Declaration and Definition

You declare a function before the `main()` function so as to define the function after the main function.

The declaration is also called *prototype*. The prototype needs to come before the function call, otherwise the compilation will fail.

## Spliting Function

You can split function into `header` file. The function declaration will live in the header file while the function definition can live either in another `.cpp` or `.h` where the declaration is.

## Passing Argument

### Pass by Value/ Copy
When we pass an argument to a function, a copy of that argument is made and passed to the function if the function parameter type is not a pointer or reference. This means the value of the original argument does not change.

### Pass by Pointer
When a function parameter type is a pointer type, then the actual argument is passed to the function. The function can modify the value of the argument.

### Pass by Reference
When a function parameter type is a reference type, then the actual argument is passed to the function. The function can modify the value of the argument.
What is preferred is passing an argument by const reference, also referred to as a *reference to const*.