<SLANG>

\\* This is a comment *\\

\\* Variable declarations and definitions: *\\
\\* note that "bro," or "sis," or the words "def" or "var" can be used for this *\\
bro, initCounter: int = 5;
bro, lol: string = "Result is: ";
bro, someBoolVal: booly = false || true;
bro, anotherBoolVal: booly = someBoolVal and false || (true strictor someBoolVal);

\\* Can we use "bhai," or "behen," too :-)) *\\

\\* TODO: add support for multiple declarations/definitions
  * like: bro, a: int, b: int, c: string = "Hello", d: int = 3;
  * and for initializing many items together:
  * sis, (a: int, b: int, c: int) = 0, d: int = 3; *\\

\\* Function definition *\\
introducing main(var1: int, var2: string) {
    bro, sum: int = 1 + 3 * 6;

    \\* Loop *\\
    \\* @blockname while1 *\\
    while ((var1 < 4) and (var1 > 10 + 4)) {
        sum = sum + 1;
    }

    if (1 == "lol") {
        sum = 0;
    }

    return sum;
} -> int \\* Return type - void by default *\\

\\* Function call expression *\\
bro, res: int = (initCounter + 3 + ((initCounter, lol) -> main), lol) -> main;

\\* Function call statement *\\
(res, lol) -> main;

</SLANG>