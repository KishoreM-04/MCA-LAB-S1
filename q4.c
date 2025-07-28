//4.	Search for all the occurrences of an element in an integer array (positions) 
#include <stdio.h>
int main(){
	int arr[10],n,i,el,flag=0;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d elements of the Array: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&el);
	printf("Position(s) of %d in Array: ",el);
	for(i=0;i<n;i++){
		if(arr[i]==el){
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0){
		printf("No positions found!");
	}
	return 0;
}
