<SLANG>

\\* This is a comment *\\

\\* Variable declarations and definitions: *\\
\\* note that "bro," or "sis," or the words "def" or "var" can be used for this *\\
bro, initCounter: int = 5;
bro, lol: string = "Result is: ";

\\* Can we use "bhai," or "behen," too :-)) *\\

\\* TODO: add support for multiple declarations/definitions
  * like: bro, a: int, b: int, c: string = "Hello", d: int = 3;
  * and for initializing many items together:
  * sis, (a: int, b: int, c: int) = 0, d: int = 3; *\\

\\* Function definition *\\
introducing main(var1: int, var2: string) {
    bro, sum: int = 1 + 3 * 6;

    \\* Loop *\\
    while (var1 < 4) {
        sum = sum + 1;
    }

    return sum;
} -> int \\* Return type - void by default *\\

\\ * Function call expression *\\
\\ bro, res: int = (initCounter, lol) -> main;

\\* Function call statement *\\
(res) -> main;

</SLANG>