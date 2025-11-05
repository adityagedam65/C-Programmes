#include<stdio.h>

void main(){
    int i=2, j, r;              //i=1
    printf("Enter number of roles");
    scanf("%d", &r);                //r=5
    if(i==1 || i==r ){                 //true 
        for(i=1; i<=r; i++){            
            for(j=1;j==r;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    else{
        for(; i<=r; i++){
                printf("*");
            }
        printf("\n");
    }  
            
}