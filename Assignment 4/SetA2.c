#include<stdio.h>
#include<math.h>
int main(){

    int x1,x2,y1,y2;

    printf("Enter coordinates of point1 (x1,y1) :- ");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates of point2 (x2,y2) :- ");
    scanf("%d %d",&x2,&y2);

    int ch;
    

    do{
        printf("1. Distance\n");
    printf("2. Slope\n");
    printf("3. Whether they lie in same plane\n");
    printf("4. EXIT\n");
    printf("Enter your choice :- ");
    scanf("%d",&ch);
        switch (ch){

            case 1:
            printf("Distance = %f",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
            break;

            case 2:
            printf("Slope = %d",(y2-y1)/(x2-x1));
            break;

            case 3:
            if((x1>0 && x2>0 && y1>0 && y2>0)||(x1<0 && x2<0 && y1<0 && y2<0)||(x1<0 && x2<0 && y1>0 && y2>0)||(x1>0 && x2>0 && y1<0 && y2<0)){
                printf("Lie in same plane");
            }else{
                printf("Liein different plane");
            }
            break;
            default:
            printf("Wrong Choice !!!");

        


        }
    }while(ch!=4);
    return 0;






}

// Update code Logical Errors.....