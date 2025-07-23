//Qus 8
#include<stdio.h>
int m1[10][10],m2[10][10],row,col,res[10][10];
void read(){
    int i,j;
    printf("Enter elements of 1st Matrix: ")
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",m1[i][j]);
        }
    }
    printf("Enter elements of 2nd Matrix: ")
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",m1[i][j]);
        }
    }
}

void subtract(){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            res[i][j]=m1[i][j]-m2[i][j];
        }
    }
    printf("Matrix1 - Matrix2 ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}

void multiply(){
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",m1[i][j]);
        }
    }
}