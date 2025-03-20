#include<stdio.h>

void change(int* i,int*j){
    printf("(2)準備改\ni=%d\nj=%d\n",*i,*j);
    int t=0;
    t=*i;
    *i=*j;
    *j=t;
    printf("(3)void改完\ni=%d\nj=%d\n",*i,*j);
}

int main(){
    int a=1,b=2;
    printf("(1)改前\ni=%d\nj=%d\n",a,b);
    change(&a,&b);
    printf("(4)改後\ni=%d\nj=%d\n",a,b);
    return 0;
}
