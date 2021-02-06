/*
Chapter 1 - A Tutorial Introduction:Getting started
1.explain the structure of the c program;
*/

/*1.1 Getting Started */
/*#include <stdio.h>
main()
{
printf("hello, ");
printf("world");
printf("\n");
}
*/


/* 1.2 Variables and Arithmetic Expressions To do list
1.deine the code structure;
2.define the varible;
3.add the value to the varible;
4.inition a value;
5.set the condition senternce: o C=(5/9)( F-32)

*/
/*
#include <stdio.h>
main()
{
int fahr, celsius;
int lower,upper,step;

lower = 0;
upper = 300;
step = 20;

fahr =  lower;
while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9;
printf("%3d    %6d\n", fahr, celsius);
fahr = fahr + step;
};
}
*/

/*Second version of the code:
1.You nee to make sure to define the number type is the floate from the start of the code;
*/

/*
#include <stdio.h>
main()
{
float fahr, celsius;
float lower,upper,step;

lower = 0;
upper = 300;
step = 20;.

fahr =  lower;
while (fahr <= upper) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f %6.1f\n", fahr, celsius);
fahr = fahr + step;
}
}
*/

/*1.3 The for statement
1.define the varible;
2.define the loop condition : initial value, verify condition, second run condition;
3.loop logic sentence;
4.
*/

/*
#include <stdio.h>
main()
{
int fahr;
for (fahr=0; fahr <= 300; fahr = fahr + 20)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/

/*
1.4 Symbolic Constants:
1. do not add the semicolon after the define text;
2. give a total value to the incremt value in the for condition verify loop
*/

/*
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
int fahr;

for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/








