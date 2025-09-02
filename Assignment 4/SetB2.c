#include <stdio.h>
#include <ctype.h>

int check(int x)
{
    if (isalpha(x))
    {

        return 1;
    }
    else if (isdigit(x))
    {

        return 2;
    }
    else
    {

        return 3;
    }
}
int main()
{
    int ch;

    int alphacnt = 0, digitcnt = 0, spscnt = 0;
    printf("Enter characters (press Ctrl+D / Ctrl+Z for EOF):\n");
    while ((ch = getchar()) != EOF)
    {

        int result = check(ch);

        if(ch =='\n'){
            continue;
        }
        if (result == 1){
            alphacnt++;
        }else if (result == 2){
            digitcnt++;
        }else{
            if (ch != ' ' && ch != '\n' && ch != '\t'){
                spscnt++;
            }
        }
    }
    printf("\nTotal Alphabets: %d\n", alphacnt);
    printf("Total Digits: %d\n", digitcnt);
    printf("Total Special Symbols: %d\n", spscnt);
}