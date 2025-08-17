#include<stdio.h>

int main(){

    char a;

    printf("Enter the char to check :- ");
    scanf("%c",&a);

    if(48<a&&a<58){
        printf("Digit");
    }else if(97<a&&a<122){
        printf("Lowercase");
    }else if(65<a&&a<90){
        printf("Uppercase");
    }
}