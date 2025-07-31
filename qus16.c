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
void reverse(){
	int i;
	printf("Reverse of %s: ",stack);
	for(i=top-1;i>=0;i--){
		printf("%c",stack[i]);
	}
}
int main(){
	read();
	reverse();
	return 0;
}

