# EXP4
## AIM:
To study and implement C++ Bitwise Operators


# THEORY:
Explanation of Bitwise Operators
### Bitwise AND (&):

Operation: Performs a logical AND on each bit of the operands.
Example: f & v
### Bitwise OR (|):

Operation: Performs a logical OR on each bit of the operands.
Example: f | v
### Bitwise XOR (^):

Operation: Performs a logical XOR on each bit of the operands, yielding 1 for differing bits.
Example: f ^ v
### Bitwise NOT (~):

Operation: Inverts all bits of the operand.
Example: ~f, ~v
### Bitwise Left Shift (<<) ):

Operation: Shifts bits of the left operand to the left by the number of positions specified by the right operand.
Example: f << 2
### Bitwise Right Shift (>>) :

Operation: Shifts bits of the left operand to the right by the number of positions specified by the right operand.
Example: f >> 2

## Code:
```
//Saanvi Mohapatra
//23070123110
//EnTC B2
//Exp-4 bitwise operator
#include <iostream>
using namespace std;
int main(){
    
    int f, v;
    cout << "\nEnter the first number for bitwise operation: ";
    cin >> f;
    cout << "Enter the second number for bitwise operation: ";
    cin >> v;
    
    cout << "f & v = " << (f & v) << endl;
    cout << "f | v = " << (f | v) << endl;
    cout << "f ^ v = " << (f ^ v) << endl;
    cout << "~(" << f << ") = " << (~f) << endl;
    cout << "~(" << v << ") = " << (~v) << endl;
    return 0;
}
```
### Output:

```
Enter the first number for bitwise operation: 4
Enter the second number for bitwise operation: 7
f & v = 4
f | v = 7
f ^ v = 3
~(4) = -5
~(7) = -8
```


## Conclusion

- *Bitwise operators* in C++ allow for efficient manipulation and analysis of individual bits within integers.
- They are crucial for *low-level data operations* and *performance optimization*.
- The demonstrated operators—*AND (&), **OR (|), **XOR (^), and **NOT (~)*—enable powerful bitwise computations.
- Mastery of these operators can enhance the *efficiency of algorithms* and *system-level programming*
