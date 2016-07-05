# Problem 02 – Bugs

A group of bugs is located on a minefield. All bugs receive the same command.

If a bug steps on a mine, it dies. If a bug leaves the minefield, it survives (comes out of the array) and does not return anymore.

The rows are equal to the columns. Moving the bugs is done from top to bottom and left to right. In other words, you start from the top left corner and move each bug you find on every line from left to right. Bugs are moved immediately. If one bug steps on another bug, the first bug dies.

The commands are:

“U” – move ALL bugs UP

“D” – move ALL bugs Down

“L” – move ALL bugs Left

“R” – move ALL bugs Right

The minefield consists of 3 types of characters:

`*` – empty

`@` – this is bug

`#` – mine – kills bugs

## Input

The input data is passed to the first JavaScript function found in your code as an array of strings (representing the minefield).

After that you receive one string with character “L”, “U”, “R” and “D”, which represent the commands.

## Output

Print the count of safe bugs in format “Safe Bugs: {survivedBugsCount}”.

## Constraints

The rows and columns are integers in range [1, 20]

The command string is with length in range [0, 100]

Allowed time/memory: 100ms/16MB.

INPUT	OUTPUT

**#**	Safe Bugs: 1

*#@**	

*@**@	

*****	

*****	

UUR

