#include <stdio.h>

void main() {
    int stars;
    printf("Enter number of stars (columns): ");
    scanf("%d", &stars);            //s=5
    
    for (int i = 1; i <= stars; i++){
        for (int j = 1; j <= stars; j++){
            if (i == 1 || i == stars || j == 1 || j == stars)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
}