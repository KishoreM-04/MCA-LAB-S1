#include <stdio.h>

int a[10][10];

void read(int n,int m)
{
    int i,j;
    printf("Enter the elements of matrix (%dx%d):\n", n, m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void disp(int a[10][10],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}

void det(int a[10][10],int n,int m)
{
    int i,det=0,det1=0;
    if(n==m)
    {
        if(n==2)
        {
            int detMain = a[0][0]*a[1][1];
            int detCross = a[0][1]*a[1][0];
            printf("Determinant : %d\n", detMain - detCross);
        }
        else if(n==3)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    det = det + a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]);
                else
                    det1 = det1 - a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]);
            }
            printf("Determinant : %d\n", det - det1);
        }
        else
            printf("\nError: Determinant can only be calculated for 2x2 or 3x3 matrix");
    }
    else
        printf("\nError: Not a square matrix");
}

int main()
{
    int choice,n,m;
    while(1)
    {
        printf("\nMenu:\n");
        printf("0. Exit\n");
        printf("1. Determinant of 2x2 Matrix\n");
        printf("2. Determinant of 3x3 Matrix\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                n = m = 2;
                read(n,m);
                printf("Matrix:\n");
                disp(a,n,m);
                det(a,n,m);
                break;
            case 2:
                n = m = 3;
                read(n,m);
                printf("Matrix:\n");
                disp(a,n,m);
                det(a,n,m);
                break;
            case 0:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

