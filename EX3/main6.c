#include <stdio.h>

int main()
{
   int i = 1540;
   
   if (i <= 1500){
       printf("70元");
   }
   else{
       
       int n = i - 1500;
       
       if (n%100){
           int t = ((n/100)+1) * 10;
           printf("%d元", t + 70);
       }
       else{
           printf("%d元", (n/100) * 10 + 70);
       }
    
    return 0;   
   }
}
