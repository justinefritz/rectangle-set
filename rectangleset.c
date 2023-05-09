#include <stdio.h>
#include <stdlib.h>

void rectangle();
void asterisk();

int main(){
    int choice;
    printf("1. Area of Rectangle\n");
    printf("2. Triangle(*)\n");
    printf("3. Exit\n");
    printf(" : ");
    scanf("%d", &choice);
    if (choice == 1){
    	system("cls");
        rectangle();
        }
        else if(choice == 2){
        	system("cls");
            asterisk();
            }
            else if (choice == 3){
            	system("cls");
                printf("Thank you for using the program.....");
                    }
                    else{
                    	system("cls");
                        main();
                        }
}

void rectangle(){
    float l, w, area;
    printf("Enter the length : ");
    scanf("%f", &l);
    printf("Enter the width : ");
    scanf("%f", &w);
    system("cls");
    area = (l * w);
    printf("The area of rectangle is %.2f\n", area);
    main();  
}

void asterisk(){
    int ast;
    printf("Enter the height of triangle : ");
    scanf("%d", &ast);
    system("cls");
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            printf("* ");
        }
        printf("\n");
    }
    main();
}