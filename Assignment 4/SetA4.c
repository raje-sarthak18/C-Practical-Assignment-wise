#include<stdio.h>


void NextChars(char a,int n){
    int s = a;
    if((a>=65 && a<=90)||(a>=98 && a<=122)){
        for(int i=1;i<=n;i++){
            printf("%c\n",s+i);
        }

    }
}


int main(){

    int x;
    char c;

    printf("Enter Character :- ");
    scanf("%c",&c);

    printf("Enter number :-");
    scanf("%d",&x);

    NextChars(c,x);

}

