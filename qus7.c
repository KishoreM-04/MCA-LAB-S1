//qus 7
#include<stdio.h>
int arr[10];
void display(int j){
    printf("%d ",arr[j]);
    if(j==0)
    return ;
    else{
        display(j-1);
    }
}
int main(){
    int i,j=9;
    printf("Enter 10 elements in the array: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    display(j);
}