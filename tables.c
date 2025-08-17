#include<stdio.h>

int main(){

    int a,b;

    printf("Enter Start :- ");
    scanf("%d",&a);
    printf("Enter End :- ");
    scanf("%d",&b);


    for(int i = a;i<=b;i++){
        for(int j=1;j<=10;j++){

            printf("%d X %d = %d \n",i,j,i*j);


        }

        printf("\n");
    }

}