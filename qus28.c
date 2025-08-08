//28. Multiply two polynomials
//27. Subtract two polynomials
#include<stdio.h>
int p1[20]={0},p2[20]={0},res[20]={0};
int d1,d2,c,p;

void display(int p[20]){
	int i;
	printf("\nPolynomial:");
	for(i=20;i>=0;i--){
		if(p[i]!=0 && p[i]>=0){
			printf(" + %d x ^%d",p[i],i);
		}
		else if(p[i]!=0){
			printf(" %d x ^%d",p[i],i);
		}
	}
}

void read(){
	int i;
	printf("Enter Polynomial-1 (Power= -1 to stop): ");
	while(1){
		printf("\ncoefficient: ");
		scanf("%d",&c);
		printf("Power: ");
		scanf("%d",&p);
		if(p==-1){
			break;
		}
		else{
			p1[p]=c;
		}
	}
	display(p1);
	printf("\nEnter Polynomial-2 (Power= -1 to stop): ");
	while(1){
		printf("\ncoefficient: ");
		scanf("%d",&c);
		printf("Power: ");
		scanf("%d",&p);
		if(p==-1){
			break;
		}
		else{
			p2[p]=c;
		}
	}
	display(p2);
}


void mul_poly(){
	int i,j;
	for(i=0;i<20;i++)	{
		for(j=0;j<20;j++){
			res[i+j]+=p1[i]*p2[j];
		}
	}
	printf("\nPolynomial-1 + Polynomial-2");
	display(res);
}

int main(){
	read();
	mul_poly();	
}
