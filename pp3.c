#include<stdio.h>

void main(){
    int i=1, j, r;              //i=1
    printf("Enter number of roles");
    scanf("%d", &r);  //r=5
    do{
        
        for(j=1; j<=r; j++){        //*****
            printf("*");}
            
        }
        
    while(i>5); 
    printf("\n");
    for(j=1; j<=r; j++){
        if(j==r){
            for(j=1; j<=r; j++){        
            printf("\n");}
        }
    }         
}