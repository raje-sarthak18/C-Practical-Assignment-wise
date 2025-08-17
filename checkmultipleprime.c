#include<stdio.h>

int main(){

    int x,a,flag=0;
    printf("Enter how many nums :- ");
    scanf("%d",&x);
    
    for(int i=1;i<=x;i++){

        printf("Enter number to check :- ");
        scanf("%d",&a);

        for(int i=2;i<a;i++){
            if(a%i==0){
                flag = 1;
                break;
            }

        }
        if(flag==0){
            printf("%d\n",a);
        }
        flag=0;
    }
    
}