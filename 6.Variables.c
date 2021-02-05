/*
To Do List:
1.Print the original file code content;
2.Change the text to your name;
3.Add two varibles to the code and apply those into the
code block;
4.Update the varible and see the code effect;
5.Add the varible code in the middle of the code block to see
the change;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
 char characterName[] = "Glenn";
 int  characterAge = 27;
printf("There once was a man named %s\n", characterName);
printf("he was %d years old.\n", characterAge);

characterAge = 20;
printf("He really liked the name %s\n",characterName);
printf("but did not like being %d. \n", characterAge);

return 0;
}
