#include<stdio.h>

int main(){

    int num = 500,sum=0;

    for(int i=1;i<=num;i++){
        sum = 0;
        for(int j=1;j<i;j++){

            if(i%j==0){
            sum = sum +j;
            }
        }



        if(i==sum){
            printf("%d \n",i);
        }


    }
}