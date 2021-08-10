#include<stdio.h>
int main()
{
    int i=5;
   i=i++ - --i + ++i;
   printf("%d\n",i);//output=6
   /* i++ - --i     +       ++i
       5      6-1=5      5+1=6
       5 - 5 + 6
           6
           */
           
   int a=7;
   printf("%d\n",a+=a+=a-=6);//assignment operator R to L output
   /*               a=a+2         a=a+1     a=a-6
                     2+2         1+1          7-6=1
                      4         2                 a=1
                      */

 int x=10,y=5,p,q;
   p=x>9; // 10>9 -> True
   q=p||(x=5,y=10);// in OR opertor if left part is true no need to check right part ans is 1
   printf("%d %d %d\n",q,x,y); // q=1 x=10 y=5
   
    int c=2,d=1;
   d+=c<<=2;     //            
   printf("%d %d\n",c,d); // output c=8 d=9
   /*      d=d+8        c=c<<2(<< will perform multiplication 
              1+8        c<<1=4
               d= 9     c<<2=8
                          c=8       */
                          
                          
     int e=2,f=4,g;
    g=f++*e++|f--;//  4*2|4 ->8|4 ->13
    printf("%d\n",g);//output=13 
}
                      
                      
                      
                      
                      
                      

