#include<stdio.h>

int main(){

    float b_sal,tax;

    printf("Enter basic salary :-");
    scanf("%f",&b_sal);

    if(b_sal<150000){
        tax = 0;
    }else if(150000<b_sal<300000){
        tax = 0.20*b_sal;
    }else if(300000<b_sal){
        tax = 0.30*b_sal;
    }

    printf("Income Tax = %f",tax);



}