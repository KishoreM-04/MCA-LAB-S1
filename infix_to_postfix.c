#include<stdio.h>
char stack[30];
char infix[30];
char postfix[30];
int count=0;
int top=-1;
int top_p=-1;
void display_postfix(){
	int i;
	for(i=0;i<=top_p;i++){
		printf("%c ",postfix[i]);
	}
}

void push(char op){
	stack[++top]=op;
}

char pop(){
	return stack[top--];
}

int priority(char op){
	switch(op)	{
		case '*': return 2;break;
		case '/': return 2;break;
		case '-': return 1;break;
		case '+': return 1;break;
	}
	return 0;
}
void convert(){
	int i,p=0,j;
	char op;
	char el;
	for(i=0;i<=count;i++){
		op=infix[i];
		if(op>='a'&&op<='z' || op>='A'&&op<='Z'){
			postfix[++top_p]=op;	
		}
		else if(op=='+'||op=='-'||op=='*'||op=='/'){
			p=priority(op);
			while(top != -1 && stack[top] != '(' && priority(stack[top]) >= p) {
    postfix[++top_p] = pop();
}
push(op);
		}
		else if(op=='('){
			push(op);
		}
		else if(op==')'){
			while(stack[top]!='('){
				el=pop();
				postfix[++top_p]=el;
			}
			pop();
		}
	}
	while(top != -1){
        postfix[++top_p] = pop();
    }
	display_postfix();
}

void read(){
	int i=0;
	printf("Enter an infix expression: ");
	scanf("%s",infix);
	while(infix[i]!='\0')
	{
		i++;
	}
	count=i-1;
	convert();
}




int main(){
	read();
	return 0;
	
	
	
}
