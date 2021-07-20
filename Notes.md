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
