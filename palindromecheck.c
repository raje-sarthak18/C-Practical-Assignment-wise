#include<stdio.h>

int main(){

    int a,temp=0,rev=0,rem=0;
    printf("Enter the number :- ");
    scanf("%d",&a);
    temp = a;

    while(a>0){

        rem = a%10;
        rev = rev*10+rem;
        a = a/10;

    }
    if(temp==rev){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }



}
