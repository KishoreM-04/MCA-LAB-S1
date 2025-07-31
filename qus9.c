//9.	Write a program to perform multiplication of two matrix
#include<stdio.h>
int m1[10][10],m2[10][10],res[10][10]={0},row1,col1,row2,col2;

//Multiplying Matrices
void multiply(){
	int i,j,k;
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
        	for(k=0;k<col1;k++){
        		res[i][j] += m1[i][k] * m2[k][j];
			}
        }
        printf("\n");
    }
    printf("Matrix-1 x Matrix-2\n");
    for(i=0;i<row1;i++){
    	for(j=0;j<col2;j++){
    		printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}

//Reading the matrices
void read(){
    int i,j;
    printf("Enter no. rows and cols in matrix-1: ");
	scanf("%d%d",&row1,&col1);
	printf("Enter elements of Matrix-1: ");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&m1[i][j]);
        }
    }
	printf("Enter no. rows and cols in matrix-2: ");
	scanf("%d%d",&row2,&col2);
    printf("Enter elements of Matrix-2: ");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    	if(col1==row2){
		multiply();
	}
	else{
		printf("Error: Cannot multiply matrices");
	}
}

int main(){
	read();
	return 0;
}


