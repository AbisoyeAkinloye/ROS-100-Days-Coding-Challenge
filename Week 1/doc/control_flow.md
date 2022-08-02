# Control Flow
## Branching

### If and Else Statement

The `if` statement is used when the condition is `true` while the else is used when the condition is `false`. Note: `else if` statement will help to test for several different conditions.

```c++
if (true){
    // statement
} else {
    // statement
}
```

**Logical Operation for condition:**
1. && - And
2. || - Or
3. != - Not equal
4. == - Equal to

### Switch 

It is similiar to multiple `if` statement. It checks the value of the condition and, based on that value, executes the code inside one of a given set of case labels. If none of the case statements is equal to the condition, the code inside the default label is executed.

```c++
switch(condition):
    case value1:
        // statement
        break;
    default:
        break;
```
**Note:**

* The `break` statement after each case is very important. It stops processing the switch block when a successful case has been found. If the `break` statement is not there, all the cases following the current case will be executed.
* The condition can oly be integral types and enums. It cannot be <strike>string</strike>.

### Ternary Operator

It is the short form of `if and else` statement. 

```c++
result = (condition) ? option1 : option2;
```
Option1 when the condition is true and option2 when the condition is false. 

## Looping

Loop is used to do repetitive (iteration) tasks. 

- Initialization
- Condition
- Increment or decrement
- Loop body

### For Loop

```c++
for (init_statement; condition; iteration_expression) { 
    // execute some code   
}
```
`size_t`: It is often used as the init_statement. It is not a data type, just a type alias for some `unsigned int` repreentation.

### While Loop

The while statement executes code until the condition becomes false.

```c++
initiation;

while (condition){
    // loop body
    increment;
}
```

### Do-while Loop

The `do...while` loop is a variant of the while loop with one important difference: the body of `do...while` loop is executed once before the condition is checked.

```c++
do {
    // statement
} while (condtion)
```

## Break, Continue, and Goto statement

The `break` statement is used to terminate. Note that generally the break statement is usually used with decision-making statements.

The `continue` statement is used to skip the current iteration of the loop.

The `goto` statement is used for altering the normal sequence of program execution by transferring control to some other part of the program. **Not advisable to use `goto` statement**.

```c++
int main()
{
    for(condition)
    {
        // statement

        if(condition)
        {
           // statement
            goto jump; // jump can be any other valid variable name
        } 
        // statement
    }
    
jump:
    // statement

    return 0;
}
```

## Nested Loop

A loop within a loop is called nested loop. It can be used for multidimensional array, design a pattern, and so on.
