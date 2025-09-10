//Reverse a string using Stack
#include<stdio.h>
char stack[20];
int top=0;
void read(){
	int i=0;
	printf("Enter a string: ");
	scanf("%s",stack);
	while(stack[top]!='\0'){
		top++;
	}
}
char pop(){
	if(top==-1){
		return;
	}
	else{
		return stack[top--];
	}
}
void reverse(){
	int i;
	printf("Reverse of %s: ",stack);
	while(top!=-1){
		printf("%c",pop());
	}
}
int main(){
	read();
	reverse();
	return 0;
}

