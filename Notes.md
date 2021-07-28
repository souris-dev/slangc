## TODOs
- Add checks for redefinition of variables during declarations. (pretty easy to do).

- We probably don't want to assign variables the value of the expression in assignment statements. Reason: suppose we have a case like this:

```
introducing afunc(var1: int) {
  if (var1 > 3) {
     var1 = 5;
  }
} -> void;
```
Clearly, above the `var1 = 5` statement will only be run if the condition is true. Hence,
this statement should be only executed at run time and the value 5 should not be assigned in the symbol table to var1 just because it appears as an assignment statement in a block.
However, a case of declaration + assignment (or only declaration) statement will be acceptable to be processed at compile time and the value added to the symbol table, for example:

```
introducing afunc(var1: int) {
  if (var1 > 3) {
    bro, var2: int = 10 * 4;
    (var2) -> print;
  }
} -> void;
```

- Regarding the previous point, we still want to subject the assignment statement to semantic checks during compile time. Hence, a good way to go about this would be to keep the semantic checks, but not update the symbol table after expression evaluation and type checking. That is, do not "execute" the statement by modifying the symbol table with the new value - only subject it to symantic checks.

- Modify symbol entries to mark which symbols will have their values computed at runtime. Any assignment or declaration+assignment statement that has another identifier and/or a function call in its RHS will have to be evaluated at runtime.

## Arrays

Q1 - Syntax for declaration?


Q2 - Syntax for array access?


Q3 - Should we default initialize the array to all zeros?


Q4 - How to represent arrays in the symbol table?


Q5a - How to handle array access references in expressions?

Ans 5a. If the arrays are default initialized, their values are stored in the
symbol table. Hence, they can be used for expression evaluation like any ordinary identifier.

Q5b - Do we resolve array accesses at runtime or compile time?


Ans 5b. If we can do it at compile time, then more code can be taken as it is for the Language Server. It is, in my opinion quite possible to do so in compile time - at least for the ones that are possibly known during compile time. The symbol table can help for this.
Addendum: We can have a marker for the array (or each element of the same) which indicates whether it should be resolved at runtime or compile time. Can also make this a language feature in general for expressions btw.
