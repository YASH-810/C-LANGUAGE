# C LANGUAGE
## FUNDAMENTAL OF C LANGUAGE
### [VARIABLE](files/var.c)
Variable is a container which hold or store data
> #### **RULES TO MAKE VARIABLE**
>- While Creating Variable we can use uppercase,lowercase,underscore
>- First character of variable can be  uppercase,lowercase,underscore   
` int A=1 `  
` int a=1`
>- We cannot use space in variable   
`int a b=1 //it is wrong way to declare variable `
>- We cannot use any special character   
` int $=1 //it is wrong way to declare variable `
>- There is no limit for length of variable but mostly prefer 30-32 maximum character set
### [CONSTANT](files/cons.c)
Constant is a variable whose value cannot be change
### [KEYWORDS](files/keyword.md)

In C Language there are 32 keyword  
 [Click me for list all keyword](keyword.md)

### IDENTIFIER
Name given to variable,array,function,etc.

### Data Type

|Type|Formate Speech|Size|
|--------|--------|--------|
|interger| %d|2 bytes|
|long interger|%ld|4 bytes|
|short integer|%hd|2 bytes
|float|%f|4 bytes|
|double float|%lf|8 bytes|
|long float|%Lf|10 bytes|
|char||1 bytes|

#### To calculate signed or unsigned

- signed =><sup> -2<sup>N</sup></sup>&frasl;<sub>2</sub> to <sup>+2<sup>N</sup></sup>&frasl;<sub>2</sub>-1
- unsigned => 0 to 2<sup>N</sup>-1

### Operators
- Arithmetic operator
- Increment and Decrement operator
- Assigned operator
- Relational operator
- Logical operator
- Bitwise operator
- Special opeator
- Conditional operator (Ternary operator)

### Basic structure of C language
<pre><code>Document Section  
Link section
Defination Section
Global Declaration Section
main() function
declaration part 
executable part

userdefine function
function1()
.
.
.
function2()
</code></pre>