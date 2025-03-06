#include<stdio.h>

int main(){
    FILE* fp;
    int a[3]={0,1,2};
    char b[4]="ABC";
    float c[3]={1.1,1.2,1.3};
    int reda[3];
    char redb[4];
    float redc[3];
    
    fopen("a.bin","wb+");
    fwrite(a,sizeof(a),1,fp);
    fwrite(b,sizeof(b),1,fp);
    fwrite(c,sizeof(c),1,fp);
    fseek(fp,0,SEEK_SET);
    fread(reda,sizeof(reda),1,fp);
    fread(redb,sizeof(redb),1,fp);
    fread(redc,sizeof(redc),1,fp);
    
    for(int i=0;i<3;i++){
        printf("%d",reda[i]);
    }
    for(int n=0;n<4;n++){
        printf("%s",redb[n]);
    }
    for(int m=0;m<3;m++){
        printf("%f",redc[m]);
    }
    
    fclose(fp);
    return 0;
}

