#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
// preprocessor will searches for the Macro name CONDITION and substitute the msg preprocessor work
/* output
preprocessor works
*/
