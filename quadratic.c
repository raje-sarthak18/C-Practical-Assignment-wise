#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter the coefficient of x2 :- ");
    scanf("%f",&a);
    printf("Enter the coefficient of x :- ");
    scanf("%f",&b);
    printf("Enter the constant :- ");
    scanf("%f",&c);

    d = (b*b)-(4*a*c);

    if(d>0){
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots = %f and %f", r1, r2);
    }else if(d == 0){
        r1 =-b/(2 * a);
        printf("Roots = %f and %f", r1, r1);
    } else{
        float r1 = -b/(2*a);
        float r2 = sqrt(-d)/(2*a);
        printf("Roots = %.2f + %.2fi and %.2f - %.2fi\n",r1,r2,r1,r2);
    }

    return 0;
}
