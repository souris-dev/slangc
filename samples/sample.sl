startfile

\\* This is a comment *\\
var initCounter: int = 5;
var lol: string = "Result is: ";

introducing main(var1: int, var2: string) {
    var sum: int = 0;

    while (var1 < 4) {
        sum = sum + 1;
        var1 = var1 - 1;
    }

    return sum;
} -> int

var res: int = (initCounter, lol) -> main;
(res) -> print;

endfile