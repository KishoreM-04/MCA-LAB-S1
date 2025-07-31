
#include<stdio.h>
int m1[10][10],t[10][10],row,col;
//Transpose
void transpose(){
	int i,j;
	
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        	t[j][i]=m1[i][j];
        }
    }
}

//Reading the matrices
void read(){
    int i,j;
    printf("Enter no. rows and cols in matrix: ");
	scanf("%d%d",&row,&col);
	printf("Enter elements of Matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m1[i][j]);
        }
    }
}

//Displaying Matrix
void display(){
	int i,j;
	printf("Original Matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        	printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
     for(i=0;i<col;i++){
        for(j=0;j<row;j++){
        	printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
	read();
	transpose();
	display();
	return 0;
}


