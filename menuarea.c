#include<stdio.h>

int main(){

    int a ;
    printf("1. Area of Square");
    printf("2. Area of Rectangle");
    printf("3. Area of Triangle");
    printf("Enter your choice :- ");
    scanf("%d",&a);


    switch(a){
        case 1:
        float side;
        printf("Enter side = ");
        scanf("%f",&side);
        float area = side*side;
        printf("Area of square = %f",area);
        break;


        case 2:
        float l,br;
        printf("Enter length :- ");
        scanf("%f",&l);
        printf("Enter breadth :- ");
        scanf("%f",&br);

        float area_r = l*br;
        printf("Area of rectangle = %f",area_r);
        break;


        case 3:
        float base,h;
        printf("Enter base :- ");
        scanf("%f",&base);
        printf("Enter height :- ");
        scanf("%f",&h);

        float area_t = 0.5*base*h;
        printf("Area of triangle = %f",area);
        break;

        default:
        printf("Wrong choice");


    }

}