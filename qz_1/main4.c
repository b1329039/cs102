#include <stdio.h>

int main() {
   int a=1,b=1;
   for(a;a<=9;){
       printf("%d*%d=%d  ",a,b++,a*b);
       if(b==9){
           a++;
           b=1;
           printf("\n");
       }
   }
   return 0;
}
