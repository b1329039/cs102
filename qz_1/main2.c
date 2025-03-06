#include <stdio.h>

int main() {
    int i=123456;
    int first,last;
    last=i%10;
    
    for(i;i>=10;i=i/10){
    }
    first=i;
    printf("sum=%d",first+last);
    return 0;
}
