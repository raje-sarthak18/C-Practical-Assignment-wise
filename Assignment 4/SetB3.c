#include<stdio.h>
#include<math.h>

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

double calSeries(float angle,int terms){
    double result=0;
    double rad = angle*(3.14)/180;

    for(int i=1;i<=terms;i++){

        result = result+ pow(rad,i)/factorial(i);

    }

    return result;

}

int main(){

    int x ;
    float a;
    

    printf("Enter angle :- ");
    scanf("%f",&a);
    printf("Enter number of terms :-");
    scanf("%d",&x);

    

    printf("Result = %.2f",calSeries(a,x));

    return 0;
}