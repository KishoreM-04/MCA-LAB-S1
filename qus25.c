//25. Read a polynomial and display
#include<stdio.h>
char p[5];
int i=-1;
void read(){
	printf("Enter a polynomial: ");
	scanf("%s",p);
}
void print(){
	printf("Polynomial: %s",p);
}

int main(){
	read();
	print();
	return 0;
}
