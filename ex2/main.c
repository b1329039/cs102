#include<stdio.h>
#include<string.h>

typedef struct employee{
    int id;
    int age;
    char name[100];
    int salary;
} emp;

void emp_info(emp yeeee){

}

void emp_average(emp yeeee[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+yeeee[i].age;
    }
    float aver = sum/n;
    printf("%f\n",aver);
    return;
}

void emp_write(emp yeeee[], int n){
    FILE* fp = fopen("yeeeeeeeeee.bin","wb+");
    for (int i=0;i<n;i++){
        fwrite(&yeeee[i],sizeof(emp),1,fp);
    }
    fclose(fp);
    return;
}

void emp_read(emp yeeee[], int n){
    FILE* fp = fopen("yeeeeeeeeee.bin","rb");
    int i=0;
    while (fread(&yeeee[i],sizeof(emp),1,fp)){
            printf("[%d]%d %d %s %d\n",i,yeeee[i].id,yeeee[i].age,yeeee[i].name,yeeee[i].salary);
            i++;
    }
    fclose(fp);
    return;
}

int main(){
    emp yeeee[3];
    yeeee[0].id = 1;
    yeeee[0].age = 123;
    strcpy(yeeee[0].name,"sohai");
    yeeee[0].salary = 00000;

    yeeee[1].id = 2;
    yeeee[1].age = 1234;
    strcpy(yeeee[1].name,"Sohai");
    yeeee[1].salary = 11111;

    yeeee[2].id = 3;
    yeeee[2].age = 123456;
    strcpy(yeeee[2].name,"SOhai");
    yeeee[2].salary = 22222;
    emp_write(yeeee,3);
    emp_read(yeeee,3);
    emp_average(yeeee,3);
}
