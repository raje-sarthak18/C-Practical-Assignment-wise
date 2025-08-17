#include<stdio.h>
#include<math.h>

int factorial(int num){

    int fact = 1;
    if(num ==0 || num ==1 ){
        return fact;

    }
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}


int main(){

    int x,n;
    float sum=0;

    printf("Enter x :-");
    scanf("%d",&x);

    printf("Enter n :-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        sum = sum + ((float)factorial(i)/pow(x,i));
    }
    printf("Sum of series = %f",sum);


}