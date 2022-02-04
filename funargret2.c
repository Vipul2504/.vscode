// function without argument and with return value
#include<stdio.h>
int add();
void main(){
    int sum;
    printf("\nGoint to cxalculate sum:");
    sum = add();
    printf("the ans is: ",sum);
    
}
int add(){
    int a,b;
    printf("\nENTER two number:",a,b);
    scanf("%d %d",&a,&b);
    return a+b;
}