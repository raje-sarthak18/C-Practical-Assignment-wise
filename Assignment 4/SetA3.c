#include<stdio.h>

int isEven(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){

    int n;
    printf("Enter number :- ");
    scanf("%d",&n);

    printf("%d\n",isEven(n));
return 0;

}

