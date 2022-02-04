#include<stdio.h>
int main(){
    int sum=0;
    char name[20];
    int i=0;
    printf("enter a String: ");
    scanf("%s",name);
    while (name[i]!='\0')
    {
        printf("\nthe ascii value of %c is %d",name[i],name[i]);
        sum=sum+name[i];
        i++;
    }
    printf("\n the sum of ascii value is %d",sum);
    return 0;
    
}