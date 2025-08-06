//Demonstrate circular queue using array.
#include<stdio.h>
int q[10];
int rear=-1;int front=-1;
void enqueue(int el){
	if((rear+1)%10==front ){
		printf("Error: Queue Overflow");
		return;
	}
	else if(front==-1){
		front=0;
	}
		rear=(rear+1)%10;
		q[rear]=el;
		printf("%d inserted to queue",q[rear]);
}

int dequeue(){
	if(front==-1 ){
		printf("Error: Queue Underflow");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		front=(front+1)%10;
		return q[front];
	}
	return 0;
}

void display(){
	int i=front;
	if(front==-1){
		printf("Error: No elements to display");
		return;
	}
	else{
    	while (1) {
        	printf("%d ", q[i]);
        	if (i == rear)
            	break;
        	i = (i + 1) % 10;
    	}
	}
}

int main(){
	int ch=1,el;
	while(ch){
		printf("\n0. Exit\n1. Enqueue\n2. Dequeue\n3. Display\nSelect one operation: ");
		scanf("%d",&ch);
		switch(ch){
			case 0: printf("Exiting...");return;break;
			case 1: printf("Enter element to insert: ");
					scanf("%d",&el);
					enqueue(el);
					break;
			case 2: printf("%d deleted from queue",dequeue());
					break;
			case 3: display();break;
			default: printf("Error: Invalid Choice");break;
		}
	}
}
