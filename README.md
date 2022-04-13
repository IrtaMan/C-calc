# C-calc
Standard calculator on C using linked memory

Part 1. Building a postfix notation of an expression (using the stack)
( is pushed onto the stack and the expression is examined from left to right.
- If there is an operand - a number - it is immediately printed.
- If there is (, then it is pushed onto the stack.
- If there is ), then the signs of operations located there are removed from the stack up to the nearest
opening parenthesis, which is also removed from the stack. All these signs in the order they were taken
are printed.
- When the sign of a binary operation is encountered, signs of operations whose order is greater than or equal to
order of this operation (up to the nearest opening parentheses that are stored on the stack) are popped from the stack, and they are printed, after which the operation in question is entered in stack.
- When the sign of a unary operation is encountered, the operation in question is pushed onto the stack.
- When the input of the expression is finished, the same actions are performed that would be performed if encountered with ).
In postfix notation, operands and operations must be separated from each other by at least one "space" sign.
When entering an expression, consider '=', '\n' or EOF as a sign of the end of the expression on the standard onput. When reading an invalid expression, the program should print the message to the stderr stream

Part 2. Interpretation of postfix notation (using the stack).
The expression is scanned from left to right. In postfix notation operands and operations must be separated from each other by at least one space character. (Other expressions are considered incorrect and should be directed to stderr).

If an operand (number) is encountered, its value is pushed onto the stack, and if an operation sign is encountered, then its operands are popped from the stack (two - if the operation is two-place, one - if it is one-place) and the operation is performed on the operand(s). The result is pushed onto the stack. At the end of the calculation there should be only one number remaining on the stack - the result, it needs to be printed.

Task requirements.
1. Stack interactions must be implemented in a separate file (functions push, pop, empty ...), the file should be compiled separately
2. Aforementioned file must have a header file (stack.h) that should be included in all other programs using the stack.
3. The header file must be protected from re-inclusion
4. A makefile must be written to build the program
5. When inputting incorrect input data, the program should display an error message.


The expression contains the operations +, * , /, -(unary), -(binary). Brackets are allowed. Operands are integers (int). If the result does not fit into the int type, issue a message to the error stream, but continue the calculations.
