#include <stdio.h>
int main(void) 
{
 int a,b,c,d,i,a1,b1,c1,d1;
 for ( i = 0; i<=9999 ;i++)
 {
  a = i/1000;
  b = (i%1000)/100;
  c = (i%100)/10;
  d = i%10;
  a1 = a;
  b1 = b;
  c1 = c;
  d1 = d;
 if((a = pow(a,4))+(b =pow(b,4))+(c = pow(c,4))+(d = pow(d,4))==i)
    {
    printf("%d [%d^4 + %d^4 + %d^4 + %d^4] = %d + %d + %d + %d= %d \n",i,a1,b1,c1,d1,a,b,c,d,i);
    }
}
 return 0;
}