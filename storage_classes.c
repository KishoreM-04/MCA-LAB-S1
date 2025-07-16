#include<stdio.h>
int g_var=10; //Global Variable
void reg_var(){
	register a=1; //Register Variable
	printf("\nRegister Variable: %d",++a);
}
void global_var(){
	printf("\nGlobal Variable: %d",++g_var);
}

void static_var(){
	static b=6;
	printf("\nStatic Variable: %d",b);
}

int main(){
	int c=2;
	printf("Local Variable: %d",c);
	reg_var();
	global_var();
	static_var();
}
