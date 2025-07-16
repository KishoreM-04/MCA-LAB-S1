#include<stdio.h>
int a[5],pos=-1;

void insert(int el){
	if(pos==5){
		printf("Error: Array Full");
	}
	else{
		a[++pos]=el;
	}
}

void search(int el){
	int i,flag=0;
	if(pos==-1){
		printf("Error: no elements in array");
	}
	else{
		for(i=0;i<=pos;i++){
			if(a[i]==el){
				flag=1;
			}
		}
		if(flag==1){
			printf("%d found in Array",el);
		}
		else{
			printf("Error: %d not found",el);
		}
	}
}

void del(){
	if(pos==-1){
		printf("Error: no elements in array");
	}
	else{
		printf("%d deleted from array",a[pos--]);
	}
}

void sort(){
	int i,j,e;
	if(pos==-1){
		printf("Error: no elements in array");
	}
	else{
		for(i=0;i<pos;i++){
			for(j=i+1;j<=pos;j++){
			if(a[j]<a[i]){
				e=a[i];
				a[i]=a[j];
				a[j]=e;
			}
		}
		}
		printf("Array elements after sorting:");
		for(i=0;i<=pos;i++){
			printf("%d\t",a[i]);
		}
	}
}
void display(){
	int i;
	if(pos==-1){
		printf("Error: no elements in array");
	}
	else{
		for(i=0;i<=pos;i++){
			printf("%d\t",a[i]);
		}
	}
}
int main(){
	int ch=1,el;
	while(ch){
		printf("\n0.Exit\n1.Insert\n2.Search\n3.Delete\n4.Sort\n5.Display\nSelect one operation: ");
		scanf("%d",&ch);
		switch(ch){
			case 0: return;break;
			case 1:printf("Enter element to insert: ");
			scanf("%d",&el);
			insert(el);
			break;
			case 2:printf("Enter element to search: ");
			scanf("%d",&el);
			search(el);
			break;
			case 3:del();
			break;
			case 4:sort();
			break;
			case 5: display();
			break;
			default: printf("Error:Invalid Choice");	
			break;
		}
	}
	return 0;
}
