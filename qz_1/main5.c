#include <stdio.h>

int main() {
   int a=7;
   int count=0;
   while(a){
       if(a&1){
           count++;
       }
       a>>=1;
   }
   printf("%d\n",count);
   return 0;
   
}
