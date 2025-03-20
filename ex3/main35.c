#include<stdio.h>

int main(){
    char v='A';
    int* ip=NULL;
    ip=&v;
    printf("%d\n",v);
    printf("%x\n",ip);
    printf("%x\n",&ip);
    printf("%d\n",*ip);
    return 0;
}
