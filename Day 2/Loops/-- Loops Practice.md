## Are we there yet?

Suppose we want to write a program which uses a loop to ask the user "Are we 
there yet???" and takes a string answer from the user.  The program should 
keep repeating the question until the user answers "Y" or "y".


## TrianglePrint
Create a function that creates a right triangle.
The function should take an integer argument for height.

For example, if
you call `TrianglePrint(4)`, it would produce the following:

```c++
Printing a triangle of height 4
*
***
*****
*******
```

## PyramidPrint
Create a function that creates a pyramid.
The function should take an integer argument for height.  

For example, if 
you call `PyramidPrint(4)`, it would produce the following:

```c++
Printing a pyramid of height 4
   *
  ***
 *****
*******
```

> **Approaching the problem**
> 
> You will need multiple loops.
> 
> You will also need to figure out the relationship of height, the row,
> and how many `*` should be printed.
>   * If the height is 4, how many spaces are printed in the 1st row?
>   * If the height is 4, how many `*`'s are printed in the 1st row?
>   * If the height is 4, how many spaces are printed in the 2nd row?
>   * If the height is 4, how many `*`'s are printed in the 2nd row?


