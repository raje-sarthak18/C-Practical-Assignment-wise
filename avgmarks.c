#include<stdio.h>

int main(){

    float s1,s2,s3;

    printf("Enter sub1 marks :- ");
    scanf("%f",&s1);
    printf("Enter sub2 marks :- ");
    scanf("%f",&s2);
    printf("Enter sub3 marks :- ");
    scanf("%f",&s3);


    float avg = (s1+s2+s3)/3;
    printf("Average = %f\n",avg);

    float per = ((s1+s2+s3)/300)*100;
    printf("Percentage =%f\n",per);

    if(per<35){
        printf("Fail");
    }else if(per>75&&per<100){
        printf("A\n");
    }else if(per<75&&per>60){
        printf("B\n");
    }else if(per<60&&per>35){
        printf("C\n");
    }
    
}