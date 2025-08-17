#include<stdio.h>

int main(){

    int a,rev=0,sum=0,rem=0,num=0;
    printf("Enter the number :-");
    scanf("%d",&a);

    while(a>0){

        rem = a%10;
        num = num+1;
        sum = sum+rem;
        a = a/10;
    }

    printf("Number of digits = %d \n",num);
    printf("Sum of digits = %d \n",sum);

}