#include <stdio.h>
#include <conio.h>
main()
{  
 int x=1, num;
 
 for(x=1;x<=9;x++) {
  num=x%2;
  if(num==1)
   printf("\n%d", x);
}
 getche();
}

