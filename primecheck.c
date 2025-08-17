#include<stdio.h>

int main(){

    int x,flag=0;

    printf("Enter number to check :- ");
    scanf("%d",&x);

    for(int i=2;i<x;i++){
        if(x%i == 0){
            flag=1;
        }
    }
    if(flag){
        printf("Not Prime");
    }else{
        printf("Prime");
    }
}