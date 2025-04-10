#include <stdio.h>

int nine(int n,int m){
    if (n>9){
        return 0;
    }
    while(m<=9){
        printf("%2d*%2d=%2d    ",m,n,n*m);
        m++;
    }
    printf("\n");
    return nine(n+1,1);
}

int main(){
    nine(1,1);
}
