#include<stdio.h>

int main(){

    int x,rem=0,rev=0,a=0;

    printf("Enter the number :- ");
    scanf("%d",&x);

    while(x>0){
        rem = x%10;
        rev = rev*10 + rem;
        x = x/10;

    }
    
    while(rev>0){

        a = rev%10;
        rev = rev/10;
        switch(a){
            case 0:
            printf("Zero ");
            break;

            case 1:
            printf("One ");
            break;

            case 2:
            printf("Two ");
            break;

            case 3:
            printf("Three ");
            break;

            case 4:
            printf("Four ");
            break;

            case 5:
            printf("Five ");
            break;

            case 6:
            printf("Six ");
            break;

            case 7:
            printf("Seven ");
            break;

            case 8:
            printf("Eight ");
            break;

            case 9:
            printf("Nine ");
            break;
        }
    }
}