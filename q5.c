//Qus 5
#include<stdio.h>
int arr[10];
void read(){
    int i;
    printf("Enter elements of the array: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
}
void display(){
    int i;
    printf("Array elements are: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}

void sort(){
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array Sorted");
}

int main(){
    int ch=1;
    while(ch){
        printf("\n0. Exit\n1. Read\n2. Display\n3. Sort\nSelect one operation: ");
        scanf("%d",&ch);
        switch(ch){
            case 0: return 0; break;
            case 1: read(); break;
            case 2: display(); break;
            case 3: sort(); break;
            default: printf("Error: Invalid Input");break;
        }
    }
    return 0;
}