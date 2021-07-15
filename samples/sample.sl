<SLANG>

\\* This is a comment *\\
define initCounter: int = 5;
define lol: string = "Result is: ";

introducing main(var1: int, var2: string) {
    define sum: int = 0;

    while (var1 < 4) {
        sum = sum + 1;
        var1 = var1 - 1;
    }

    return sum;
} -> int

define res: int = (initCounter, lol) -> main;
(res) -> print;

</SLANG>