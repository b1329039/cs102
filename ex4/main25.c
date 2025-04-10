#include <stdio.h>

int nine(int n,int m){
    if (n>9){
        return;
    }
    if(m==9){
        printf("%d*%d=%2d    \n",m,n,n*m);
        nine(n+1,1);
    }
    else{
        printf("%d*%d=%2d    ",m,n,n*m);
        nine(n,m+1);
    }
}

int main(){
    nine(1,1);
}
