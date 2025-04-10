#include<stdio.h>

int changing(int n,char F,char T,char A){
    if(n==1){
        printf(" move disk 1 from %c to %c\n", F, T);
        return;
    }
    changing(n-1,F,A,T);
    printf(" move disk %d from %c to %c\n",n,F,T);
    changing(n-1,A,T,F);
}
int main()
{
    int n=3;
    changing(n,'A','B','C');
    return 0;
}
