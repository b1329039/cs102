#include <stdio.h>

int long(char* s){
    if(!*s) return 0;
    return 1 + long(s+1);
}

int main(){
    char s[]="aisdf afkjusdg";
    printf("%slen=%d",s,long(s));
    return 0;
}
