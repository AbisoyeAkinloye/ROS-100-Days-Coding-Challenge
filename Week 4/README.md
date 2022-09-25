# WEEK FOUR

Week three and four are being merged together into week 3 folder. Hence, this folder will be for exercises or any other additional learning on <a href="#py">python</a> or <a href="#cpp">c++</a>.

## Python
<div id="py"></div>

### Functool modules

It is an higher-order function that works on other functions. It extends one function to another without completely writing the function. 

It is of two viz: `partial` and `partialmethod`. `std::bind` function in c++ does the same thing as partial.

**Partial**:  is an original function for particulae argument values.

```py
from functools import partial

def power(a,b):
    return a**b

pow2 = partial(power, b=2)

print(power(2,3))  # ans = 2 x 2 x 2 = 8
print(pow2(4))     # ans = 4^2 = 16
```

**Partialmethod:** It is a method definition of already defined partial function. However, it is not callable but is only a method descriptor.

Click <a href="./py/1. partial.py">here</a> for the code.

## Cpp
<div id="cpp"></div>

### Bind

### Atoll

`atol()`, `atoll()` and `atof()` function in C/C++

Click <a href="./cpp/2. atoll.cpp">here</a> for the cpp code.

1. `atol()`: This function parse the C-string str interpreting its content as an integral number returns a value of type `long int`. The function discards whitespace characters present at the beginning of the string until a non-whitespace character is found.
2. `atoll()` is the same as `atol()` the difference is that the return type value is `long long int`.
3. `atof()`: It parses the C-string str interpreting its content as a `floating point number`, which is returned as a value of type `double`.