
//8.	Write a program to Perform the addition of two matrix and Subtraction of one matrix from another
#include<stdio.h>
int m1[10][10],m2[10][10],row,col;
//Reading the matrices
void read(){
    int i,j;
    printf("Enter elements of 1st Matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter elements of 2nd Matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m2[i][j]);
        }
    }
}
//Subtracting matrices
void subtract(int mat1[10][10],int mat2[10][10]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",(mat1[i][j]-mat2[i][j]));
        }
        printf("\n");
    }
}
//Adding Matrices
void addition(){
	int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",(m1[i][j]+m2[i][j]));
        }
        printf("\n");
    }
}

int main(){
	int ch=1,ch2;
	printf("Enter no. rows and cols in matrix: ");
	scanf("%d%d",&row,&col);
	read();
	while(ch){
		printf("\n0.Exit\n1.Addition\n2.Subtraction\nSelect one operation: ");
		scanf("%d",&ch);
		switch(ch){
			case 0: return; break;
			case 1: addition(); break;
			case 2: printf("\n0.Cancel\n1.Matrix-1 - Matrix-2\n2.Matrix-2 - Matrix-1\nSelect one operation: ");
					scanf("%d",&ch2);
					switch(ch2){
						case 0: break;
						case 1: subtract(m1,m2); break;
						case 2: subtract(m2,m1); break;
						default: printf("Error: Invalid Input!"); break;
					}
					break;
			default: printf("Error: Invalid Input!"); break;
					
		}
	}
	return 0;
}


