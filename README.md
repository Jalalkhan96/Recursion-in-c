# Recursion in C

Practice programs for recursion in C, written as coursework during my
BS Software Engineering at COMSATS University Abbottabad.

All 12 programs live in the `Recursion In C` folder. Note the file
extension: the files are named `.cpp`, but the code inside is C-style
(`#include <stdio.h>`, `printf`/`scanf`) — so they build with a C++
compiler as well as a C one.

## Program guide

| File | Recursive function | What it does |
| ---- | ------------------ | ------------ |
| `first n numbers using recursion.cpp` | `printNumbers` | Prints the numbers 1 to n, counting up via recursion. |
| `sum of numbers from 1 to 'n' using recursion.cpp` | `calculateSum` | Adds 1 + 2 + … + n recursively. |
| `factorial of a number.cpp` | `factorial` | n! recursively; rejects negative input. |
| `GCD of two numbers.cpp` | `gcd` | Greatest common divisor by the Euclidean algorithm (`gcd(b, a % b)`). |
| `LCM of two numbers.cpp` | `gcd` (reused) | Least common multiple as `(a * b) / gcd(a, b)`. |
| `Print Fibonacci Series using recursion.cpp` | `fibonacci` | Prints the first n Fibonacci terms, each computed recursively. |
| `Reverse a number.cpp` | `reverseNumber` | Reverses the digits of a number (uses a static accumulator). |
| `convert decimal to binary using recursion.cpp` | `decimalToBinary` | Prints the binary form of a decimal number. |
| `sum the digits of a given number.cpp` | `sumOfDigits` | Adds up the digits of a number. |
| `power of any number.cpp` | `power` | base^exponent, including negative exponents. |
| `prime number or not.cpp` | `isPrime` | Tests primality by trying divisors recursively. |
| `hailstone sequence.cpp` | `hailstoneSequence` | Prints the Collatz sequence: halve even numbers, replace odd n with 3n + 1, until 1. |

Every program reads its input from the console and prints the result —
for example, the GCD program asks for two positive integers and prints
`GCD: <result>`.

## How to build and run

With `g++` (the files end in `.cpp`):

```bash
g++ "factorial of a number.cpp" -o factorial
./factorial
```

Then type a positive integer when prompted. Replace the file name and
the output name for any other program, for example:

```bash
g++ "hailstone sequence.cpp" -o hailstone
./hailstone
```

(Quote the file name — it contains spaces.)
