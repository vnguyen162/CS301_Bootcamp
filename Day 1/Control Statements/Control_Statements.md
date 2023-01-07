# Control Statements

## If statements

The general format of an if statement is as follows
```c++
if (statement) {
    statements;
}

// if you only have a single statement, 
// then you can omit the {}
if (statement)
    single_statement;
```

## If else statements

```c++
if (condition) {
    statements;
}
else {
    more_statements;
}
```

```c++
if (condition1) {
    statements;          // Runs if condition1 is true
}
else if (condition2) {
    more_statements;     // Runs if condition2 is true
}
else if (condition3) {
    more_statements;     // Runs if condition3 is true
}
else if (condition4) {
    more_statements;     // Runs if condition4 is true
}
else {
    more_statements;     // Run if none of the conditions are true
}
```

> ### Note
> 
> Some beginner programmers feel like they HAVE to have an else statement 
> paired with an if statement.  This will lead to code such as:
> 
> ```c++
> // DON'T DO THIS!!! If you don't have code in the else, then just omit it.
> if (condition) {
>    statements;    // if condition is true do statements.
> }
> else {
>    // otherwise, don't do anything
> }
> ```
> 
> You should avoid code like this.  Instead, just use a single if statements 
> without an else:
> 
> ```c++
> if (condition) {
>    statements;    // if condition is true do statements.
> }
> ```
> 
## Switch statements

Switch statements are designed to allow the programmer to switch to specific 
code based on a case.  In the example below, the user picks an option and 
the code run is based on the case.  For example, the value of `option` is 
'A', then the function `DoOptionA()` is run.  After the function is run, 
then we break out of the switch statement.  If the value of `option` does 
not match any of the cases, then the `default` case is used.

```c++
char option;
cout << "Select option: ";
cin >> option

switch(option) {
  case 'A':
    DoOptionA();
    break;
  case 'B':
    DoOptionB();
    break;
  case 'C';
    DoOptionC();
    break;
  default:
    DoDefaultOption();
    break;
}
```

### IMPORTANT!

Switch statements can only be used with int based types or classes that 
have an integer conversion constructor defined.
 
Ok for switch statements:
* int
* char
* short
* enumeration

NOT ok for switch statements:
* string
* float
* double

> ### Author Opinion
> 
> While switch statements are found in many different langagues, programmers 
> seem to be split into two camps on their usage:
> 
> * Programmers that love switch statements and use them often.
> 
> * Programmers that avoid switch statements altogether and opt for if else 
>   statements instead
> 
> My preference is to use if else statements rather than switch statements.
> I find if else statements to provide more flexibility.  If else allows for 
> more complete conditions and you are not locked into integer types.