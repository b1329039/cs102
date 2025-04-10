#include<stdio.h>

int plus(int n){
    if(n==1) return 1;
    return n+plus(n-1);
}

int main(){
    int i=6;
    int m=plus(i);
    printf("%d",m);
}
