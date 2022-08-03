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

## Input and Output parameter
The idea is to use output parameter to get output from a function. However, Output parameters should be paseed in such a way that you can modify the arguments from inside the function. Options are passing by reference or by pointer. *References are preferred*.

The input parameter shouldn't be modifiable from inside a function. You can use the `const` keyword. The essence is to substitute the `return` statement.

```c++
    void func(type input1, type input2, type& output){
        output = input1 || input2
    }
```

## Function Overloading 

Having multiple copies of the same function name in different return type. You can over function parameters by:
* Changing the order of parameter
* Changing the number of parameter
* Type of the parameter

When we have multiple functions with the same name but with different parameter types. This is called **function overloading**.

## Lambda function

A mechanism to set up anonymous functions (without name). Once it is set up, we can either give them names and call them, or we can even get them to do things directly.

*Syntax:*
```c++
[capture list](parameters) -> return type {
    // function body
}

// name assigned to lambda function
auto func = [](){
    // statement
}

// call lambda function directly after definition
[](){
    // function body
}();
```