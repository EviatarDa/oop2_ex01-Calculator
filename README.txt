EX1: "function calculator"

Names:

Eviatar Davidyan  207259755
Shir Yadid  208327957

General explanation of the exercise:
In this exercise we implemented a "function calculator". The calculator calculates the results of the requested operations on strings according to the input from the user.
The user can also create more complex operations and add them to the calculator and then request a calculation of the result of running them on certain strings.
The calculator maintains a list of operations on groups that it is capable of performing. The three actions that already exist when starting the calculator are:
● EVAL
● REVERSE
● SWAP CASE
The list of possible commands:
EVAL – calculates the value of the function that numbers num, with the string x
SUBSTR – adds to the list of functions a function to create a substring as follows:
Cutting a string starting at position 1num with a length of 2num characters. The function joins together with the entered values.
MUL - adds to the list of functions a function that activates the function number num, and concatenates the result to itself n times.
ADD – adds to the list of functions a function that is a chain of the result of the functions numbered N1 N2
COMP – adds to the list of functions a function that is a combination of the functions numbered 1num and 2num. This means that first you run the function numbered 1num and on the result you run the function numbered 2num.
DEL – deletes the function numbered num from the list of functions.
HELP – prints a help screen with the list of possible commands and a brief explanation of them.
EXIT – prints to the screen "Goodbye" and exits the program.

Each action in the list has a serial number that is printed next to it when printing the list of actions, with the help of which the user can refer to it in the commands he types.
Classes we created and the relationship between them:

The departments:
For each class there is a header file and a cpp file:

Function- an abstract class from which all functions are inherited.
below:
Mul- a class that implements a multiplication operation
Add - a class that implements the operation of connecting functions.
Substr - a class that implements the operation of cutting the string.
Reverse - reverses the string.
SwapCase - replaces a capital letter with a buyer letter and vice versa
Eval - implements a simple calculation operation

In addition there is a Calculator class:
This class implements the calculator profanity, adding and subtracting the functions according to the user's input.



Main data structures and their functions
Vectors <vector> to save the functions, even after adding and inserting new functions by the user.
Shard pointer - common pointers to the various functions.
enum- for the names of the functions


Noteworthy algorithms -
Known bugs -
Other notes -