## Find all the vowels

Create a function that loops through every character of a given word and 
count the number of vowels.

```c++
void CountVowels(string word);
```

> ### Sample Input/Output
> 
> ```c++
> CountVowels("supercalifragilisticexpialidocious")
> ```
> ```
> A: 3
> E: 2
> I: 7
> O: 2
> U: 2
> ```

## Shout Function


Create a function that takes a `string` as a parameter and returns the same 
string in all caps with one or more `!` appended to the end based on the 
length of the word. 

```c++
string Shout(string word);
```

Use the `toupper(ch)` function to convert each letter to uppercase.
```c++
cout << toupper('h') << endl;    // prints H

string str = "hello";
str[0] = toupper(str[0]);  // converts the first character to 'H'
```

> ### Sample Input/Output
>
> **Input**
> ```c++
> string str = "hello";
> str = Shout(str);
> cout << str << endl;
> ```
> 
> **Output**
> ```
> HELLO!!!!!
> ```
>
> 
> **Input**
> ```c++
> cout << Shout("Be vewy vewy quiet") endl;
> ```
> **Output**
> ```
> BE VEWY VEWY QUIET!
> ```

## Remove punctuation

Create a function that returns a string with all punctuation removed.

You may find it helpful to use the function `ispunct(char ch)`.  This 
function returns `true` if `ch` is a punctuation character and `false` if 
`ch` is not a punctuation character.

```c++
string RemovePunctuation(string word);
```

> ### HINT
> You may find it convenient to start with an empty string and only append 
> letters that are *NOT* punctuation.

> ### Sample Input/Output
>
> **Input**
> ```c++
> string str = "Well, hello world!";
> str = RemovePunctuation(str);
> cout << str << endl;
> ```
>
> **Output**
> ```
> Well hello world
> ```
>
>
> **Input**
> ```c++<
> cout << RemovePunctuation("YEAH!!! WHAT???! OK!!!!") << endl;
> ```
> **Output**
> ```
> YEAH WHAT OK
> ```
