#include<stdio.h>
int top=-1;
int stack[10];

void push(int el){
	if(top==9){
		printf("Error: Stack Overflow");
	}
	else{
		stack[++top]=el;
		printf("%d pushed into stack",el);
	}
}

int pop(){
	if(top==-1){
		printf("Error: Stack Underflow");
	}
	else{
		return stack[top--];
	}
	return;
}

void peek(){
	if(top==-1){
			printf("Error: Stack Empty");
	}
	else{
		printf("Element at top: %d",stack[top]);
	}
}

void display(){
	int i;
	if(top==-1){
		printf("Error: Stack Empty");
	}
	else{
		for(i=0;i<=top;i++){
			printf("%d\t",stack[i]);
		}
	}
}

int main(){
	int ch=1,el;
	while(ch){
		printf("\n0.Exit\n1.PUSH\n2.POP\n3.PEEK\n4.Display\nSelect one operation: ");
		scanf("%d",&ch);
		switch(ch){
			case 0:return;break;
			case 1:printf("Enter element to push: ");
				scanf("%d",&el);
				push(el);
				break;
			case 2: printf("%d popped from the stack",pop());
				break;
			case 3: peek();
				break;
			case 4: display();break;
			default: printf("Error: Invalid Choice!");break;
		}
	}
	return 0;
}
