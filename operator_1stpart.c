#include<stdio.h>
int main()
{
	 printf("%d\n",1==5==5);//printf fun execution from right to left
	 // for assignment operator associativity is from left to right
	 //((1==5)==5)-> 0==5 ->0
	 
	 int i =0;
   printf("%d %d\n",i,i++);// first i++ execute it is postincrement so first value will assign and then increment
   // i++ ->i=0 ->i++-> 1 value will pass
  // output= 1,0
  
  int x=5;
   printf("%d %d %d\n",x++,x++,x++);// output 7 6 5
   // in post increment 1st value will assign after that increment var
    /*     7+1=8     6+1=7     5+1=6
       x++, x++, x++
          |    |   |
op:      7    6     5   
*/
int y=2;
  // printf("%d ",++y++);// error: ++2 we cant use inc/dec with constants
   printf("%d\n",y++);// but here 2++ -> it will assigned y=2 so we get output
   
   
    int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
   /* ternary operator 1st condition will check if condition is true then after question part will executes
   if condition is false after colon part will execute
   k==1 -> 1==1 -> TRUE */
   
   
   



}
