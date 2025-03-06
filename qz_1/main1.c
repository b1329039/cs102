#include <stdio.h>

int main() {
  int i=3101;
  int iafter=i-1500;
  if (iafter<=0){
    printf("70元\n");
  }
  else{
    int money;
    money=((iafter-1)/100)*10+80;
    printf("%d元\n",money);
  }
return 0;
}
