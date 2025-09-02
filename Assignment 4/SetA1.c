#include <stdio.h>
#include <ctype.h>
int main()
{
    char x;
    printf("Enter your element :- ");
    scanf("%c", &x);
    printf("Choose the number for following operations :- \n");
    printf(" 1. To check Alphabet.\n");
    printf(" 2. To check Digit.\n");
    printf(" 3. To check Lowecase.\n");
    printf(" 4. To check Uppercase.\n");
    printf(" 5. To convert to uppercase.\n");
    printf(" 6. To convert to lowercase.\n");

    int c;
    printf("Enter your choice :- ");
    scanf("%d", &c);

    switch (c)
    {

    case 1:
        if (isalpha(x))
            printf("Alphabet");
        else
            printf("Not an Alphabet");
        break;
    case 2:
        if (isdigit(x))
            printf("Digit");
        else
            printf("Not a Digit");
        break;
    case 3:
            if (islower(x))
            {
                printf("Lowercase");
            }
            else
            {
                printf("Not Lowecase");
            }
            break;
    case 4:
            if (isupper(x))
            {
                printf("Uppercase");
            }
            else
            {
                printf("Not Uppercase");
            }
    break;
    case 5:
    if (isalpha(x))
            if (islower(x))
            {
                printf("%c",toupper(x));
            }else{
                printf("%c",x);
            }
    else{
        printf("Not Alphabet");
    }
    break;
    case 6:
    if (isalpha(x))
            if (isupper(x))
            {
                printf("%c",tolower(x));
            }else{
                printf("%c",x);
            }
    else{
        printf("Not Alphabet");
    }
    break;
    default:
    printf("Invalid choice");
}
printf("\n");

return 0;
}