#include <stdio.h>
int main(){
	char str[20];
	int i=0,j;
	printf("Enter a string: ");
	scanf("%s",str);
	while(str[i]!='\0'){
		i++;
	}
	printf("Reverse of %s is: ",str);
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
}
