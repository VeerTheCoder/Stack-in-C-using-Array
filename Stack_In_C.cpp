//Stack implitation using array in C
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push();
void pop();
void display();
int stack[SIZE],t=-1;
int main(){
	int c;
	while(1){
		printf("\nPress 1. For Push\n");
		printf("Press 2. For Pop\n");
		printf("Press 3. For Display\n");
		printf("Press 4: For Exit\n");
		printf("Enter Your Choice:");
		scanf("%d",&c);
		switch(c){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid Input\n");
		}
	}
	return 0;
}
void push(){
	if(t==SIZE-1)
		printf("Can not Insert..Stack Overflow\n");
	else{
		int e;
		printf("Enter Element to Insert:");
		scanf("%d",&e);
		t++;
		stack[t]=e;
	}
}
void pop(){
	if(t==-1)
		printf("Nothing to Pop...Stack Underflow\n");
	else{
		int d=stack[t];
		--t;
	}
}
void display(){
	if(t==-1)
		printf("There is no Data..Stack Underflow\n");
	else{
		for(int i=0;i<=t;i++){
			printf("%d ",stack[i]);
		}
	}
}
