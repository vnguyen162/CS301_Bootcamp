# Scope

Scope is a concept that is applied to for variables, functions, classes and 
more in C++.

## Local variables
When you declare a variable, it is available after its declaration until the 
end of the code block.

```c++
int main() {
    // i is not available yet
    .
    .
    .
    int i = 5;   // i is declared and is now available...
    .
    .
    .
    cout << i << endl;
    .
    .
    .
    // i is available until the end of the code block
}
```

In the above, we would say that the scope of variable **`i` is local to the 
main** function. Once we are outside of main, we would say the variable `i` 
**falls out of scope**.

Suppose we declare the same variable within a nested code block.

```c++
// Example 1
int main() {
    int i = 0;              // This i is local to the main

    if (i == 0) {
        int i = 42;         // This i is local to the if statement block
        .
        .
        .
        cout << i << endl;  // This prints the i local to the if code block
        .
        .
        .
        // Once we exit this code block, the local i variable falls out of scope
    }
    
    cout << i << endl;  // This prints the i that is local to main
}
```

In the above example, there is an `i` local to main and another `i` that is 
local to the if code block.  Within the if code block, any reference to `i` 
refers to the `i` local to the if code block.  Outside the if statement, any 
reference to `i` refers to the `i` local to main.

This idea of scope also applies to functions.  In the example below, there
is one `i` local to `foo` and another `i` local to `main`.

```c++
// Example 2
void foo(int i) // declares i local to foo
{
    i = 3;
}

int main() {
    int i = 0;  // declares i local to main

    foo(i);

    cout << i << endl;  // prints 0
}
```

## Global Variables
Suppose `i` is declared outside any code block.

```c++
// Example 3
int i = 21;         // i is a global variable

void foo() {
    cout << i << endl;  // prints 21
}

int main() {
    
    cout << i << endl;  // prints 21
    
    foo();
}
```

The first declaration `int i = 21;` is somewhat different from the other 
declarations we have seen so far since `i` was declared outside 
any code block.  In this case, we would say that `i` was declared globally.  
This is often used for constants where the value needs to be accessed 
anywhere within the program.

Here is another example where `i` is declared in three different scopes.  
Refer the comments to see how C++ switches between the different versions of 
`i`.

```c++
// Example 4
int i = 21;                 // declare global variable i
int main() {
    cout << i << endl;      // prints 21
    int i = 0;              // declare i local to main
    
    if (i == 0) {
        int i = 42;         // declare i local to if statement
        cout << i << endl;  // prints 42
    }
    // i variable local to the if statement is now out of scope
    
    cout << i << endl;      // prints 0
}
```

