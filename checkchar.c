#include<stdio.h>
#include<ctype.h>
int main(){

    char a;
    printf("Enter the char to check :- ");
    scanf("%c",&a);

    if(isalpha(a)){
        printf("Alphabet");

        if(isupper(a)){
            printf("Case changed = %c",tolower(a));
        }else if(islower(a)){
            printf("Case changed = %c",toupper(a));
        }
        
    }else if(isdigit(a)){
        printf("Digit");
    }else{
        printf("Symbol");
    }

    return 0;
}